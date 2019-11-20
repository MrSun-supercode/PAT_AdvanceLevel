///*
//思路：每次只能于0交换，只需将0对应的位置所需的正确数字与0交换即可，然后循环，知道0也到了正确的位置。
//当0到了正确位置整个序列还没有排好时，要先将0于第一个不是正确位置的数字交换（跳板），然后重复1的过程
//参考：https://blog.csdn.net/qq_42068614/article/details/85848563
//https://blog.csdn.net/hy971216/article/details/81272254
//*/
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//vector<int>v;
//vector<int>vs;
//int deal(vector<int> v, vector<int> vs);
//int find(vector<int>v, int temp);
//int main(void)
//{
//	int n;
//	cin >> n;
//	v.resize(n);
//	vs.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		vs[v[i]] = i;//vs记录原序列每个数的位置
//	}
//	cout << deal(v, vs) << endl;
//	system("pause");
//	return 0;
//}
//int deal(vector<int> v, vector<int> vs)
//{
//	int num = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		while (vs[0] != 0)//弹出条件，v[0]==0,此时0在正确位置上，要以0为跳板让其先于一个不在正确位置上的数交换，再继续进行while循环
//		{
//			swap(vs[0], vs[vs[0]]);
//			num++;
//		}
//		if (vs[i] != i)//此时0已经在正确的位置上，要从前往后找到第一个不在正确位置上的数,使其于0交换
//		{
//			swap(vs[i], vs[0]);
//			num++;
//		}
//	}
//	return num;
//}
