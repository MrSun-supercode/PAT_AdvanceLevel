///*
//思路：直接将学生存为struct node类型并按要求进行排序即可
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	string id;
//	string name;
//	int grade;
//};
//bool cmp1(node a, node b)//id 从小到大
//{
//	return a.id < b.id;
//}
//bool cmp2(node a, node b)//name 从小到大，name一样id从小到大
//{
//	return a.name != b.name ? a.name < b.name : a.id < b.id;
//}
//bool cmp3(node a, node b)//grade 从小到大，grade一样id从小到大
//{
//	return a.grade != b.grade ? a.grade < b.grade : a.id < b.id;
//}
//int main(void)
//{
//	int n, c;
//	cin >> n >> c;
//	vector<node>V(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V[i].id >> V[i].name >> V[i].grade;
//	}
//	if (c == 1){
//		sort(V.begin(), V.end(), cmp1);
//	}
//	else if (c == 2) {
//		sort(V.begin(), V.end(), cmp2);
//	}
//	else sort(V.begin(), V.end(), cmp3);
//	for (int i = 0; i < V.size(); i++)
//	{
//		cout << V[i].id << ' ' << V[i].name << ' ' << V[i].grade << endl;
//	}
//	system("pause");
//	return 0;
//}