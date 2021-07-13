#ifndef __SUDOKU_RULE_STANDARD_H__
#define __SUDOKU_RULE_STANDARD_H__

#include "sudoku.h"

static suint sudoku_standard_rule_square0[] = {
         1,  2,  3,  4,  5,  6,  7,  8,  9, 18, 27, 36, 45, 54, 63, 72, 10, 11, 19, 20, 
};

static suint sudoku_standard_rule_square1[] = {
         0,  2,  3,  4,  5,  6,  7,  8, 10, 19, 28, 37, 46, 55, 64, 73,  9, 11, 18, 20, 
};

static suint sudoku_standard_rule_square2[] = {
         0,  1,  3,  4,  5,  6,  7,  8, 11, 20, 29, 38, 47, 56, 65, 74,  9, 10, 18, 19, 
};

static suint sudoku_standard_rule_square3[] = {
         0,  1,  2,  4,  5,  6,  7,  8, 12, 21, 30, 39, 48, 57, 66, 75, 13, 14, 22, 23, 
};

static suint sudoku_standard_rule_square4[] = {
         0,  1,  2,  3,  5,  6,  7,  8, 13, 22, 31, 40, 49, 58, 67, 76, 12, 14, 21, 23, 
};

static suint sudoku_standard_rule_square5[] = {
         0,  1,  2,  3,  4,  6,  7,  8, 14, 23, 32, 41, 50, 59, 68, 77, 12, 13, 21, 22, 
};

static suint sudoku_standard_rule_square6[] = {
         0,  1,  2,  3,  4,  5,  7,  8, 15, 24, 33, 42, 51, 60, 69, 78, 16, 17, 25, 26, 
};

static suint sudoku_standard_rule_square7[] = {
         0,  1,  2,  3,  4,  5,  6,  8, 16, 25, 34, 43, 52, 61, 70, 79, 15, 17, 24, 26, 
};

static suint sudoku_standard_rule_square8[] = {
         0,  1,  2,  3,  4,  5,  6,  7, 17, 26, 35, 44, 53, 62, 71, 80, 15, 16, 24, 25, 
};

static suint sudoku_standard_rule_square9[] = {
        10, 11, 12, 13, 14, 15, 16, 17,  0, 18, 27, 36, 45, 54, 63, 72,  1,  2, 19, 20, 
};

static suint sudoku_standard_rule_square10[] = {
         9, 11, 12, 13, 14, 15, 16, 17,  1, 19, 28, 37, 46, 55, 64, 73,  0,  2, 18, 20, 
};

static suint sudoku_standard_rule_square11[] = {
         9, 10, 12, 13, 14, 15, 16, 17,  2, 20, 29, 38, 47, 56, 65, 74,  0,  1, 18, 19, 
};

static suint sudoku_standard_rule_square12[] = {
         9, 10, 11, 13, 14, 15, 16, 17,  3, 21, 30, 39, 48, 57, 66, 75,  4,  5, 22, 23, 
};

static suint sudoku_standard_rule_square13[] = {
         9, 10, 11, 12, 14, 15, 16, 17,  4, 22, 31, 40, 49, 58, 67, 76,  3,  5, 21, 23, 
};

static suint sudoku_standard_rule_square14[] = {
         9, 10, 11, 12, 13, 15, 16, 17,  5, 23, 32, 41, 50, 59, 68, 77,  3,  4, 21, 22, 
};

static suint sudoku_standard_rule_square15[] = {
         9, 10, 11, 12, 13, 14, 16, 17,  6, 24, 33, 42, 51, 60, 69, 78,  7,  8, 25, 26, 
};

static suint sudoku_standard_rule_square16[] = {
         9, 10, 11, 12, 13, 14, 15, 17,  7, 25, 34, 43, 52, 61, 70, 79,  6,  8, 24, 26, 
};

static suint sudoku_standard_rule_square17[] = {
         9, 10, 11, 12, 13, 14, 15, 16,  8, 26, 35, 44, 53, 62, 71, 80,  6,  7, 24, 25, 
};

static suint sudoku_standard_rule_square18[] = {
        19, 20, 21, 22, 23, 24, 25, 26,  0,  9, 27, 36, 45, 54, 63, 72,  1,  2, 10, 11, 
};

