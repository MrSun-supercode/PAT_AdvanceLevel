///*
//一开始的思路很麻烦，参考柳婼大佬思路：
//先判断是否是clique，只需判断给定的团中是否所有元素都相连即可
//然后再从是clique的团中判断是否是最大clique，判断依据是在除了团中节点的所有剩余节点中能否有一个节点与团中所有节点都相连（若存在，说明其不是最大团）
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxn = 200;
//int arraylist[maxn][maxn];
//int find(vector<int>v, int temp)
//{
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (v[i] == temp)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//int main(void)
//{
//	int n, m, k;
//	cin >> n >> m;
//	fill(arraylist[0], arraylist[0] + maxn * maxn, 0);
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		arraylist[a][b] = 1;
//		arraylist[b][a] = 1;
//	}
//	cin >> k;
//	for (int i = 0; i < k; i++)
//	{
//		int temp;
//		cin >> temp;
//		vector<int>t(temp);
//		for (int j = 0; j < temp; j++)
//		{
//			cin >> t[j];
//		}
//		bool flag = false;
//		for (int j = 0; j < temp; j++)
//		{
//			for (int u = 0; u < temp; u++)
//			{
//				if (j == u)
//				{
//					continue;
//				}
//				if (arraylist[t[j]][t[u]] != 1)//如果在已知的团里存在两个不相连的点，那么他们就不是一个clique
//				{
//					cout << "Not a Clique" << endl;
//					flag = true;
//					break;
//				}
//			}
//			if (flag)
//			{
//				break;
//			}
//		}
//		bool ismax = false;//用来判断其是否是最大clique
//		if (!flag)//
//		{
//			int cnt;
//			for (int i = 1; i <= n; i++)
//			{
//				cnt = 0;
//				if (find(t, i) == -1)//i不在t当中，并且要判断i与t的所有点都相连，即可判断其不是最大clique
//				{
//					for (int j = 0; j < t.size(); j++)
//					{
//						if (arraylist[i][t[j]] == 1)
//						{
//							cnt++;
//						}
//					}
//				}
//				if (cnt == t.size())
//				{
//					cout << "Not Maximal" << endl;
//					ismax = true;
//					break;
//				}
//			}
//		}
//		if (!ismax&& !flag)
//		{
//			cout << "Yes" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}