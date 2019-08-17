///*
//一开始没读准题，直接使用数组，然后每遇到一个值就让数组的值+1,结果有正确的，有超时的，也有段错误
//看了柳婼大神，发现自己思路错了，我找的是最大值，实际上是找
//A strictly dominant color takes more than half of the total area.
//超过m*n的一半的主导色，也就是如果p[temp]>mid,则直接输出返回即可。
//使用map时，初次使用时比如P[temp]是为0的，可以直接++；
//int temp;
//cin >> temp;
//P[temp]++;
//*/
//#include<iostream>
//#include<map>
//using namespace std;
//int main(void)
//{
//	map<int, int>P;
//	int n, m;
//	cin >> n >> m;
//	int mid = n * m / 2;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			int temp;
//			cin >> temp;
//			P[temp]++;
//			if (P[temp] > mid)
//			{
//				cout << temp << endl;
//				system("pause");
//				return 0;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}