static suint sudoku_standard_rule_square19[] = {
        18, 20, 21, 22, 23, 24, 25, 26,  1, 10, 28, 37, 46, 55, 64, 73,  0,  2,  9, 11, 
};

static suint sudoku_standard_rule_square20[] = {
        18, 19, 21, 22, 23, 24, 25, 26,  2, 11, 29, 38, 47, 56, 65, 74,  0,  1,  9, 10, 
};

static suint sudoku_standard_rule_square21[] = {
        18, 19, 20, 22, 23, 24, 25, 26,  3, 12, 30, 39, 48, 57, 66, 75,  4,  5, 13, 14, 
};

static suint sudoku_standard_rule_square22[] = {
        18, 19, 20, 21, 23, 24, 25, 26,  4, 13, 31, 40, 49, 58, 67, 76,  3,  5, 12, 14, 
};

static suint sudoku_standard_rule_square23[] = {
        18, 19, 20, 21, 22, 24, 25, 26,  5, 14, 32, 41, 50, 59, 68, 77,  3,  4, 12, 13, 
};

static suint sudoku_standard_rule_square24[] = {
        18, 19, 20, 21, 22, 23, 25, 26,  6, 15, 33, 42, 51, 60, 69, 78,  7,  8, 16, 17, 
};

static suint sudoku_standard_rule_square25[] = {
        18, 19, 20, 21, 22, 23, 24, 26,  7, 16, 34, 43, 52, 61, 70, 79,  6,  8, 15, 17, 
};

static suint sudoku_standard_rule_square26[] = {
        18, 19, 20, 21, 22, 23, 24, 25,  8, 17, 35, 44, 53, 62, 71, 80,  6,  7, 15, 16, 
};

static suint sudoku_standard_rule_square27[] = {
        28, 29, 30, 31, 32, 33, 34, 35,  0,  9, 18, 36, 45, 54, 63, 72, 37, 38, 46, 47, 
};

static suint sudoku_standard_rule_square28[] = {
        27, 29, 30, 31, 32, 33, 34, 35,  1, 10, 19, 37, 46, 55, 64, 73, 36, 38, 45, 47, 
};

static suint sudoku_standard_rule_square29[] = {
        27, 28, 30, 31, 32, 33, 34, 35,  2, 11, 20, 38, 47, 56, 65, 74, 36, 37, 45, 46, 
};

static suint sudoku_standard_rule_square30[] = {
        27, 28, 29, 31, 32, 33, 34, 35,  3, 12, 21, 39, 48, 57, 66, 75, 40, 41, 49, 50, 
};

static suint sudoku_standard_rule_square31[] = {
        27, 28, 29, 30, 32, 33, 34, 35,  4, 13, 22, 40, 49, 58, 67, 76, 39, 41, 48, 50, 
};

static suint sudoku_standard_rule_square32[] = {
        27, 28, 29, 30, 31, 33, 34, 35,  5, 14, 23, 41, 50, 59, 68, 77, 39, 40, 48, 49, 
};

static suint sudoku_standard_rule_square33[] = {
        27, 28, 29, 30, 31, 32, 34, 35,  6, 15, 24, 42, 51, 60, 69, 78, 43, 44, 52, 53, 
};

static suint sudoku_standard_rule_square34[] = {
        27, 28, 29, 30, 31, 32, 33, 35,  7, 16, 25, 43, 52, 61, 70, 79, 42, 44, 51, 53, 
};

static suint sudoku_standard_rule_square35[] = {
        27, 28, 29, 30, 31, 32, 33, 34,  8, 17, 26, 44, 53, 62, 71, 80, 42, 43, 51, 52, 
};

static suint sudoku_standard_rule_square36[] = {
        37, 38, 39, 40, 41, 42, 43, 44,  0,  9, 18, 27, 45, 54, 63, 72, 28, 29, 46, 47, 
};

static suint sudoku_standard_rule_square37[] = {
        36, 38, 39, 40, 41, 42, 43, 44,  1, 10, 19, 28, 46, 55, 64, 73, 27, 29, 45, 47, 
};

static suint sudoku_standard_rule_square38[] = {
        36, 37, 39, 40, 41, 42, 43, 44,  2, 11, 20, 29, 47, 56, 65, 74, 27, 28, 45, 46, 
};

static suint sudoku_standard_rule_square39[] = {
        36, 37, 38, 40, 41, 42, 43, 44,  3, 12, 21, 30, 48, 57, 66, 75, 31, 32, 49, 50, 
};

