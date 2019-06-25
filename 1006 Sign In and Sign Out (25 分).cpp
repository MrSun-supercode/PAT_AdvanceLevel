#include<iostream>
#include<string>
using namespace std;
/*
思路：使用三个string类型的数组来保存学生的名字以及各自来的时间以及离去的时间。
直接使用string保存时间格式并且进行比较即可。
min与max都是找到学生来到实验室时间的最小值索引以及离开实验室时间的最大值索引，然后输出对应的学生姓名即可
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