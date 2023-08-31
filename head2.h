#include<iostream>
using namespace std;
void displayboard(int board[][15], int n);
void startboard();
void play();
extern int board[15][15] = { 0 };
extern int n = 15,judge=1;
void whiteplayer();
void blackplayer();