static suint sudoku_standard_rule_square40[] = {
        36, 37, 38, 39, 41, 42, 43, 44,  4, 13, 22, 31, 49, 58, 67, 76, 30, 32, 48, 50, 
};

static suint sudoku_standard_rule_square41[] = {
        36, 37, 38, 39, 40, 42, 43, 44,  5, 14, 23, 32, 50, 59, 68, 77, 30, 31, 48, 49, 
};

static suint sudoku_standard_rule_square42[] = {
        36, 37, 38, 39, 40, 41, 43, 44,  6, 15, 24, 33, 51, 60, 69, 78, 34, 35, 52, 53, 
};

static suint sudoku_standard_rule_square43[] = {
        36, 37, 38, 39, 40, 41, 42, 44,  7, 16, 25, 34, 52, 61, 70, 79, 33, 35, 51, 53, 
};

static suint sudoku_standard_rule_square44[] = {
        36, 37, 38, 39, 40, 41, 42, 43,  8, 17, 26, 35, 53, 62, 71, 80, 33, 34, 51, 52, 
};

static suint sudoku_standard_rule_square45[] = {
        46, 47, 48, 49, 50, 51, 52, 53,  0,  9, 18, 27, 36, 54, 63, 72, 28, 29, 37, 38, 
};

static suint sudoku_standard_rule_square46[] = {
        45, 47, 48, 49, 50, 51, 52, 53,  1, 10, 19, 28, 37, 55, 64, 73, 27, 29, 36, 38, 
};

static suint sudoku_standard_rule_square47[] = {
        45, 46, 48, 49, 50, 51, 52, 53,  2, 11, 20, 29, 38, 56, 65, 74, 27, 28, 36, 37, 
};

static suint sudoku_standard_rule_square48[] = {
        45, 46, 47, 49, 50, 51, 52, 53,  3, 12, 21, 30, 39, 57, 66, 75, 31, 32, 40, 41, 
};

static suint sudoku_standard_rule_square49[] = {
        45, 46, 47, 48, 50, 51, 52, 53,  4, 13, 22, 31, 40, 58, 67, 76, 30, 32, 39, 41, 
};

static suint sudoku_standard_rule_square50[] = {
        45, 46, 47, 48, 49, 51, 52, 53,  5, 14, 23, 32, 41, 59, 68, 77, 30, 31, 39, 40, 
};

static suint sudoku_standard_rule_square51[] = {
        45, 46, 47, 48, 49, 50, 52, 53,  6, 15, 24, 33, 42, 60, 69, 78, 34, 35, 43, 44, 
};

static suint sudoku_standard_rule_square52[] = {
        45, 46, 47, 48, 49, 50, 51, 53,  7, 16, 25, 34, 43, 61, 70, 79, 33, 35, 42, 44, 
};

static suint sudoku_standard_rule_square53[] = {
        45, 46, 47, 48, 49, 50, 51, 52,  8, 17, 26, 35, 44, 62, 71, 80, 33, 34, 42, 43, 
};

static suint sudoku_standard_rule_square54[] = {
        55, 56, 57, 58, 59, 60, 61, 62,  0,  9, 18, 27, 36, 45, 63, 72, 64, 65, 73, 74, 
};

static suint sudoku_standard_rule_square55[] = {
        54, 56, 57, 58, 59, 60, 61, 62,  1, 10, 19, 28, 37, 46, 64, 73, 63, 65, 72, 74, 
};

static suint sudoku_standard_rule_square56[] = {
        54, 55, 57, 58, 59, 60, 61, 62,  2, 11, 20, 29, 38, 47, 65, 74, 63, 64, 72, 73, 
};

static suint sudoku_standard_rule_square57[] = {
        54, 55, 56, 58, 59, 60, 61, 62,  3, 12, 21, 30, 39, 48, 66, 75, 67, 68, 76, 77, 
};

static suint sudoku_standard_rule_square58[] = {
        54, 55, 56, 57, 59, 60, 61, 62,  4, 13, 22, 31, 40, 49, 67, 76, 66, 68, 75, 77, 
};

static suint sudoku_standard_rule_square59[] = {
        54, 55, 56, 57, 58, 60, 61, 62,  5, 14, 23, 32, 41, 50, 68, 77, 66, 67, 75, 76, 
};

