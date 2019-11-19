///*
//DFS，在l层数下统计DFS遍历到的顶点的个数
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
//	int depth;//记录顶点的层数
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
//	fill(visited.begin(), visited.end(), false);//每次都要将visited初始化为false，depth=0,num=0
//	int depth = 0;
//	num = 0;
//	BFS(root, depth);
//	return num;
//}
//void BFS(int root, int depth)
//{
//	queue<node>Q;
//	node tmp = { root,depth };//初始点的层数为depth即为0
//	Q.push(tmp);
//	while (!Q.empty())
//	{
//		node temp = Q.front();
//		Q.pop();
//		visited[temp.data] = true;
//		if (temp.depth == maxlevel)//如果当前点的层数为最大层数，说明最大层数已经全部都在队列当中，即num已经计算过了，所以退出循环即可
//		{
//			break;
//		}
//		for (int i = 0; i < V[temp.data].size(); i++)//对temp每个相邻的顶点
//		{
//			if (!visited[V[temp.data][i]])
//			{
//				node de = { V[temp.data][i],temp.depth + 1 };
//				visited[de.data] = true;//在放入队列之前一定要将其visited置为true，不然会出现某个顶点提前访问了某个定点的状况，参见例中的query=6时
//				Q.push(de);
//				num++;
//			}
//		}
//	}
//}