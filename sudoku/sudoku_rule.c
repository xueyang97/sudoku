#include "sudoku.h"

suint sudoku_rule_check(sudoku *sdk, int index, rule *index_rule)
{
    SUDOKU_ASSERT(sdk != NULL);
    SUDOKU_ASSERT(index_rule != NULL);
    SUDOKU_ASSERT(index >= 0 && index < sdk->square.total);
    SUDOKU_ASSERT(sudoku_get_initialize(sdk));
    // SUDOKU_ASSERT(!sudoku_uniqueness(sdk, index));

    int number = index_rule->length;
    suint *lists = index_rule->squarex_rules;
    suint possible_lists = 0;
    for (int i = 0; i < number; i++) {
        possible_lists |= sdk->checkerboard[lists[i]];
    }
    return (~possible_lists) & sdk->square.allow;
}

int sudoku_index_add(sudoku *sdk, int index)
{
    SUDOKU_ASSERT(sdk != NULL);
    SUDOKU_ASSERT(index >= 0 && index < sdk->square.total);
    SUDOKU_ASSERT(sudoku_get_initialize(sdk));

    do {
        index++;
    } while(index < sdk->square.total && sudoku_uniqueness(sdk, index));
    return index;
}


int sudoku_index_sub(sudoku *sdk, int index)
{
    SUDOKU_ASSERT(sdk != NULL);
    SUDOKU_ASSERT(index >= 0 && index < sdk->square.total);
    SUDOKU_ASSERT(sudoku_get_initialize(sdk));

    do {
        index--;
    } while(index >= 0 && sudoku_uniqueness(sdk, index));
    return index;
}

suint sudoku_square_update(sudoku *sdk, int index)
{
    SUDOKU_ASSERT(sdk != NULL);
    SUDOKU_ASSERT(index >= 0 && index < sdk->square.total);
    SUDOKU_ASSERT(sudoku_get_initialize(sdk));

    suint bits = sdk->checkerboard[index] << 1;
    suint lists = sudoku_rule_check(sdk, index, &sdk->rule_lists[index]) 
                & sdk->possible[index];
    for (; bits < sdk->square.maximum; bits <<= 1) {
        if (bits & lists) break;
    }
    if (bits >= sdk->square.maximum) {
        bits = SUDOKU_SQUARE_NULL;
    }
    
    sdk->checkerboard[index] = bits;
    return bits;
}