static suint sudoku_standard_rule_square60[] = {
        54, 55, 56, 57, 58, 59, 61, 62,  6, 15, 24, 33, 42, 51, 69, 78, 70, 71, 79, 80, 
};

static suint sudoku_standard_rule_square61[] = {
        54, 55, 56, 57, 58, 59, 60, 62,  7, 16, 25, 34, 43, 52, 70, 79, 69, 71, 78, 80, 
};

static suint sudoku_standard_rule_square62[] = {
        54, 55, 56, 57, 58, 59, 60, 61,  8, 17, 26, 35, 44, 53, 71, 80, 69, 70, 78, 79, 
};

static suint sudoku_standard_rule_square63[] = {
        64, 65, 66, 67, 68, 69, 70, 71,  0,  9, 18, 27, 36, 45, 54, 72, 55, 56, 73, 74, 
};

static suint sudoku_standard_rule_square64[] = {
        63, 65, 66, 67, 68, 69, 70, 71,  1, 10, 19, 28, 37, 46, 55, 73, 54, 56, 72, 74, 
};

static suint sudoku_standard_rule_square65[] = {
        63, 64, 66, 67, 68, 69, 70, 71,  2, 11, 20, 29, 38, 47, 56, 74, 54, 55, 72, 73, 
};

static suint sudoku_standard_rule_square66[] = {
        63, 64, 65, 67, 68, 69, 70, 71,  3, 12, 21, 30, 39, 48, 57, 75, 58, 59, 76, 77, 
};

static suint sudoku_standard_rule_square67[] = {
        63, 64, 65, 66, 68, 69, 70, 71,  4, 13, 22, 31, 40, 49, 58, 76, 57, 59, 75, 77, 
};

static suint sudoku_standard_rule_square68[] = {
        63, 64, 65, 66, 67, 69, 70, 71,  5, 14, 23, 32, 41, 50, 59, 77, 57, 58, 75, 76, 
};

static suint sudoku_standard_rule_square69[] = {
        63, 64, 65, 66, 67, 68, 70, 71,  6, 15, 24, 33, 42, 51, 60, 78, 61, 62, 79, 80, 
};

static suint sudoku_standard_rule_square70[] = {
        63, 64, 65, 66, 67, 68, 69, 71,  7, 16, 25, 34, 43, 52, 61, 79, 60, 62, 78, 80, 
};

static suint sudoku_standard_rule_square71[] = {
        63, 64, 65, 66, 67, 68, 69, 70,  8, 17, 26, 35, 44, 53, 62, 80, 60, 61, 78, 79, 
};

static suint sudoku_standard_rule_square72[] = {
        73, 74, 75, 76, 77, 78, 79, 80,  0,  9, 18, 27, 36, 45, 54, 63, 55, 56, 64, 65, 
};

static suint sudoku_standard_rule_square73[] = {
        72, 74, 75, 76, 77, 78, 79, 80,  1, 10, 19, 28, 37, 46, 55, 64, 54, 56, 63, 65, 
};

static suint sudoku_standard_rule_square74[] = {
        72, 73, 75, 76, 77, 78, 79, 80,  2, 11, 20, 29, 38, 47, 56, 65, 54, 55, 63, 64, 
};

static suint sudoku_standard_rule_square75[] = {
        72, 73, 74, 76, 77, 78, 79, 80,  3, 12, 21, 30, 39, 48, 57, 66, 58, 59, 67, 68, 
};

static suint sudoku_standard_rule_square76[] = {
        72, 73, 74, 75, 77, 78, 79, 80,  4, 13, 22, 31, 40, 49, 58, 67, 57, 59, 66, 68, 
};

static suint sudoku_standard_rule_square77[] = {
        72, 73, 74, 75, 76, 78, 79, 80,  5, 14, 23, 32, 41, 50, 59, 68, 57, 58, 66, 67, 
};

static suint sudoku_standard_rule_square78[] = {
        72, 73, 74, 75, 76, 77, 79, 80,  6, 15, 24, 33, 42, 51, 60, 69, 61, 62, 70, 71, 
};

static suint sudoku_standard_rule_square79[] = {
        72, 73, 74, 75, 76, 77, 78, 80,  7, 16, 25, 34, 43, 52, 61, 70, 60, 62, 69, 71, 
};

