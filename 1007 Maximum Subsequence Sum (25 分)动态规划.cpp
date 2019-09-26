//#include<iostream>
//#include<vector>
//using namespace std;
//int dp[2001][2001];
///*
//原因是我定义了一个二维数组
//int e[510][510];
//而在使用fill对数组初始化时，并没有采用二维数组初始化的方式，而是写成了:
//fill(e, e + 510 * 510, inf);
//正确写法应该是:
//fill(e[0], e[0] + 510 * 510, inf);
//*/
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector<int>V(n);
//	fill(dp[0], dp[0] + 2001 * 2001, 0);
//	int nmax = 0,left=0,right=0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i; j < n; j++)
//		{
//			if (i==j)
//			{
//				dp[i][j] = V[i];
//			}
//			else {
//				dp[i][j] = dp[i][j - 1] + V[j];
//				if (dp[i][j]>nmax)
//				{
//					nmax = dp[i][j];
//					left = i;
//					right = j;
//				}
//			}
//		}
//	}
//	cout << nmax << ' ' << left << ' ' << right << endl;
//	system("pause");
//	return 0;
//}