///*
//DFS����l������ͳ��DFS�������Ķ���ĸ���
//*/
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//using namespace std;
//const int maxn = 1000;
//vector<int>V[maxn];
//vector<bool>visited;
//int n, maxlevel, query, k;
//int BFStravel(int root);
//void BFS(int root, int depth);
//int num;
//struct node {
//	int data;
//	int depth;//��¼����Ĳ���
//};
//int main(void)
//{
//	cin >> n >> maxlevel;
//	visited.resize(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		int temp, tar;
//		cin >> temp;
//		for (int j = 0; j < temp; j++)
//		{
//			cin >> tar;
//			V[tar].push_back(i);
//		}
//	}
//	/*for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j < V[i].size(); j++)
//		{
//			cout << V[i][j] << ' ';
//		}
//		cout << endl;
//	}*/
//	cin >> query;
//	for (int i = 0; i < query; i++)
//	{
//		cin >> k;
//		int num = 0;
//		cout << BFStravel(k) << endl;
//	}
//	system("pause");
//	return 0;
//}
//int BFStravel(int root)
//{
//	fill(visited.begin(), visited.end(), false);//ÿ�ζ�Ҫ��visited��ʼ��Ϊfalse��depth=0,num=0
//	int depth = 0;
//	num = 0;
//	BFS(root, depth);
//	return num;
//}
//void BFS(int root, int depth)
//{
//	queue<node>Q;
//	node tmp = { root,depth };//��ʼ��Ĳ���Ϊdepth��Ϊ0
//	Q.push(tmp);
//	while (!Q.empty())
//	{
//		node temp = Q.front();
//		Q.pop();
//		visited[temp.data] = true;
//		if (temp.depth == maxlevel)//�����ǰ��Ĳ���Ϊ��������˵���������Ѿ�ȫ�����ڶ��е��У���num�Ѿ�������ˣ������˳�ѭ������
//		{
//			break;
//		}
//		for (int i = 0; i < V[temp.data].size(); i++)//��tempÿ�����ڵĶ���
//		{
//			if (!visited[V[temp.data][i]])
//			{
//				node de = { V[temp.data][i],temp.depth + 1 };
//				visited[de.data] = true;//�ڷ������֮ǰһ��Ҫ����visited��Ϊtrue����Ȼ�����ĳ��������ǰ������ĳ�������״�����μ����е�query=6ʱ
//				Q.push(de);
//				num++;
//			}
//		}
//	}
//}