static suint sudoku_standard_rule_square80[] = {
        72, 73, 74, 75, 76, 77, 78, 79,  8, 17, 26, 35, 44, 53, 62, 71, 60, 61, 69, 70, 
};

rule sudoku_standard_rule[] = {
        {20, sudoku_standard_rule_square0,},
        {20, sudoku_standard_rule_square1,},
        {20, sudoku_standard_rule_square2,},
        {20, sudoku_standard_rule_square3,},
        {20, sudoku_standard_rule_square4,},
        {20, sudoku_standard_rule_square5,},
        {20, sudoku_standard_rule_square6,},
        {20, sudoku_standard_rule_square7,},
        {20, sudoku_standard_rule_square8,},
        {20, sudoku_standard_rule_square9,},
        {20, sudoku_standard_rule_square10,},
        {20, sudoku_standard_rule_square11,},
        {20, sudoku_standard_rule_square12,},
        {20, sudoku_standard_rule_square13,},
        {20, sudoku_standard_rule_square14,},
        {20, sudoku_standard_rule_square15,},
        {20, sudoku_standard_rule_square16,},
        {20, sudoku_standard_rule_square17,},
        {20, sudoku_standard_rule_square18,},
        {20, sudoku_standard_rule_square19,},
        {20, sudoku_standard_rule_square20,},
        {20, sudoku_standard_rule_square21,},
        {20, sudoku_standard_rule_square22,},
        {20, sudoku_standard_rule_square23,},
        {20, sudoku_standard_rule_square24,},
        {20, sudoku_standard_rule_square25,},
        {20, sudoku_standard_rule_square26,},
        {20, sudoku_standard_rule_square27,},
        {20, sudoku_standard_rule_square28,},
        {20, sudoku_standard_rule_square29,},
        {20, sudoku_standard_rule_square30,},
        {20, sudoku_standard_rule_square31,},
        {20, sudoku_standard_rule_square32,},
        {20, sudoku_standard_rule_square33,},
        {20, sudoku_standard_rule_square34,},
        {20, sudoku_standard_rule_square35,},
        {20, sudoku_standard_rule_square36,},
        {20, sudoku_standard_rule_square37,},
        {20, sudoku_standard_rule_square38,},
        {20, sudoku_standard_rule_square39,},
        {20, sudoku_standard_rule_square40,},
        {20, sudoku_standard_rule_square41,},
        {20, sudoku_standard_rule_square42,},
        {20, sudoku_standard_rule_square43,},
        {20, sudoku_standard_rule_square44,},
        {20, sudoku_standard_rule_square45,},
        {20, sudoku_standard_rule_square46,},
        {20, sudoku_standard_rule_square47,},
        {20, sudoku_standard_rule_square48,},
        {20, sudoku_standard_rule_square49,},
        {20, sudoku_standard_rule_square50,},
        {20, sudoku_standard_rule_square51,},
        {20, sudoku_standard_rule_square52,},
        {20, sudoku_standard_rule_square53,},
        {20, sudoku_standard_rule_square54,},
        {20, sudoku_standard_rule_square55,},
        {20, sudoku_standard_rule_square56,},
        {20, sudoku_standard_rule_square57,},
        {20, sudoku_standard_rule_square58,},
        {20, sudoku_standard_rule_square59,},
        {20, sudoku_standard_rule_square60,},
        {20, sudoku_standard_rule_square61,},
        {20, sudoku_standard_rule_square62,},
        {20, sudoku_standard_rule_square63,},
        {20, sudoku_standard_rule_square64,},
        {20, sudoku_standard_rule_square65,},
        {20, sudoku_standard_rule_square66,},
        {20, sudoku_standard_rule_square67,},
        {20, sudoku_standard_rule_square68,},
        {20, sudoku_standard_rule_square69,},
        {20, sudoku_standard_rule_square70,},
        {20, sudoku_standard_rule_square71,},
        {20, sudoku_standard_rule_square72,},
        {20, sudoku_standard_rule_square73,},
        {20, sudoku_standard_rule_square74,},
        {20, sudoku_standard_rule_square75,},
        {20, sudoku_standard_rule_square76,},
        {20, sudoku_standard_rule_square77,},
        {20, sudoku_standard_rule_square78,},
        {20, sudoku_standard_rule_square79,},
        {20, sudoku_standard_rule_square80,},
};

#endif /* !__SUDOKU_RULE_STANDARD_H__ */
