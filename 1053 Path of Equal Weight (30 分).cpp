///*
//思路：使用深度优先遍历dfs，调用系统栈，然后看注释就可以理解了
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxsize = 100;
//struct node {//结构体定义，weight为权值，child为孩子节点
//	int weight;
//	vector<int>child;
//}tree[maxsize];
//int n, m, sum;
//int p[maxsize];//从根节点到叶子节点的路径，所以p[0]为根节点
//bool cmp(int a, int b)//这里一定要注意，是根据权值排列
//{
//	return tree[a].weight > tree[b].weight;
//}
//void dfs(int root, int path, int s);//dfs入口，注意参数意义
//int main(void)
//{
//	cin >> n >> m >> sum;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> tree[i].weight;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int id, num;
//		cin >> id >> num;
//		for (int j = 0; j < num; j++)
//		{
//			int temp;
//			cin >> temp;
//			tree[id].child.push_back(temp);
//		}
//		sort(tree[id].child.begin(), tree[id].child.end(),cmp);//排序，这样从大到小排列后输出就是从大到小的顺序，不必再从结果里另排了
//	}
//	p[0] = 0;//路径的起始节点一定是根节点
//	dfs(0, 1, tree[0].weight);//从0开始，路径中有一个点，权值和为s
//	system("pause");
//	return 0;
//}
//void dfs(int root, int path, int s)//
//{
//	if (s > sum)//超了，直接返回
//	{
//		return;
//	}
//	else if (s == sum)//正好跟sum相等，判断是否是叶子节点
//	{
//		if (tree[root].child.size() != 0)//不是叶子节点
//		{
//			return;
//		}
//		else {//是叶子节点，输出
//			for (int i = 0; i < path; i++)
//			{
//				if (i == 0)
//				{
//					cout << tree[p[i]].weight;//注意输出格式，并且输出的是权值
//				}
//				else cout << ' ' << tree[p[i]].weight;
//			}
//			cout << endl;
//		}
//	}
//	else {//还未到sum，继续dfs
//		for (int i = 0; i < tree[root].child.size(); i++)
//		{
//			int child = tree[root].child[i];
//			p[path] = child;//path中加入child节点
//			dfs(child, path + 1, s + tree[child].weight);//path要加一
//		}
//	}
//}