#include "sudoku.h"

static const char sudoku_default[9 * 9] = {
    0,0,0, 0,1,0,  0,5,4,
    8,0,0, 0,0,0,  0,0,0,
    0,0,0, 0,0,0,  0,0,0,

    6,5,0, 4,0,0,  0,0,0,
    0,0,0, 0,0,2,  7,3,0,
    0,0,0, 0,0,0,  0,0,0,

    2,1,0, 0,0,0,  8,0,0,
    7,0,0, 0,0,0,  3,0,0,
    0,0,0, 3,5,0,  0,0,0,
};

#include <time.h>
int main(int argc, char *argv[])
{
    sudoku sdk;
    clock_t start, end;

    start = clock();
    sudoku_initialize(&sdk, sudoku_default, SUDOKU_STANDARD);
    sudoku_answer(&sdk);
    end = clock();

    printf("time = %f\n", (float)(end - start) / (float)CLOCKS_PER_SEC);
    skprint(&sdk);
    
    sudoku_release(&sdk);
}
