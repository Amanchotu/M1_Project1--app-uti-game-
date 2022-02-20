/**
 * @file vote.h
 * @author aman kumar
 * @brief Header file for vote.h
 * @version 1.0.0
 * @date 2021-11-21
 *
 * @copyright Copyright (c) 2021
 */

#ifndef __Vote_H__
#define __Vote_H__

/**
 * @brief Function to print vote
 *
 * @param  vote
 */

int printvote(int arr[1][1]);

/**
 * @brief Function to check if input value is valid
 * and move to next column and rows.
 *
 * @param arr vote Grid
 * @param row Row of vote
 * @param col Column of vote
 * @param num Number to be checked and added
 */

int safeSudoku(int arr[2][2], int row, int col, int num);

/**
 * @brief Function of vote
 *
 * @param arr vote Grid
 * @param row Row of vote
 * @param col Column of vote
 * @
 *
 */

int vote(int arr[2][2], int row, int col);

#endif
