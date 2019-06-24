#include<iostream>
#include<algorithm>
using namespace std;
/*
思路：城市的道路长度就是边的长度，城市中的救援队数目就相当于权重。目标是获得c1到c2最短路径的条数以及权重
最大的那条道路的权重。使用迪杰斯特拉算法，可完美解决问题。
*/
int main(void)
{
	//weight表示权重，w[i]表示到i点的总权重，e[][]表示使用邻接矩阵存储图，dis[i]表示到i点的总长度
	//num[i]表示到i点的最短路径的个数。
	int weight[510], w[510], e[510][510], dis[510],num[510];
	//visited[i]遍历表存储i节点是否被遍历过。
	bool visited[501] = { false };
	int n, m, c1, c2;
	cin >> n >> m >> c1 >> c2;
	const int inf = 999999;
	//初始化dis以及邻接矩阵
	fill(dis, dis + 510, inf);
	fill(e[0], e[0] + 510 * 510, inf);
	/*for (int i = 0; i < 501; i++)
	{
		dis[i] = inf;
	}
	for (int i = 0; i < 501; i++)
	{
		for (int j = 0; j < 501; j++)
		{
			e[i][j] = inf;
		}
	}*/
	for (int i = 0; i < n; i++)
	{
		cin >> weight[i];
	}
	int start, end, distance;
	for (int i = 0; i < m; i++)
	{
		cin >> start >> end >> distance;
		e[start][end] = e[end][start] = distance;//邻接矩阵具有对称性
	}
	num[c1] = 1;//初始化num[c1],w[c1]以及dis[c1]
	w[c1] = weight[c1];
	dis[c1] = 0;
	for (int i = 0; i < n; i++)
	{
		int u = -1, mdis = inf;
		for (int j = 0; j < n; j++)
		{
			if (visited[j] == false && dis[j]<mdis)
			{
				u = j;//当前开始的点，一定从索引是0的点开始，直到dis的边界结束。
				mdis = dis[j];
			}
		}
		if (u==-1) break;//如果n为0，则直接结束。
		visited[u] = true;//选取点之后一定要记得将遍历表对应的索引的值更新为true
		for (int v = 0; v < n; v++)//遍历所有节点，找到跟u相连的节点。
		{
			if (visited[v]==false&&e[u][v]!=inf)//并且跟u相连的那个节点还没有被遍历过（注：只在外围选取点之后将其在遍历表中赋值为true）
			{
				if (dis[u]+e[u][v]==dis[v])//如果dis[u]+e[u][v]==dis[v]，说明有一条新的路在原v点处的长度相等
				{
					num[v] += num[u];//num[v]就是当前num[v]以及使得长度跟它相等的u点出的num[u]之和
					if (w[v]<w[u]+weight[v])
					{
						w[v] = w[u] + weight[v];//并且如果经过这条路线的权重更大，那么就更新之前的权重。
					}
				}
				else if (dis[u]+e[u][v]<dis[v])//如果新找到一条dis[u]+e[u][v]比原dis[v]小，那么直接更新dis[v]
				{
					dis[v] = dis[u] + e[u][v];
					num[v] = num[u];//num[v]就完全等于num[u]
					w[v] = w[u] + weight[v];//还需更新权重
				}
			}
		}		
	}
	cout << num[c2] << ' ' << w[c2];//输出终点对应的最短路径的条数以及最大的权重。
	system("pause");
	return 0;
}
