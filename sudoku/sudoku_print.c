#include "sudoku.h"

static int log2number(suint value)
{
    if (value == 0) {
        return -1;
    }

    int count = 0;
    for (suint bits = 0x0001; (bits & value) == 0; bits <<= 1) {
        count++;
    }
    return count;
}

static void sudoku_print_standard(sudoku *sdk)
{
    suint *data = sdk->checkerboard;
    for (int j = 0; j < 9; j++) {
        for (int i = 0; i < 9; i++) {
            printf("%d ", log2number(data[j * 9 + i]));
            if (i == 2 || i == 5) {
                printf("| ");
            }
        }
        printf("\n");
        if (j == 2 || j == 5) {
            printf("---------------------\n");
        }
    }
}

void skprint(sudoku *sdk)
{
    /************************function parameter check**************************/
    SUDOKU_ASSERT(sdk != NULL);
    SUDOKU_ASSERT(sudoku_get_initialize(sdk));

    switch(sdk->mode) {
    case SUDOKU_STANDARD :
        sudoku_print_standard(sdk);
        break;
    }
}

void sudoku_assert(boolean __x, const char *__file, const char *__func, const int __line)
{
    if (__x == false) {
        fprintf(stderr, "file : %s, sudoku function (%s) parameter error. line %d\n", 
                        __file, __func, __line);
        exit(1);
    }
}
