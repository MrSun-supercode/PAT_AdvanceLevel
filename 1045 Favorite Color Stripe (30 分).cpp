///*
//大概的思路是按照favorite的序列中在L的序列中找最大的符合条件的长度值，因为favorite的序列元素值没有什么联系
//所以使其按出现的先后顺序保存到book中，这样得到一个非递减序列，然后使用动态规划LIS进行解
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//vector<int>dp;
//vector<int>V;
//const int maxn = 210;
//int book[maxn];
//int main(void)
//{
//	int n, m, l;
//	cin >> n >> m;
//	fill(book, book + maxn, 0);
//	for (int i = 1; i <= m; i++)
//	{
//		int temp;
//		cin >> temp;
//		book[temp] = i;//book[temp]=i表示temp元素对应的下标为i，i为1-m并且是有序的
//	}
//	cin >> l;
//	for (int i = 0; i < l; i++)
//	{
//		int temp;
//		cin >> temp;
//		if (book[temp] > 0)//如果temp在book中出现过，即属于favourite，那么将其加入V中，否则跳过
//		{
//			V.push_back(book[temp]);
//		}
//	}
//	dp.resize(V.size());
//	/*for (int i = 0; i < V.size(); i++)
//	{
//		cout << V[i] << ' ';
//	}*/
//	int cnt = 0;//用来保存最大的dp[i]
//	for (int i = 0; i < V.size(); i++)//LIS动态规划算法
//	{
//		dp[i] = 1;
//		for (int j = 0; j < i; j++)
//		{
//			if (V[i] >= V[j] && dp[i] < dp[j] + 1)
//			{
//				dp[i] = dp[j] + 1;				
//			}
//		}
//		cnt = max(cnt, dp[i]);
//	}
//	cout << cnt << endl;
//	system("pause");
//	return 0;
//}