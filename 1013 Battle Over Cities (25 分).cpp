////思路：求输入的城市节点被破坏之后需要再连几条通路才能将所有的城市连接起来。
////相当于找出图中所有的区域块，然后求出区域块对应的连通分量，然后求出最后所需的通路（即连通分量-1）
//#include<iostream>
//#include<algorithm>//fill函数
//using namespace std;
//int v[1001][1001];//邻接矩阵
//bool visited[1001];//确定一个节点是否被访问过
//int n;
//void dfs(int sd)//dfs实现
//{
//	visited[sd] = true;//将当前的节点对应的visited置为true
//	for (int i = 1; i <= n; i++)//从题目可以看出节点是从1-N的
//	{
//		if (visited[i] == false && v[sd][i] == 1)//如果当前节点与i节点有连通分量并且i节点没有被访问过，则对i进行dfs
//		{
//			dfs(i);
//		}
//	}
//}
//int main(void)
//{
//	int m, k;
//	cin >> n >> m >> k;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		v[a][b] = v[b][a] = 1;
//	}
//	int cnt;
//	for (int i = 0; i < k; i++)
//	{
//		cnt = 0;
//		fill(visited, visited + 1001, false);//每进行一次输入都要对visited置false
//		int temp;
//		cin >> temp;
//		visited[temp] = true;//temp节点被敌人占领了，直接将temp节点对应的visited置为true，之后将跳过temp节点以及跟temp节点相连的节点
//		for (int j = 1; j <= n; j++)
//		{
//			if (!visited[j])//如果j节点未被访问过，对j节点进行dfs操作
//			{
//				dfs(j);//需要注意的是，这里进行的dfs(j)将会对j以及所有从1-N的节点中与j相连的节点都进行dfs操作，所以这一项代表了图中一个区域块
//				cnt++;
//			}
//		}
//		cout << cnt - 1 << endl;//最后输出图中区域块-1的数目即所需连通分量的数目。
//	}
//	system("pause");
//	return 0;
//}