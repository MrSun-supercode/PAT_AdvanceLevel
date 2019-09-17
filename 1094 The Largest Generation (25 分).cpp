///*
//思路：只要将每个树节点表示为结构体node型然后带上其层数即可，最后只需找到节点最多的层数然后输出最多的节点即可
//*/
//#include<iostream>
//#include<vector>
//using namespace std;
//struct node {//定义节点结构体
//	int id;
//	vector<node>child;
//	int depth;
//};
//void setDepth(vector<node>&V, int index, int depth)//index是当前节点的ID，depth是当前节点的层数
//{
//	V[index].depth = depth;
//	if (V[index].child.size() != 0)
//	{
//		for (int i = 0; i < V[index].child.size(); i++)
//		{
//			setDepth(V, V[index].child[i].id, depth + 1);//递归地将当前节点的所有子节点的层数赋值为depth+1
//		}
//	}
//}
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//	vector<node>V(n + 1);
//	for (int i = 0; i < m; i++)
//	{
//		int id, num;
//		cin >> id >> num;
//		for (int j = 0; j < num; j++)
//		{
//			node temp;
//			int tmp;
//			cin >> tmp;
//			temp.id = tmp;
//			V[id].child.push_back(temp);
//		}
//	}
//	int depth = 1;
//	setDepth(V, 1, depth);//递归入口，即ID为1的节点的depth赋值为1，然后进行递归
//	int cnt = 0;
//	vector<int>D(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		D[V[i].depth]++;//D i-th就是层数为i的节点的个数
//	}
//	int max = 0, index;
//	for (int i = 1; i <= n; i++)
//	{
//		if (D[i] > max)
//		{
//			max = D[i];//找到最大的节点个数，并保留层数
//			index = i;
//		}
//	}
//	cout << max << ' ' << index << endl;
//	system("pause");
//	return 0;
//}