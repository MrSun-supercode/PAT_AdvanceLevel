///*
//��ŵ�˼·�ǰ���favorite����������L�������������ķ��������ĳ���ֵ����Ϊfavorite������Ԫ��ֵû��ʲô��ϵ
//����ʹ�䰴���ֵ��Ⱥ�˳�򱣴浽book�У������õ�һ���ǵݼ����У�Ȼ��ʹ�ö�̬�滮LIS���н�
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
//		book[temp] = i;//book[temp]=i��ʾtempԪ�ض�Ӧ���±�Ϊi��iΪ1-m�����������
//	}
//	cin >> l;
//	for (int i = 0; i < l; i++)
//	{
//		int temp;
//		cin >> temp;
//		if (book[temp] > 0)//���temp��book�г��ֹ���������favourite����ô�������V�У���������
//		{
//			V.push_back(book[temp]);
//		}
//	}
//	dp.resize(V.size());
//	/*for (int i = 0; i < V.size(); i++)
//	{
//		cout << V[i] << ' ';
//	}*/
//	int cnt = 0;//������������dp[i]
//	for (int i = 0; i < V.size(); i++)//LIS��̬�滮�㷨
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