#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _GAME_H_
#define _GAME_H_
#define Row 3
#define Col 3
void Player(char board[Row][Col], int row, int col);
void Computer(char board[Row][Col], int row, int col);
char Iswin(char board[Row][Col], int row, int col);
int Isfull(char board[Row][Col], int row, int col);
void Initboard(char board[Row][Col], int row, int col);
void Displayboard(char board[Row][Col], int row, int col);
void menu();
void game();
#endif