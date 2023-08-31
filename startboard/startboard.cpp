#include"head.h"
void play()
{

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
int main()
{
	startboard();
	return 0;
}
