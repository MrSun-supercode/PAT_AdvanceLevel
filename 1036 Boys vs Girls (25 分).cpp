///*
//˼·��������vector����������Ů����Ȼ���������
//ȡ������Ů������ͺ���߳ɼ��������
//��Ȼ��Ҫ���ж��������missing��Ů����missing���������Ӧ�������֮Ҳ����ˣ�ע�������Ů���������������
//ע���������Ů����missing���������������Absent+NA
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
//	return a.grade < b.grade;//�ɼ���С��������
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector<node>M;//����vector
//	vector<node>F;//Ů��vecotr
//	for (int i = 0; i < n; i++)
//	{
//		string name, id;
//		char gender;
//		int grade;
//		cin >> name >> gender >> id >> grade;
//		if (gender == 'M')//����
//		{
//			node temp;
//			temp.name = name;
//			temp.id = id;
//			temp.gender = gender;
//			temp.grade = grade;
//			M.push_back(temp);
//		}
//		else {//Ů��
//			node temp;
//			temp.name = name;
//			temp.id = id;
//			temp.gender = gender;
//			temp.grade = grade;
//			F.push_back(temp);
//		}
//	}
//	sort(M.begin(), M.end(), cmp);//������С�ɼ���M[0]
//	sort(F.begin(), F.end(), cmp);//Ů�����ɼ���F[F.size()-1]
//	if (M.size() == 0)//����missing
//	{
//		if (F.size() != 0)
//		{
//			cout << F[F.size() - 1].name << ' ' << F[F.size() - 1].id << endl;
//			cout << "Absent" << endl;
//			cout << "NA" << endl;
//		}
//	}
//	else if (F.size() == 0)//Ů��missing
//	{
//		if (M.size() != 0)
//		{
//			cout << "Absent" << endl;
//			cout << M[0].name << ' ' << M[0].id << endl;
//			cout << "NA" << endl;
//		}
//	}
//	else {//����Ů����û��missing
//		cout << F[F.size() - 1].name << ' ' << F[F.size() - 1].id << endl;
//		cout << M[0].name << ' ' << M[0].id << endl;
//		cout << F[F.size() - 1].grade - M[0].grade << endl;
//	}
//	system("pause");
//	return 0;
//}