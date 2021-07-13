#ifndef __SUDOKU_H__
#define __SUDOKU_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUDOKU_DEBUG    0

/* 数据类型重命名 */
#define suint       unsigned short
#define sint        short
#define boolean     char
#define true        (boolean)1
#define false       (boolean)0


#define SUDOKU_INITIALIZE_DATA      (suint)0xAA55
#define SUDOKU_SETVALUE(X)          ((suint)1 << (X))
#define SUDOKU_SQUARE_NULL          SUDOKU_SETVALUE(0)

typedef struct sudoku_rule_t {
    int     length;
    suint   *squarex_rules;
}rule;

typedef struct sudoku_square_t {
    suint   allow;      /* 方格允许填入的数值(不包括 "0") */
    suint   maximum;    /* 方格允许填入的值的范围(最大值+1) */
    int     total;      /* 数独所有方格总数 */
}square;

/**
 * @struct sudoku句柄结构体
 * @brief 定义了破解数独时所使用的变量;该结构体使用前必须初始化;
 * 1. 数独所有变量的储存使用2^n格式(其中n为当前方格的值),如当前方格值为1,则存储的值为 2^1=2;
 * 2. 数独方格可能性列表存储的值为所有可能值相与;如该格可能值为2,3,则可能性列表存储值为000001100b(不包括0);
 * 3. 数独方格可以填0(0x0001),表示未填入任何数据;可能性列表不包括"0";
 */
typedef struct sudoku_t {
    suint   mode;
    suint   initialize;         /*!< 用于判断数独句柄结构体是否初始化*/
    suint   *checkerboard;      /*!< 数独填充棋盘,用于填充数据使用 */
    suint   *possible;          /*!< 用于储存数独方格可能性列表(不包括"0") */
    suint   *number;            /*!< 用于储存数独方格可能填充数据个数,如果个数 =1 表示该方格数据已确定 */
    rule    *rule_lists;        /*!< 数独规则检查列表 */
    square  square;
}sudoku;

enum sudoku_type{
    SUDOKU_STANDARD = 0,
    SUDOKU_SQUARE_9X9 = SUDOKU_STANDARD,
    // SUDOKU_SQUARE_4X4, 
    // SUDOKU_SQUARE_6X6,
    // SUDOKU_MINI = SUDOKU_SQUARE_6X6,
    // SUDOKU_JIGSAW,
};


/**
 * @brief 为了提高代码运行速度,将一些函数设置为内联
 * @note  因为使用内联函数,请使用c99编译器
 * @ {
 */

#ifdef __GNUC__
#define __STATIC_INLINE       static inline __attribute__((always_inline))
#else
#define __STATIC_INLINE       static inline
#endif

#define STATIC_INLINE   __STATIC_INLINE

/**
 * @brief (inline)获取数独方格的值
 * @param[in] sdk       sudoku句柄结构体指针
 * @param[in] index     方格序列号
 * @return suint  数独方格的值
 */
STATIC_INLINE suint sudoku_get_square_value(struct sudoku_t *sdk, int index) 
{
    return sdk->checkerboard[index];
}

/**
 * @brief (inline)获取数独方格可能性列表
 * @param[in] sdk       sudoku句柄结构体指针
 * @param[in] index     方格序列号
 * @return suint  数独方格可能性列表
 */
STATIC_INLINE suint sudoku_get_possible_list(struct sudoku_t *sdk, int index) 
{
    return sdk->possible[index];
}

/**
 * @brief (inline)判断该方格填入的值是否是唯一的
 * @param[in] sdk       sudoku句柄结构体指针
 * @param[in] index     方格序列号
 * @return boolean  true/false
 */
STATIC_INLINE boolean sudoku_uniqueness(struct sudoku_t *sdk, int index) 
{
    return sdk->number[index] == 1;
}

/**
 * @brief (inline)标记句柄结构体已被初始化
 * @param[in] sdk       sudoku句柄结构体指针
 */
STATIC_INLINE void sudoku_set_initialize(struct sudoku_t *sdk) 
{
    sdk->initialize = SUDOKU_INITIALIZE_DATA;
}

/**
 * @brief (inline)标记句柄结构体初始化失败
 * @param[in] sdk       sudoku句柄结构体指针
 */
STATIC_INLINE void sudoku_set_deinitialize(struct sudoku_t *sdk) 
{
    sdk->initialize = (suint)(~SUDOKU_INITIALIZE_DATA);
}

/**
 * @brief (inline)判断句柄结构体是否被初始化成功
 * @param[in] sdk       sudoku句柄结构体指针
 * @return boolean  true/false
 */
STATIC_INLINE boolean sudoku_get_initialize(struct sudoku_t *sdk) 
{
    return sdk->initialize == SUDOKU_INITIALIZE_DATA;
}

#if defined(SUDOKU_DEBUG) && (SUDOKU_DEBUG > 0)
#define SUDOKU_ASSERT(X)    sudoku_assert((X), __FILE__, __FUNCTION__, __LINE__)
#else
#define SUDOKU_ASSERT(X)    (void)0
#endif

/**
 * @ }
 */

#define IS_SUDOKU_MODE(MODE)    (((MODE) == SUDOKU_STANDARD) || \
                                 ((MODE) == SUDOKU_SQUARE_9X9))




int sudoku_initialize(sudoku *sdk, const char *init, int mode);
int sudoku_release(sudoku *sdk);
int sudoku_answer(sudoku *sdk);

void skprint(sudoku *sdk);
void sudoku_assert(boolean __x, const char *__file, const char *__func, const int __line);

suint sudoku_rule_check(sudoku *sdk, int index, rule *index_rule);
int   sudoku_index_add(sudoku *sdk, int index);
int   sudoku_index_sub(sudoku *sdk, int index);
suint sudoku_square_update(sudoku *sdk, int index);



#endif /* !__SUDOKU_H__ */