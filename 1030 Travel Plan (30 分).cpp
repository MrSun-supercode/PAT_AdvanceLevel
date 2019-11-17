///*
//就是迪杰斯特拉算法的拓展版，需要多算上cost，所以多新建一个cost数组，即cost[i]为到i的cost
//*/
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<set>
//#include<cmath>
//using namespace std;
//const int maxm = 0x3f3f3f3f;//用来表示正无穷
//const int maxn = 505;//用来表示最大顶点数
//vector<int>pi;//π数组，即祖先数组，pi[i]=j表示i的前一个结点为j，用来最后表示完整路径
//vector<int>dis;//距离数组，存储距离
//vector<int>costm;//cost数组，存储cost
//set<int>S;//集合用来存放所有顶点，用于while循环的退出表示即当S内的元素恰好为所有顶点数
//vector<int>result;//结果vector，用来存放最后的完整路径的倒序（因为是从π数组存放的是前驱节点，所以需要从终点节点往前遍历一直到起点）
//int graph[maxn][maxn];//图结构，使用邻接矩阵
//int costn[maxn][maxn];//cost图，用来存放cost[a][b]即a到b的cost
//int findsmall(vector<int>dis, set<int>S);//在dis中找到dis[i]最小的节点，并且不能再S中出现
//int n, m, s, d;
//int main(void)
//{
//	scanf("%d %d %d %d", &n, &m, &s, &d);
//	pi.resize(n, -1);//pi初始为-1因为-1不是任何一个点的前驱
//	dis.resize(n, maxm);//一开始到所有顶点的距离都是无穷
//	costm.resize(n, maxm);//所有cost也都是无穷
//	fill(graph[0], graph[0] + maxn * maxn, 0);
//	dis[s] = 0;//s到自己的距离为0
//	S.insert(s);
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, distence, cost;
//		scanf("%d %d %d %d", &a, &b, &distence, &cost);
//		graph[a][b] = distence;
//		graph[b][a] = distence;
//		costn[a][b] = cost;
//		costn[b][a] = cost;
//	}
//	for (int i = 0; i < n; i++)//初始化，将与s相连的顶点的dis，pi和costm更新
//	{
//		if (i == s)
//		{
//			continue;
//		}
//		if (graph[i][s] != 0)
//		{
//			dis[i] = graph[i][s];
//			pi[i] = s;
//			costm[i] = costn[i][s];
//		}
//	}
//	while (S.size() != n)
//	{
//		int temp = findsmall(dis, S);//找到dis中最小的顶点，进行下一步（迪杰斯特拉算法）
//		for (int i = 0; i < n; i++)
//		{
//			if (graph[i][temp] != 0 && temp != i && S.find(i) == S.end())//在graph中找跟temp相连并且不在S集合中的顶点
//			{
//				if (dis[i] > dis[temp] + graph[i][temp])//进行relax操作（算法导论）
//				{
//					dis[i] = dis[temp] + graph[i][temp];
//					pi[i] = temp;
//					costm[i] = costm[temp] + costn[i][temp];//注意，如果dis[i] > dis[temp] + graph[i][temp]，这时不需要比较costm[i],直接进行更新，因为距离变了，距离的优先级大于cost
//				}
//				else if (dis[i] == dis[temp] + graph[i][temp])//如果距离相同，
//				{
//					if (costm[i] > costm[temp] + costn[i][temp])//更新cost，同时更新π数组（因为要在距离相同的条件下找cost最小的，所以这条路的路径也要更新）
//					{
//						costm[i] = costm[temp] + costn[i][temp];
//						pi[i] = temp;
//					}
//				}
//			}
//		}
//		S.insert(temp);
//	}
//	int tmp = d;
//	result.push_back(tmp);//先将终点放进去
//	while (pi[tmp] != s)//循环遍历，一直走到起点，将所有路径都放入result
//	{
//		result.push_back(pi[tmp]);
//		tmp = pi[tmp];
//	}
//	result.push_back(s);//最后放入s，因为前边的while循环不放s
//	/*reverse(result.begin(), result.end());*/
//	/*for (int i = 0; i < result.size(); i++)
//	{
//		printf("%d ", result[i]);
//	}*/
//	for (auto it = result.rbegin(); it != result.rend(); it++)//反向遍历
//	{
//		printf("%d ", *it);
//	}
//	printf("%d %d\n", dis[d], costm[d]);
//	system("pause");
//	return 0;
//}
//int findsmall(vector<int>dis, set<int>S)
//{
//	int cnt = 0, i;
//	int maxx = maxm;
//	for (i = 0; i < dis.size(); i++)
//	{
//		if (i == s)
//		{
//			continue;
//		}
//		if (S.find(i) != S.end())//i不允许在S中出现
//		{
//			continue;
//		}
//		if (dis[i] < maxx)
//		{
//			maxx = dis[i];
//			cnt = i;
//		}
//	}
//	return cnt;
//}