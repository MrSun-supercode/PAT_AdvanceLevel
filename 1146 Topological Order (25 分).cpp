///*
//�����������йص��⣺��Ҫ��ÿһ���߱����������ڽӾ����ڽӱ��ɣ�ע��������ߣ��ڽӾ���ʱ����Ҫ�Գƴ洢��
//Ȼ����Ҫ����ÿ���ڵ����ȡ�
//ÿ�α�����������ʱ���ж��Ƿ���ڵ�����Ƿ���0�������ֲ���0�Ľڵ㣬�������һ������ͼ����������Ϊ��Ȳ���0�Ľڵ���ζ����ǰ�߻���ָ�����Ľڵ�������ߣ�
//����0����ô�Ƚ��õ�ָ��Ķ�������-1���൱��ɾ���ڵ����=0�ĵ㣩��Ȼ������������С�
//ע�⣺�����������Ȳ���0����ô������һ������ͼ�������򣬵���ʱ����break������Ҫ��������������������У������𰸴���
//*/
//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//const int maxn = 2000;//maxn==1000ʱ�𰸴���
//vector<int>num;
//set<int>result;
//int graph[maxn][maxn];
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//	num.resize(n+1, 0);
//	fill(graph[0], graph[0] + maxn * maxn, 0);
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		num[b]++;//ͳ��ÿ���ڵ�����
//		graph[a][b] = 1;//����a->����b�бߴ���
//	}
//	/*for (int i = 0; i < num.size(); i++)
//	{
//		cout << num[i] << ' ';
//	}*/
//	int cal;
//	cin >> cal;
//	for (int i = 0; i < cal; i++)
//	{
//		vector<int>temp(num);//��num�����е�Ԫ�ؿ�����temp��
//		int query;
//		for (int k = 0; k < n; k++)
//		{
//			cin >> query;
//			if (temp[query]!=0)//�������Ȳ���0��˵���䲻����������result�����i
//			{
//				result.insert(i);
//			}
//			else {
//				for (int j = 1; j <= n; j++)//����graph���ҵ�queryָ��Ķ��㣬ʹ�����-1
//				{
//					if (graph[query][j]==1)
//					{
//						temp[j]--;
//					}
//				}
//			}
//		}
//	}
//	for (auto it=result.begin();it!=result.end();it++)
//	{
//		if (it==result.begin())
//		{
//			cout << *it;
//		}
//		else cout << ' ' << *it;
//	}
//	system("pause");
//	return 0;
//}