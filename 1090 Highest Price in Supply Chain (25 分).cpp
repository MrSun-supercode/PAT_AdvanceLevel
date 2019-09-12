///*
//跟1079差不多，只不过输入没有给出孩子，所以需要自己添加孩子，输入的temp是当前i的供应商，所以temp为i供应
//temp.child.push_back(i)
//犯了很傻逼的错误，导致全部测试点都错误，我还以为我自己憨了，结果是输出的格式问题，但问题是你结果并没有告诉我是格式问题啊，我至少测试点0在我本地跑是没问题的
//scanf时输入浮点数时使用%f和%lf（前者是float，后者是double）
//printf时输出浮点数时使用%f即可（不管是否是float或者是double）
//*/
//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//struct node {
//	double data;
//	vector<int>child;
//};
//int n;
//double price, raise;
//vector<node>V;
//double cost = 0.00;
//int maxheight = 0;
//int cnt = 0;
//void dfs(int root, int depth)
//{
//	if (V[root].child.size() == 0)
//	{
//		if (maxheight < depth)
//		{
//			maxheight = depth;
//			cnt = 1;
//		}
//		else if (maxheight == depth)
//		{
//			cnt++;
//		}
//		return;
//	}
//	else {
//		for (int i = 0; i < V[root].child.size(); i++)
//		{
//			dfs(V[root].child[i], depth + 1);
//		}
//	}
//}
//int main(void)
//{
//	cin >> n >> price >> raise;
//	raise /= 100;
//	int index;
//	V.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		if (temp == -1)
//		{
//			index = i;
//		}
//		else {
//			V[temp].child.push_back(i);
//		}
//	}
//	dfs(index, 0);
//	printf("%.2f %d\n", price*pow(1 + raise, maxheight), cnt);
//	system("pause");
//	return 0;
//}