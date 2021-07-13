#include "sudoku.h"

#include "sudoku_rule_standard.h"

/**
 * @brief 统计int变量中 "1" 的个数
 * @param[in] value 变量value
 * @return int "1" 的个数
 */
static int number_integer(unsigned int value) 
{
    int num = 0;
    unsigned int bits = 1UL;
    for (int i = 0; i < sizeof(value) * 8; i++) {
        if (value & bits) {
            num++;
        }
        bits <<= 1;
    }
    return num;
}

static void free_pointer(void *pointer)
{
    if (!pointer) {
        free(pointer);
        pointer = NULL;
    }
}

static int sudoku_initialize_standard(sudoku *sdk, const char *init, int mode)
{
    /* sudoku内存分配初始化 */
    sdk->checkerboard = (suint *) malloc(sizeof(suint) * 9 * 9);
    sdk->possible     = (suint *) malloc(sizeof(suint) * 9 * 9);
    sdk->number       = (suint *) malloc(sizeof(suint) * 9 * 9);
    if (!sdk->checkerboard || !sdk->possible || !sdk->number) {
        goto standard_error;
    }
    sdk->rule_lists   = sudoku_standard_rule;
    sdk->square.allow   = 0x03FE;
    sdk->square.maximum = 0x0400;
    sdk->square.total   = 9*9;

    sudoku_set_initialize(sdk);

    /* 将初始数据填入句柄结构体中 
     * 先要将数据填入以后才能进行规则检查 */
    for (int i = 0; i < sdk->square.total; i++) {
        sdk->checkerboard[i] = SUDOKU_SETVALUE(init[i]);
    }

    for (int i = 0; i < sdk->square.total; i++) {
        if (sdk->checkerboard[i] == SUDOKU_SQUARE_NULL) {
            sdk->possible[i] = sudoku_rule_check(sdk, i, &sdk->rule_lists[i]);
            sdk->number[i]   = number_integer(sdk->possible[i]);
            if (sdk->number[i] == 0) {
                goto standard_error;
            }
        } else {
            sdk->possible[i] = sdk->checkerboard[i];
            sdk->number[i]   = 1;
        }
    }

    return 0;
standard_error:
    sudoku_release(sdk);
    return -1;
}




int sudoku_initialize(sudoku *sdk, const char *init, int mode)
{
    /************************function parameter check**************************/
    SUDOKU_ASSERT(sdk != NULL);
    SUDOKU_ASSERT(init != NULL);
    SUDOKU_ASSERT(IS_SUDOKU_MODE(mode));

    memset(sdk, 0, sizeof(sudoku));
    sudoku_set_deinitialize(sdk);
    sdk->mode = mode;

    int retval;
    switch(mode) {
    case SUDOKU_STANDARD : retval = sudoku_initialize_standard(sdk, init, mode); break;
    default : retval = -1; break;
    }

    if (retval != -1) {
        /* 标记初始化成功 */
        sudoku_set_initialize(sdk);
    }

    return retval;
}

int sudoku_answer(sudoku *sdk)
{
    SUDOKU_ASSERT(sdk != NULL);

    if (!sudoku_get_initialize(sdk)) {
        fprintf(stderr, "error : sudoku结构体句柄未初始化\n");
        return -1;
    }

    int index = 0; 
    while (sudoku_uniqueness(sdk, index)) {
        index++;
    }
    while (index >= 0 && index < sdk->square.total) {
        if (sudoku_square_update(sdk, index) == SUDOKU_SQUARE_NULL) {
            index = sudoku_index_sub(sdk, index);
        } else {
            index = sudoku_index_add(sdk, index);
        }
    }

    if (index < 0)  
        return -1;
    return 0;
}

int sudoku_release(sudoku *sdk)
{
    SUDOKU_ASSERT(sdk != NULL);

    free_pointer(sdk->checkerboard);
    free_pointer(sdk->possible);
    free_pointer(sdk->number);

    memset(sdk, 0, sizeof(sudoku));
    return 0;
}
