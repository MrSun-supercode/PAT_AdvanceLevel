///*
//思路：这道题需要读准题，因为有很多坑
//具体思路看代码应该很清楚，但是我最后一个测试点超时了，但我已经做了一天了没有头绪了，所以先放这里
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {//定义user的结构体
//	int id;
//	int rank = 0;
//	int total;
//	int MarkPerQuestion[6] = { -2,-2,-2,-2,-2,-2 };//用户每一个problem的分数（默认是-2，编译器不通过是-1）
//	int perfectQuestion = 0;//用户做出完美题目的个数
//};
//bool cmp(node a, node b)//复杂排序
//{
//	if (a.total != b.total)
//	{
//		return a.total > b.total;
//	}
//	else if (a.perfectQuestion != b.perfectQuestion)
//	{
//		return a.perfectQuestion > b.perfectQuestion;
//	}
//	else return a.id < b.id;
//}
//int main(void)
//{
//	int n, k, m;
//	scanf_s("%d %d %d", &n, &k, &m);
//	vector<int>fullMarkPerQuestion(k + 1);
//	vector<node>V;
//	for (int i = 1; i <= k; i++)
//	{
//		scanf_s("%d", &fullMarkPerQuestion[i]);//存储每个problem的满分是多少
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int temp, problemId, problemScore;
//		scanf_s("%d %d %d", &temp, &problemId, &problemScore);
//		bool flag = false;
//		for (auto iter = V.begin(); iter != V.end(); iter++)//在V中查找是否有当前输入的user
//		{
//			if ((*iter).id == temp)//如果有
//			{
//				if (problemScore == -1 && (*iter).MarkPerQuestion[problemId] == -2)//判断这个user是否是第一次提交并且没通过编译器（防止user之前通过了编译器后来提交没通过把结果分数抹去）
//				{
//					(*iter).MarkPerQuestion[problemId] = -1;
//				}
//				else if ((*iter).MarkPerQuestion[problemId] < problemScore)//如果当前分数比之前提交过的分数高，更新
//				{
//					(*iter).MarkPerQuestion[problemId] = problemScore;
//				}
//				flag = true;//用来判断user是否在V中的判断位
//				break;
//			}
//		}
//		if (!flag)//如果V中没有user，说明这个用户是第一次提交，则加入V中
//		{
//			node tmp;
//			tmp.id = temp;
//			tmp.MarkPerQuestion[problemId] = problemScore;
//			V.push_back(tmp);
//		}
//	}
//	for (int i = 0; i < V.size(); i++)//计算user total分数的函数
//	{
//		int sum = 0;
//		for (int j = 1; j < 1 + k; j++)
//		{
//			if (V[i].MarkPerQuestion[j] == fullMarkPerQuestion[j])//计算 user满分题目的个数
//			{
//				V[i].perfectQuestion++;
//			}
//			if (V[i].MarkPerQuestion[j] != -1 && V[i].MarkPerQuestion[j] != -2)//如果这道题提交过并且通过了编译器
//			{
//				sum += V[i].MarkPerQuestion[j];
//			}
//		}
//		V[i].total = sum;
//	}
//	sort(V.begin(), V.end(), cmp);
//	V[0].rank = 1;
//	for (int i = 1; i < V.size(); i++)//排名函数
//	{
//		V[i].rank = i + 1;
//		if (V[i].total == V[i - 1].total)
//		{
//			V[i].rank = V[i - 1].rank;
//		}
//	}
//	for (int i = 0; i < V.size(); i++)
//	{
//		for (int j = 1; j < k + 1; j++)
//		{
//			if (V[i].MarkPerQuestion[j] != -2 && V[i].MarkPerQuestion[j] != -1)//如果user的做题记录中有成功得分的记录，则输出（若用户提交过的所有题都没通过编译器则不输出）
//			{
//				cout << V[i].rank << ' ';
//				printf("%05d %d", V[i].id, V[i].total);
//				for (int j = 1; j < 1 + k; j++)
//				{
//					if (V[i].MarkPerQuestion[j] == -2)//如果用户没提交过这道题，输出-
//					{
//						cout << " -";
//					}
//					else if (V[i].MarkPerQuestion[j] == -1)//如果用户提交这道题没通过编译器，题目要求要给0分而不是-
//					{
//						cout << " 0";
//					}
//					else
//						cout << ' ' << V[i].MarkPerQuestion[j];//用户提交这道题>=0分，输出
//				}
//				cout << endl;
//				break;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}