#include"head.h"
void play()
{

}
void startboard()
{
	int a;
	cout << "��ӭ����������" << endl;
	cout << "��ʼ��Ϸ(1)\n" << "����˵����2��\n" << "�˳���Ϸ(3)\n";
	cout << "��ѡ��\n";
	cin >> a;
	switch (a)
	{
	case 1:play(); break;
	case 2:cout << "�������㶮��" << endl; startboard(); break;
	case 3:cout << "��ӭ�´�����"; break;
	}
}
int main()
{
	startboard();
	return 0;
}
