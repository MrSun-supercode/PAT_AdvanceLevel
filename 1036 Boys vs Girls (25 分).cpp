///*
//思路：用两个vector单独存男生女生，然后进行排序。
//取得男生女生的最低和最高成绩进行输出
//当然需要做判断如果男生missing而女生不missing，则输出相应结果，反之也是如此（注意先输出女生，在输出男生）
//注意如果男生女生都missing，则两个都是输出Absent+NA
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	string name, id;
//	char gender;
//	int grade;
//};
//bool cmp(node a, node b)
//{
//	return a.grade < b.grade;//成绩由小到大排列
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector<node>M;//男生vector
//	vector<node>F;//女生vecotr
//	for (int i = 0; i < n; i++)
//	{
//		string name, id;
//		char gender;
//		int grade;
//		cin >> name >> gender >> id >> grade;
//		if (gender == 'M')//男生
//		{
//			node temp;
//			temp.name = name;
//			temp.id = id;
//			temp.gender = gender;
//			temp.grade = grade;
//			M.push_back(temp);
//		}
//		else {//女生
//			node temp;
//			temp.name = name;
//			temp.id = id;
//			temp.gender = gender;
//			temp.grade = grade;
//			F.push_back(temp);
//		}
//	}
//	sort(M.begin(), M.end(), cmp);//男生最小成绩是M[0]
//	sort(F.begin(), F.end(), cmp);//女生最大成绩是F[F.size()-1]
//	if (M.size() == 0)//男生missing
//	{
//		if (F.size() != 0)
//		{
//			cout << F[F.size() - 1].name << ' ' << F[F.size() - 1].id << endl;
//			cout << "Absent" << endl;
//			cout << "NA" << endl;
//		}
//	}
//	else if (F.size() == 0)//女生missing
//	{
//		if (M.size() != 0)
//		{
//			cout << "Absent" << endl;
//			cout << M[0].name << ' ' << M[0].id << endl;
//			cout << "NA" << endl;
//		}
//	}
//	else {//男生女生都没有missing
//		cout << F[F.size() - 1].name << ' ' << F[F.size() - 1].id << endl;
//		cout << M[0].name << ' ' << M[0].id << endl;
//		cout << F[F.size() - 1].grade - M[0].grade << endl;
//	}
//	system("pause");
//	return 0;
//}