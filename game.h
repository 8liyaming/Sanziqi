#pragma once

//头文件的包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//符号的定义
#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘函数
void InitBoard(char board[ROW][COL],int row, int col);

//打印棋盘函数
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断棋面(玩家赢了*  电脑赢了 #  平局 Q  游戏继续  C)
char IsWin(char board[ROW][COL], int row, int col);