//#include<iostream>
//using namespace std;
//int gcd(int a, int b)//辗转相除，详情见156页PAT算法笔记,若a<b，则第一个迭代过程交换a，b的值
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	else return gcd(b, a%b);
//}
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//	int temp = gcd(n, m);
//	cout <<"最大公约数是："<< temp << endl;
//	cout << "最小公倍数是：" << n / temp * m << endl;//最小公倍数在求出最大公约数的基础上n*m/temp，但是n*m有可能溢出，所以先让n/temp再乘m,因为temp为n，m的最大公约数所以一定可以被n或m整除
//	system("pause");
//	return 0;
//}