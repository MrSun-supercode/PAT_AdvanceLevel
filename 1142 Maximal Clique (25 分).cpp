///*
//һ��ʼ��˼·���鷳���ο����S����˼·��
//���ж��Ƿ���clique��ֻ���жϸ����������Ƿ�����Ԫ�ض���������
//Ȼ���ٴ���clique�������ж��Ƿ������clique���ж��������ڳ������нڵ������ʣ��ڵ����ܷ���һ���ڵ����������нڵ㶼�����������ڣ�˵���䲻������ţ�
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
//				if (arraylist[t[j]][t[u]] != 1)//�������֪��������������������ĵ㣬��ô���ǾͲ���һ��clique
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
//		bool ismax = false;//�����ж����Ƿ������clique
//		if (!flag)//
//		{
//			int cnt;
//			for (int i = 1; i <= n; i++)
//			{
//				cnt = 0;
//				if (find(t, i) == -1)//i����t���У�����Ҫ�ж�i��t�����е㶼�����������ж��䲻�����clique
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