///*
//测试点2是当m为1时不是素数
//最后一个测试点无法通过，不知道为什么
//下面的是自己的代码，需要注意在解决冲突时使用了仅正向的平方检测
//*/
////#include<iostream>
////#include<vector>
////using namespace std;
////bool isPrime(int m)
////{
////	if (m == 1)
////	{
////		return false;
////	}
////	for (int i = 2; i*i <= m; i++)
////	{
////		if (m%i == 0)
////		{
////			return false;
////		}
////	}
////	return true;
////}
////int findHigherPrime(int m)
////{
////	while (!isPrime(m))
////	{
////		m++;
////	}
////	return m;
////}
////int main(void)
////{
////	int m, n;
////	cin >> m >> n;
////	m = findHigherPrime(m);
////	vector<int>V(m);
////	for (int i = 0; i < n; i++)
////	{
////		int temp;
////		cin >> temp;
////		bool flag = false;
////		if (i != 0)
////		{
////			cout << ' ';
////		}
////		if (V[temp%m] != 1)
////		{
////			cout << temp % m;
////			V[temp % m] = 1;
////		}
////		else {
////			for (int j = 1; j < V.size(); j++)
////			{
////				int index = (temp + j * j) % V.size();
////				if (V[index] != 1)
////				{
////					cout << index;
////					V[index] == 1;
////					flag = true;
////					break;
////				}
////			}
////			if (!flag)
////			{
////				cout << '-';
////			}
////		}
////	}
////	system("pause");
////	return 0;
////}
///*
//参考柳婼大神的代码，更简洁
//*/
//#include<iostream>
//#include<vector>
//using namespace std;
//bool isPrime(int m)
//{
//	if (m == 1)
//	{
//		return false;
//	}
//	for (int i = 2; i*i <= m; i++)
//	{
//		if (m%i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int findHigherPrime(int m)
//{
//	while (!isPrime(m))
//	{
//		m++;
//	}
//	return m;
//}
//void insert(int temp, vector<int>&V)//这一步是关键，没输入一个数时，i从0-V.size()，然后看是否冲突，若冲突就continue，否则就更新
//{
//	for (int i = 0; i < V.size(); i++)
//	{
//		int index = (temp + i * i) % V.size();
//		if (V[index] != 1)
//		{
//			V[index] = 1;
//			cout << index;
//			return;
//		}
//	}
//	cout << '-';//当for循环遍历结束还未跳出程序即使用正向二次检测解决冲突失败，则输出-
//}
//int main(void)
//{
//	int m, n;
//	cin >> m >> n;
//	m = findHigherPrime(m);
//	vector<int>V(m);
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		if (i != 0)
//		{
//			cout << ' ';
//		}
//		insert(temp, V);
//	}
//	system("pause");
//	return 0;
//}