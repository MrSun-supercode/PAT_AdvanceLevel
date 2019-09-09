///*
//思路：很简单，读清题就可以做出来了，重点在一个排序
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	string name;
//	string id;
//	int grade;
//};
//bool cmp(node a, node b)
//{
//	return a.grade > b.grade;
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector<node>V(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V[i].name >> V[i].id >> V[i].grade;
//	}
//	int min_grade, high_grade;
//	cin >> min_grade >> high_grade;
//	bool flag = false;
//	sort(V.begin(), V.end(), cmp);
//	for (int i = 0; i < n; i++)
//	{
//		if (V[i].grade <= high_grade && V[i].grade >= min_grade)
//		{
//			cout << V[i].name << ' ' << V[i].id << endl;
//			flag = true;
//		}
//	}
//	if (!flag)
//	{
//		cout << "NONE" << endl;
//	}
//	system("pause");
//	return 0;
//}