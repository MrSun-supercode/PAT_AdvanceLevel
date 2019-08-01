///*
//思路：先按每一场的所有人进行排名（使用vector的临时容器V,注意每一场结束后记得clear）并且得出所有的local_num和local_rank，然后再将这一部分加入到总的vector即sum中
//最后总的进行final_rank的排名
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	string num;
//	int grade;
//	int fianl_rank;
//	int local_num;
//	int local_rank;
//};
//bool cmp(node a, node b)//之前写的是return a.grade>b.grade，测试点13过不去，猜想还是跟最后成绩相同时按姓名非递减排序有关。
//{//判断a和b的成绩是否一样，若不一样，则根据成绩从大到小排，若一样，则根据名字从小到大排
//	return a.grade != b.grade ? a.grade > b.grade:a.num < b.num;
//}
//int main(void)
//{
//	int n, k;
//	cin >> n;
//	vector<node>V;
//	vector<node>sum;
//	int index = 0;
//	for (int i = 0; i < n; i++)
//	{
//		V.clear();
//		cin >> k;
//		for (int j = 0; j < k; j++)
//		{
//			string str;
//			int grade;
//			cin >> str >> grade;
//			node temp;
//			temp.num = str;
//			temp.grade = grade;
//			temp.local_num = i + 1;
//			V.push_back(temp);
//		}
//		sort(V.begin(), V.end(), cmp);//进行排名
//		for (int m = 0; m < V.size(); m++)
//		{
//			V[m].local_rank = m + 1;//给所有人一个local_rank，如果后面的grade跟前面一样，则它俩的rank相同
//			if (m >= 1) {
//				if (V[m].grade == V[m - 1].grade) {
//					V[m].local_rank = V[m - 1].local_rank;
//					//if (V[m - 1].num > V[m].num)//我的思路是等排完序之后再查看是否有前面的num比后面的num大，结果有，说明这样的cmp是不可以做到排序后不改变相对位置的，这步是必须的操作。
//					//{
//					//	swap(V[m - 1], V[m]);
//					//}
//				}
//			}
//		}
//		sum.insert(sum.end(), V.begin(), V.end());//将每一场的V加入到sum总的容器中
//	}
//	sort(sum.begin(), sum.end(), cmp);//对总容器进行排序，得到final_rank
//	for (int i = 0; i < sum.size(); i++)
//	{
//		sum[i].fianl_rank = i + 1;//给出每个人的final_rank
//		if (i >= 1) {//思路与上面一致，防止出现11234而不是11345这种情况
//			if (sum[i].grade == sum[i - 1].grade) {
//				sum[i].fianl_rank = sum[i - 1].fianl_rank;
//				/*if (sum[i - 1].num > sum[i].num)
//				{
//					swap(sum[i - 1], sum[i]);
//				}*/
//			}
//		}
//	}
//	cout << sum.size() << endl;
//	for (int i = 0; i < sum.size(); i++)
//	{
//		cout << sum[i].num << ' ' << sum[i].fianl_rank << ' ' << sum[i].local_num << ' ' << sum[i].local_rank << endl;
//	}
//	system("pause");
//	return 0;
//}