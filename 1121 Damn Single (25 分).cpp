/////*
////最后两个测试点超时，本来想再用scanf代替cin和printf代替cout试试的，结果觉得是算法的问题就没试（实际上是懒）
////准备用map重新做一遍
////*/
////#include<iostream>
////#include<algorithm>
////#include<vector>
////using namespace std;
////vector<pair<int, int>>V;
////vector<int>temp;
////int isExist(int tmp);
////bool isHave(vector<int>temp, int tmp);
////int main(void)
////{
////	int n,m;
////	cin >> n;
////	V.resize(n);
////	for (int i = 0; i < n; i++)
////	{
////		cin>>V[i].first >> V[i].second;
////	}
////	cin >> m;
////	temp.resize(m);
////	for (int i = 0; i < m; i++)
////	{
////		cin >> temp[i];
////	}
////	vector<int>last;
////	for (int i = 0; i < temp.size(); i++)
////	{
////		int t = isExist(temp[i]);
////		if (t!=-1)//这一项在V中是否出现过，若出现过
////		{
////			if (isHave(temp,t))//看他的另一部分是否出现过，若出现过，什么也不做，下一项
////			{
////
////			}
////			else {//若没出现过，直接加入最后的vector中
////				last.push_back(temp[i]);
////			}
////		}
////		else {//若没出现过，直接加入最后的vector中
////			last.push_back(temp[i]);
////		}
////	}
////	sort(last.begin(), last.end());
////	cout << last.size() << endl;
////	for (int i = 0; i < last.size(); i++)
////	{
////		if (i==0)
////		{
////			printf("%05d", last[i]);
////		}
////		else printf(" %05d", last[i]);
////	}
////	system("pause");
////	return 0;
////}
////int isExist(int tmp)
////{
////	for (int i = 0; i < V.size(); i++)
////	{
////		if (V[i].first==tmp)
////		{
////			return V[i].second;
////		}
////		else if (V[i].second==tmp)
////		{
////			return V[i].first;
////		}
////	}
////	return -1;
////}
////bool isHave(vector<int>temp, int tmp)
////{
////	for (int i = 0; i < temp.size(); i++)
////	{
////		if (temp[i]==tmp)
////		{
////			return true;
////		}
////	}
////	return false;
////}
//#include<iostream>
//#include<algorithm>
//#include<set>
//#include<vector>
//using namespace std;
//const int maxsize = 100000;
//int P[maxsize];//用数组模拟map，因为map数据结构中若没有值存在的话默认是0，但是我们要操作的数里面可能有0，所以用数组模拟map然后把它全部初始化-1
//vector<int>temp;
//set<int>s;//结果用s保存，防止相同的元素出现使结果出现错误
//bool isHave(vector<int>temp, int tmp);
//int main(void)
//{
//	int n, m;
//	cin >> n;
//	fill(P, P + maxsize, -1);
//	for (int i = 0; i < n; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		P[a] = b;
//		P[b] = a;
//	}
//	cin >> m;
//	temp.resize(m);
//	for (int i = 0; i < m; i++)
//	{
//		cin >> temp[i];
//	}
//	for (int i = 0; i < temp.size(); i++)
//	{
//		int t = P[temp[i]];
//		if (t != -1)//这一项在V中是否出现过，若出现过（注意这里不能是t!=0，因为有可能它本身就是0,对应测试点1的答案错误）
//		{
//			if (isHave(temp, t))//看他的另一部分是否出现过，若出现过，什么也不做，下一项
//			{
//
//			}
//			else {//若没出现过，直接加入最后的vector中
//				s.insert(temp[i]);
//			}
//		}
//		else {//若没出现过，直接加入最后的vector中
//			s.insert(temp[i]);
//		}
//	}
//	cout << s.size() << endl;
//	for (auto it = s.begin(); it != s.end(); it++)
//	{
//		if (it==s.begin())
//		{
//			printf("%05d", *it);
//		}
//		else printf(" %05d", *it);
//	}
//	system("pause");
//	return 0;
//}
//bool isHave(vector<int>temp, int tmp)
//{
//	for (int i = 0; i < temp.size(); i++)
//	{
//		if (temp[i]==tmp)
//		{
//			return true;
//		}
//	}
//	return false;
//}