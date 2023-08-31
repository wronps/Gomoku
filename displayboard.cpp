#include"head.h"
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
        cout<<" "<<i+1; //add "  "<<i+1 to display the number of the row
        cout << endl; 
        if (i!=14)
        { 
            cout << "|  |  |  |  |  |  |  |  |  |  |  |  |  |  |\n";
        }
       
    }
    cout << "\n1  2  3  4  5  6  7  8  9  10 11 12 13 14";
   
}
int main()
{
	int board[15][15] = { 1 };
	int n = 15;
	displayboard(board, n);
	return 0;
}