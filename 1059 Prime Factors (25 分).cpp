///*
//思路：这道题要 求n的满足相乘等于n的所有素数因子，
//我们先建立一个素数表，建立maxn要取2000001，因为longint最大是10位数，取平方根为五位数，所以我们取六位数，又因为第一个测试点
//如果取1000001会浮点错误，所以取2000001
//保存好素数表之后，将所有素数表存到vector中，
//然后从头开始遍历，如果n能够整除vector中的素数，那么说明那个素数是n的素数因子，将其保存下来（包括个数，即cnt）
//最后输出
//*/
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//const int maxn = 2000001;
//int list[maxn];
//vector<int>V;
//void isPrime(int n)
//{
//	fill(list, list + maxn, 1);
//	for (int i = 2; i*i <= n; i++)
//	{
//		for (int j = 2 * i; j < n; j += i)
//		{
//			list[j] = 0;
//		}
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		if (list[i] == 1)
//		{
//			V.push_back(i);
//		}
//	}
//}
//int main(void)
//{
//	long int n;
//	cin >> n;
//	int temp = (int)(sqrt(1.0*maxn));
//	isPrime(temp);
//	/*
//	下面注释的是测试模块
//	*/
//	/*for (int i = 0; i < 100; i++)
//	{
//		cout << list[i] << ' ';
//	}*/
//	/*for (int i = 0; i < V.size(); i++)
//	{
//		cout << V[i] << ' ';
//	}*/
//	if (n == 1)//如果n为1，直接输出
//	{
//		cout << "1=1" << endl;
//	}
//	else {
//		cout << n << "=";
//		int cnt;
//		bool flag = false;//防止*号提前输出
//		for (int i = 0; n >= 2; i++)//
//		{
//			cnt = 0;
//			while (n%V[i] == 0)//找到了素数因子，n要被除，并且cnt记录个数，以便输出^之后的内容
//			{
//				n /= V[i];
//				cnt++;
//			}
//			if (cnt == 0)	continue;//如果当前V[i]不是n的素数因子，则i++
//			if (flag)//防止*号提前输出
//			{
//				cout << '*';
//			}
//			if (cnt == 1)//如果素数因子只出现了一次，那么直接输出即可，同时将flag置为true，以便下一次先输出*号，但防止第一次先输出*号
//			{
//				cout << V[i];
//				flag = true;
//			}
//			else {//如果素数因子出现了多次，那么需要输出出现的次数cnt，同时将flag置为true，以便下一次先输出*号，但防止第一次先输出*号
//				cout << V[i] << '^' << cnt;
//				flag = true;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}