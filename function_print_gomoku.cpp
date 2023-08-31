#include<iostream>
using namespace std;
void displayboard(int board[][15], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (board[i][j] == 0)
            {
                cout << "+";
            }
            else if (board[i][j] == 1)
            {
                cout << "o";
            }
            else if (board[i][j] == -1)
            {
                cout << "*";
            }
            cout << "--";
        }
        if (board[i][j] == 0)
        {
            cout << "+";
        }
        else if (board[i][j] == 1)
        {
            cout << "o";
        }
        else if (board[i][j] == -1)
        {
            cout << "*";
        }
        cout << endl; 
        if (i!=14)
        { 
            cout << "|  |  |  |  |  |  |  |  |  |  |  |  |  |  |\n";
        }
       
    }
   
}

int main()
{
	int board[15][15] = { 0 };
	int n = 15;
	displayboard(board, n);
	return 0;
}