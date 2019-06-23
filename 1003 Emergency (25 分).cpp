#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
	int weight[501], w[501], e[501][501], dis[501],num[501];
	bool visited[501] = { false };
	int n, m, c1, c2;
	cin >> n >> m >> c1 >> c2;
	int inf = 999999;
	fill(dis, dis + 501, inf);
	fill(e[0], e[0] + 501 * 501, inf);
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
		e[start][end] = e[end][start] = distance;
	}
	num[c1] = 1;
	w[c1] = weight[c1];
	dis[c1] = 0;
	for (int i = 0; i < n; i++)
	{
		int u = -1, mdis = inf;
		for (int j = 0; j < n; j++)
		{
			if (visited[i] == false && dis[j]<mdis)
			{
				u = j;
				mdis = dis[j];
			}
		}
		if (u==-1) break;
		visited[u] = true;
		for (int v = 0; v < n; v++)
		{
			if (visited[v]==false&&e[u][v]!=inf)
			{
				if (dis[u]+e[u][v]==dis[v])
				{
					num[v] += num[u];
					if (w[v]<w[u]+weight[v])
					{
						w[v] = w[u] + weight[v];
					}
				}
				else if (dis[u]+e[u][v]<dis[v])
				{
					dis[v] = dis[u] + e[u][v];
					num[v] = num[u];
					w[v] = w[u] + weight[v];
				}
			}
		}		
	}
	cout << num[c2] << ' ' << w[c2];
	system("pause");
	return 0;
}