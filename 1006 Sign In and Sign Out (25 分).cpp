#include<iostream>
#include<string>
using namespace std;
/*
˼·��ʹ������string���͵�����������ѧ���������Լ���������ʱ���Լ���ȥ��ʱ�䡣
ֱ��ʹ��string����ʱ���ʽ���ҽ��бȽϼ��ɡ�
min��max�����ҵ�ѧ������ʵ����ʱ�����Сֵ�����Լ��뿪ʵ����ʱ������ֵ������Ȼ�������Ӧ��ѧ����������
*/
int main(void)
{
	int n;
	cin >> n;
	string name[100];
	string unlock[100];
	string lock[100];
	for (int i = 0; i < n; i++)
	{
		cin >> name[i] >> unlock[i] >> lock[i];
	}
	int min = 0, max = 0;
	for (int i = 1; i < n; i++)
	{
		if (unlock[i] < unlock[min])
		{
			min = i;
		}
	}
	for (int i = 1; i < n; i++)
	{
		if (lock[i] > lock[max])
		{
			max = i;
		}
	}
	cout << name[min] << ' ' << name[max];
	system("pause");
	return 0;
}