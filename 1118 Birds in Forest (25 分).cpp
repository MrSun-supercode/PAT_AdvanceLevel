///*
//直接使用并查集即可，具体完整过程可看ipadPAT甲级1118章（最后面）
//*/
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//const int maxn = 10010;//设成10000有一个测试点答案错误
//set<int>cnt;
//int father[maxn];
//void init(int father[])
//{
//	for (int i = 0; i < maxn; i++)
//	{
//		father[i] = i;
//	}
//}
//int findFather(int x)
//{
//	int a = x;
//	while (a!=father[a])
//	{
//		a = father[a];
//	}
//	while (x!=father[x])//路径压缩 
//	{
//		int temp = x;		
//		x = father[x];
//		father[temp] = a;
//	}
//	return a;
//}
//void Union(int a, int b)
//{
//	int tempa = findFather(a);
//	int tempb = findFather(b);
//	if (tempa!=tempb)
//	{
//		father[tempa] = tempb;
//	}
//}
//int main(void)
//{
//	int n,k,temp;
//	cin >> n;
//	init(father);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> k >> temp;
//		cnt.insert(temp);
//		for (int j = 0; j < k-1; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			cnt.insert(tmp);
//			Union(temp, tmp);
//		}
//	}
//	int maxm = *(--cnt.end());//set是已排好序的，最后一个元素为其最大元素，因为end()为最后一个元素的后一个位置，所以要先自减再取
//	/*for (int i = 1; i <= maxm; i++)
//	{
//		cout << father[i] << endl;
//	}*/
//	int count = 0;//有几个根节点就有几个树
//	for (int i = 1; i <= maxm; i++)
//	{
//		if (father[i]==i)
//		{
//			count++;
//		}
//	}
//	cout << count<<' '<<maxm << endl;
//	int query;
//	cin >> query;
//	for (int i = 0; i < query; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		if (findFather(a)==findFather(b))
//		{
//			cout << "Yes" << endl;
//		}
//		else cout << "No" << endl;
//	}
//	system("pause");
//	return 0;
//}