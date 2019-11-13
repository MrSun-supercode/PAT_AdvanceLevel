///*
//题意：先给出元素之间不能相互存在的对，然后给你m列准备打包的物品判断这些物品是否可以一起携带。
//一开始想使用map，结果发现同一种物品可能有不止一个的互斥物品，所以改用vector来动态保存其互斥物品
//注意准备打包的物品要使用set而不能使用vector，因为如果使用vector再进行查找时要调用algorithm中的find函数，时间复杂度为O(n)
//而set中的find函数时间复杂度为O(logn)，因为其是使用红黑树的结构。
//*/
//#include<iostream>
//#include<set>
//#include<vector>
//using namespace std;
//vector<int>v[99999];
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		int str1, str2;
//		cin >> str1 >> str2;
//		v[str1].push_back(str2);//在str1中保存str2
//		v[str2].push_back(str1);//在str2中保存str1
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int temp;
//		cin >> temp;
//		int item;
//		set<int>s;
//		bool flag = false;
//		for (int j = 0; j < temp; j++)
//		{
//			cin >> item;
//			s.insert(item);
//		}
//		for (auto it = s.begin(); it != s.end(); it++)
//		{
//			if (v[*it].size()!=0)//如果当前s中的元素有互斥物品
//			{
//				for (int i = 0; i < v[*it].size(); i++)//遍历其互斥物品，看s中是否有其互斥物品
//				{
//					if (s.find(v[*it][i]) != s.end())//若有，则输出No,并直接跳出循环
//					{
//						cout << "No" << endl;
//						flag = true;
//						break;
//					}
//				}	
//				if (flag)
//				{
//					break;
//				}
//			}
//		}
//		if (!flag)
//		{
//			cout << "Yes" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}