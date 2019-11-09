///*
//思路：用map存储，因为输入时不一定先输入哪一个，所以使用map存储更好
//*/
//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<map>
//#include<vector>
//using namespace std;
//struct node {
//	string id;
//	int online = -1;
//	int mid = -1;
//	int finalGrade = -1;
//	int Allgrade;
//};
//map<string, node>P;
//vector<node>V;
//bool cmp(node a, node b)
//{
//	return a.Allgrade != b.Allgrade ? a.Allgrade > b.Allgrade:a.id < b.id;
//}
//int main(void)
//{
//	int p, m, n;
//	cin >> p >> m >> n;
//	for (int i = 0; i < p; i++)
//	{
//		string str;
//		int grade;
//		cin >> str >> grade;
//		P[str].id = str;
//		P[str].online = grade;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		string str;
//		int grade;
//		cin >> str >> grade;
//		P[str].id = str;
//		P[str].mid = grade;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		string str;
//		int grade;
//		cin >> str >> grade;
//		P[str].id = str;
//		P[str].finalGrade = grade;
//	}
//	for (auto it = P.begin(); it != P.end(); it++)
//	{
//		if (it->second.online<200)
//		{
//			continue;
//		}
//		if (it->second.mid > it->second.finalGrade)
//		{
//			it->second.Allgrade = int(it->second.mid*0.4 + it->second.finalGrade*0.6+0.5);//注意转换的时候不加0.5可能丢失
//		}
//		else it->second.Allgrade = it->second.finalGrade;
//		if (it->second.Allgrade>=60)//将符合的元素添加到V中便于排序
//		{
//			node temp;
//			temp.id = it->second.id;
//			temp.mid = it->second.mid;
//			temp.online = it->second.online;
//			temp.finalGrade = it->second.finalGrade;
//			temp.Allgrade = it->second.Allgrade;
//			V.push_back(temp);
//		}
//	}
//	sort(V.begin(), V.end(), cmp);
//	for (int i = 0; i < V.size(); i++)
//	{
//		cout << V[i].id << ' ' << V[i].online << ' ' << V[i].mid << ' ' << V[i].finalGrade << ' ' << V[i].Allgrade << endl;;
//	}
//	system("pause");
//	return 0;
//}