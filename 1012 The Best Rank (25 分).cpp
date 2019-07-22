//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//struct student {
//	int id, best;//id is the num of student,best is the best index subject of a student's scores
//	int score[4], rank[4];
//}stu[2001];
//int flag = -1;
//bool cmp(student a, student b) {//设置使用sort函数的参数函数，将数据从大到小排列
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
//		stu[i].score[0] = (stu[i].score[1] + stu[i].score[2] + stu[i].score[3]) / 3.0 + 0.5;//四舍五入		
//	}
//	for (flag = 0; flag < 4; flag++)
//	{
//		sort(stu, stu + n, cmp);//从大到小将stu排序
//		stu[0].rank[flag] = 1;//stu的第一个数据的rank值肯定是第一名
//		for (int i = 1; i < n; i++)
//		{
//			stu[i].rank[flag] = i + 1;//将剩下的数据顺势排成2,3，依次名
//			if (stu[i].score[flag] == stu[i - 1].score[flag])
//			{
//				stu[i].rank[flag] = stu[i - 1].rank[flag];//如果后一个数据分数和前一个数据一样，则他俩排名相同，防止出现11234这种排名结果
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		exist[stu[i].id] = i + 1;//把这个放在22行作用不一样？
//		int min_rank = stu[i].rank[0];//假设stu[i]当前最靠前的排名是rank[0]对应的科目即平均分排名最靠前
//		stu[i].best = 0;//对应地，best代表最好的排名对应的科目索引，即0（按ACME排名）
//		for (int j = 1; j < 4; j++)
//		{
//			if (stu[i].rank[j] < min_rank)//只有当前stu[i]的其他排名比rank[0]更靠前时才更新best，其他不更新（即做到了ACME有相同的排名时按ACME的顺序输出best）
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
//			int best = stu[temp - 1].best;//找到当前id对应的最好的科目索引
//			cout << stu[temp - 1].rank[best] << ' ' << str[best] << endl;
//		}
//		else cout << "N/A" << endl;
//	}
//	system("pause");
//	return 0;
//}