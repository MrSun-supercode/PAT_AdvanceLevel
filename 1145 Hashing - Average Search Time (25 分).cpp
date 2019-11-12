//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<cmath>
//using namespace std;
//const int maxsize = 10000;
//int msize, n, m;
//bool isPrime(int n)
//{
//	int i;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int findSmallestPrime(int n)
//{
//	if (n<=1)
//	{
//		n = 2;
//	}
//	for (int i = n; i < maxsize; i++)
//	{
//		if (isPrime(i))
//		{
//			return i;
//		}
//	}
//}
//int H(int key)
//{
//	return key % msize;
//}
//int main(void)
//{
//	cin >> msize >> n >> m;
//	msize = findSmallestPrime(msize);
//	vector<int>V(msize);
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		int index = H(temp);
//		if (V[index] == 0)
//		{
//			V[index] = temp;
//		}
//		else {
//			bool flag = false;
//			for (int j = 1; j < msize ; j++)
//			{
//				int t = H(temp + j * j);
//				if (V[t] == 0)
//				{
//					V[t] = temp;
//					flag = true;
//					break;
//				}
//			}
//			if (!flag)
//			{
//				cout << temp << " cannot be inserted." << endl;
//			}
//		}
//	}
//	/*for (int i = 0; i < V.size(); i++)
//	{
//		cout << V[i] << endl;
//	}*/
//	int cnt = 0;
//	for (int i = 0; i < m; i++)
//	{
//		int temp;
//		cin >> temp;
//		int index = H(temp);
//		for (int j = 0; j <= msize; j++)
//		{
//			int t = H(temp + j * j);
//			cnt++;
//			if (V[t] == temp || V[t] == 0)
//			{
//				break;
//			}
//		}
//	}
//	printf("%.1lf\n", cnt * 1.0 / m);
//	system("pause");
//	return 0;
//}