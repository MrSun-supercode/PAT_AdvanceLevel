///*
//思路：一定要先读准题目！然后把每种情况分清楚
//设立一个结构体保存每个人的分数以及新增一个总分数total以便之后排序
//排序函数也是按照题目要求，先根据总分排序，总分一样根据美德分排序，美德一样（此时天赋分也应该一样）按照学号排序，捋清楚
//以空间换时间的思想，如果一个函数进行排序难度有些大，但是题目说了排序名次是sage>nobleman>fool>else
//所以分别建立四个vector存储四个范围内的人，然后按四个vector输出即可
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	long int id;//
//	int vir;//
//	int tal;//
//	int total;
//};
//bool cmp(node a, node b)
//{
//	if (a.total != b.total)
//	{
//		return a.total > b.total;
//	}
//	else if (a.vir != b.vir)
//	{
//		return a.vir > b.vir;
//	}
//	else  return a.id < b.id;
//}
//int main(void)
//{
//	int n, l, h;
//	cin >> n >> l >> h;
//	vector<node>V;
//	vector<node>sage;
//	vector<node>noble;
//	vector<node>fool;
//	vector<node>else_fool;
//	V.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V[i].id >> V[i].vir >> V[i].tal;
//		V[i].total = V[i].vir + V[i].tal;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (V[i].vir >= l && V[i].tal >= l)
//		{
//			if (V[i].vir >= h && V[i].tal >= h)
//			{
//				sage.push_back(V[i]);
//			}
//			else if (V[i].vir >= h && V[i].tal < h)
//			{
//				noble.push_back(V[i]);
//			}
//			else if (V[i].tal < h&&V[i].vir < h&&V[i].vir >= V[i].tal)
//			{
//				fool.push_back(V[i]);
//			}
//			else else_fool.push_back(V[i]);
//		}
//	}
//	sort(sage.begin(), sage.end(), cmp);
//	sort(noble.begin(), noble.end(), cmp);
//	sort(fool.begin(), fool.end(), cmp);
//	sort(else_fool.begin(), else_fool.end(), cmp);
//	//本想用insert将四个vector合成一个输出，但没必要，而且使用时出错，猜想可能是因为没用基本的数据存储（int等）
//	/*vector<node>v;
//	v.insert(V.end, sage.begin(), sage.end());
//	v.insert(V.end, noble.begin(), noble.end());
//	v.insert(V.end, fool.begin(), fool.end());
//	v.insert(V.end, else_fool.begin(), else_fool.end());*/
//	cout << sage.size() + noble.size() + fool.size() + else_fool.size()<<endl;
//	for (int i = 0; i < sage.size(); i++)
//	{
//		cout << sage[i].id << ' ' << sage[i].vir << ' ' << sage[i].tal << endl;
//	}
//	for (int i = 0; i < noble.size(); i++)
//	{
//		cout << noble[i].id << ' ' << noble[i].vir << ' ' << noble[i].tal << endl;
//	}
//	for (int i = 0; i < fool.size(); i++)
//	{
//		cout << fool[i].id << ' ' << fool[i].vir << ' ' << fool[i].tal << endl;
//	}
//	for (int i = 0; i < else_fool.size(); i++)
//	{
//		cout << else_fool[i].id << ' ' << else_fool[i].vir << ' ' << else_fool[i].tal << endl;
//	}
//	system("pause");
//	return 0;
//}