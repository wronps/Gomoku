
#include"head2.h"
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
                cout << "O";
            }
            else if (board[i][j] == -1)
            {
                cout << "#";
            }
            cout << "--";
        }
        if (board[i][j] == 0)
        {
            cout << "+";
        }
        else if (board[i][j] == 1)
        {
            cout << "O";
        }
        else if (board[i][j] == -1)
        {
            cout << "#";
        }
        cout << " " << i + 1; //add "  "<<i+1 to display the number of the row
        cout << endl;
        if (i != 14)
        {
            cout << "|  |  |  |  |  |  |  |  |  |  |  |  |  |  |\n";
        }

    }
    cout << "\n1  2  3  4  5  6  7  8  9  10 11 12 13 14 15\n";

}
void play()
{
    while (judge) {
        displayboard(board, n);
        whiteplayer();
        system("cls");
        displayboard(board,n);
        blackplayer();
        system("cls");
    }
}
void startboard()
{
	int a;
	cout << "欢迎进入五子棋" << endl;
	cout << "开始游戏(1)\n" << "规则说明（2）\n" << "退出游戏(3)\n";
	cout << "请选择\n";
	cin >> a;
	switch (a)
	{
	case 1:play(); break;
	case 2:cout << "我相信你懂的" << endl; startboard(); break;
	case 3:cout << "欢迎下次再来"; break;
	}
}
void whiteplayer()
{
    int a, b;
    cout<<"请白方下棋" << endl;
    while (1)
    {
        cin >> a >> b;
        if (board[a - 1][b - 1] == 0)
        {
            board[a - 1][b - 1] = 1;
            break;
        }
        else
        {
            cout << "非法操作,请重新下棋" << endl;
        }
    }
}
void blackplayer()
{
    int a, b;
    cout << "请黑方下棋" << endl;
    while (1)
    {
        cin >> a >> b;
        if (board[a - 1][b - 1] == 0)
        {
            board[a - 1][b - 1] = -1;
            break;
        }
        else
        {
            cout << "非法操作,请重新下棋" << endl;
        }
    }
}
int main()
{
    startboard();
}