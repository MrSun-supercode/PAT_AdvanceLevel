///*
//跟拓扑排序有关的题：需要将每一个边保存起来（邻接矩阵邻接表都可，注意是有向边，邻接矩阵时不需要对称存储）
//然后还需要保存每个节点的入度。
//每次遍历拓扑序列时，判断是否其节点入度是否是0，若发现不是0的节点，则该序列一定不是图的拓扑序（因为入度不是0的节点意味着其前边还有指向它的节点与有向边）
//若是0，那么先将该点指向的顶点的入度-1（相当于删除节点入度=0的点），然后继续遍历序列。
//注意：如果发现其入度不是0，那么该序列一定不是图的拓扑序，但此时不能break，还需要将整个拓扑序列输入才行，否则会答案错误
//*/
//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//const int maxn = 2000;//maxn==1000时答案错误
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
//		num[b]++;//统计每个节点的入度
//		graph[a][b] = 1;//顶点a->顶点b有边存在
//	}
//	/*for (int i = 0; i < num.size(); i++)
//	{
//		cout << num[i] << ' ';
//	}*/
//	int cal;
//	cin >> cal;
//	for (int i = 0; i < cal; i++)
//	{
//		vector<int>temp(num);//将num向量中的元素拷贝到temp中
//		int query;
//		for (int k = 0; k < n; k++)
//		{
//			cin >> query;
//			if (temp[query]!=0)//顶点的入度不是0，说明其不是拓扑序，向result中添加i
//			{
//				result.insert(i);
//			}
//			else {
//				for (int j = 1; j <= n; j++)//遍历graph，找到query指向的顶点，使其入度-1
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