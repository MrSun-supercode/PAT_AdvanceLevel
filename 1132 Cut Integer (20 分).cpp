///*
//水题居然全是坑，首先思路很简单，将数分开然后看这两个数的乘积是否可以被x整除。
//首先看错了写的是加号，结果只有第一个测试点可以通过
//后来浮点错误，判断取余时两数乘积==0，所以单独列一下。
//*/
//#include<iostream>
//#include<cmath>
//using namespace std;
//bool deal(int x)
//{
//	int temp = x;
//	int cnt = 0;
//	while (temp != 0)//计算x的位数并用cnt保存
//	{
//		temp /= 10;
//		cnt++;
//	}
//	temp = x / pow(10, cnt / 2);//前cnt/2位数
//	int temp_t = x - temp * pow(10, cnt/2);//后cnt/2位数
//	if (temp*temp_t==0)//若乘积为0，返回false
//	{
//		return false;
//	}
//	if (x%(temp*temp_t)==0)
//	{
//		return true;
//	}
//	else return false;
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		if (deal(temp))
//		{
//			cout << "Yes" << endl;
//		}
//		else cout << "No" << endl;
//	}
//	system("pause");
//	return 0;
//}