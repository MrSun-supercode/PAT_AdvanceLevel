///*
//˼·��ֱ�ӽ�ѧ����Ϊstruct node���Ͳ���Ҫ��������򼴿�
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
//bool cmp1(node a, node b)//id ��С����
//{
//	return a.id < b.id;
//}
//bool cmp2(node a, node b)//name ��С����nameһ��id��С����
//{
//	return a.name != b.name ? a.name < b.name : a.id < b.id;
//}
//bool cmp3(node a, node b)//grade ��С����gradeһ��id��С����
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