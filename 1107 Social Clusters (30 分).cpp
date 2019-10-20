///*
//并查集题目列表1114,1107,1118，详解可以先看1118的前边注释部分，ipad1107章写的很清楚
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxm = 10010;
//vector<int>V[1001];//V来表示hobby种类，后面push_back的是人的编号（从1-N）
//int	father[maxm];
//int	num[maxm];
//void init(int father[])//初始化
//{
//	for (int i = 0; i < maxm; i++)
//	{
//		father[i] = i;
//	}
//	fill(num, num + maxm, 0);
//}
//int getFather(int x) {//找父亲
//	int a = x;
//	while (a != father[a])
//	{
//		a = father[a];
//	}
//	while (x != father[x])//路径压缩
//	{
//		int temp = x;
//		x = father[x];
//		father[temp] = a;
//	}
//	return a;
//}
//void Union(int a, int b)//合并并查集
//{
//	int tempa = getFather(a);
//	int tempb = getFather(b);
//	if (tempa != tempb)
//	{
//		father[tempa] = tempb;
//	}
//}
//bool cmp(int a, int b)//自定义排序方式函数
//{
//	return a > b;
//}
//int main(void)
//{
//	int n, maxn = 0;//maxn用来找hobby种类最大值
//	cin >> n;
//	init(father);
//	for (int i = 1; i <= n; i++)
//	{
//		int k, temp;
//		scanf_s("%d: %d", &k, &temp);
//		V[temp].push_back(i);//表示喜欢temp这一hobby的有i这个人
//		maxn = max(maxn, temp);
//		for (int j = 0; j < k - 1; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			V[tmp].push_back(i);
//			maxn = max(maxn, tmp);
//		}
//	}
//	/*cout << maxn;*/
//	for (int i = 1; i <= maxn; i++)//1个元素构不成并查集，若两个元素以上，则构造其并查集
//	{
//		if (V[i].size() >= 2)
//		{
//			int temp = V[i][0];
//			for (int j = 1; j < V[i].size(); j++)
//			{
//				Union(temp, V[i][j]);
//			}
//		}
//	}
//	int cnt = 0;//用来找根节点个数
//	for (int i = 1; i <= n; i++)
//	{
//		if (father[i] == i)
//		{
//			cnt++;
//		}
//	}
//	cout << cnt << endl;
//	for (int i = 1; i <= n; i++)//用来找所有节点归向于根节点的个数（即是该根节点孩子的个数）
//	{
//		num[getFather(i)]++;//比如并查集为3->5->7，则num[7]为3，表示以7为根节点的集合元素个数为3
//	}
//	vector<int>V;
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] != 0)//将计算的每个集合的元素个数放入V中进行排序并输出
//		{
//			V.push_back(num[i]);
//		}
//	}
//	sort(V.begin(), V.end(), cmp);
//	for (int i = 0; i < cnt; i++)
//	{
//		if (i == 0)
//		{
//			cout << V[i];
//		}
//		else cout << ' ' << V[i];
//	}
//	system("pause");
//	return 0;
//}