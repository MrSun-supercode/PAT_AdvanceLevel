//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//struct student {
//	int id, best;//id is the num of student,best is the best index subject of a student's scores
//	int score[4], rank[4];
//}stu[2001];
//int flag = -1;
//bool cmp(student a, student b) {//����ʹ��sort�����Ĳ��������������ݴӴ�С����
//	return a.score[flag] > b.score[flag];
//}
//int exist[1000000];
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> stu[i].id >> stu[i].score[1] >> stu[i].score[2] >> stu[i].score[3];
//		stu[i].score[0] = (stu[i].score[1] + stu[i].score[2] + stu[i].score[3]) / 3.0 + 0.5;//��������		
//	}
//	for (flag = 0; flag < 4; flag++)
//	{
//		sort(stu, stu + n, cmp);//�Ӵ�С��stu����
//		stu[0].rank[flag] = 1;//stu�ĵ�һ�����ݵ�rankֵ�϶��ǵ�һ��
//		for (int i = 1; i < n; i++)
//		{
//			stu[i].rank[flag] = i + 1;//��ʣ�µ�����˳���ų�2,3��������
//			if (stu[i].score[flag] == stu[i - 1].score[flag])
//			{
//				stu[i].rank[flag] = stu[i - 1].rank[flag];//�����һ�����ݷ�����ǰһ������һ����������������ͬ����ֹ����11234�����������
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		exist[stu[i].id] = i + 1;//���������22�����ò�һ����
//		int min_rank = stu[i].rank[0];//����stu[i]��ǰ�ǰ��������rank[0]��Ӧ�Ŀ�Ŀ��ƽ���������ǰ
//		stu[i].best = 0;//��Ӧ�أ�best������õ�������Ӧ�Ŀ�Ŀ��������0����ACME������
//		for (int j = 1; j < 4; j++)
//		{
//			if (stu[i].rank[j] < min_rank)//ֻ�е�ǰstu[i]������������rank[0]����ǰʱ�Ÿ���best�����������£���������ACME����ͬ������ʱ��ACME��˳�����best��
//			{
//				min_rank = stu[i].rank[j];
//				stu[i].best = j;
//			}
//		}
//	}
//	string str = "ACME";
//	for (int i = 0; i < m; i++)
//	{
//		int id;
//		cin >> id;
//		int temp = exist[id];
//		if (temp)
//		{
//			int best = stu[temp - 1].best;//�ҵ���ǰid��Ӧ����õĿ�Ŀ����
//			cout << stu[temp - 1].rank[best] << ' ' << str[best] << endl;
//		}
//		else cout << "N/A" << endl;
//	}
//	system("pause");
//	return 0;
//}