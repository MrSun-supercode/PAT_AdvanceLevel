///*
//˼·���������Ҫ��׼�⣬��Ϊ�кܶ��
//����˼·������Ӧ�ú���������������һ�����Ե㳬ʱ�ˣ������Ѿ�����һ����û��ͷ���ˣ������ȷ�����
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {//����user�Ľṹ��
//	int id;
//	int rank = 0;
//	int total;
//	int MarkPerQuestion[6] = { -2,-2,-2,-2,-2,-2 };//�û�ÿһ��problem�ķ�����Ĭ����-2����������ͨ����-1��
//	int perfectQuestion = 0;//�û�����������Ŀ�ĸ���
//};
//bool cmp(node a, node b)//��������
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
//		scanf_s("%d", &fullMarkPerQuestion[i]);//�洢ÿ��problem�������Ƕ���
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int temp, problemId, problemScore;
//		scanf_s("%d %d %d", &temp, &problemId, &problemScore);
//		bool flag = false;
//		for (auto iter = V.begin(); iter != V.end(); iter++)//��V�в����Ƿ��е�ǰ�����user
//		{
//			if ((*iter).id == temp)//�����
//			{
//				if (problemScore == -1 && (*iter).MarkPerQuestion[problemId] == -2)//�ж����user�Ƿ��ǵ�һ���ύ����ûͨ������������ֹuser֮ǰͨ���˱����������ύûͨ���ѽ������Ĩȥ��
//				{
//					(*iter).MarkPerQuestion[problemId] = -1;
//				}
//				else if ((*iter).MarkPerQuestion[problemId] < problemScore)//�����ǰ������֮ǰ�ύ���ķ����ߣ�����
//				{
//					(*iter).MarkPerQuestion[problemId] = problemScore;
//				}
//				flag = true;//�����ж�user�Ƿ���V�е��ж�λ
//				break;
//			}
//		}
//		if (!flag)//���V��û��user��˵������û��ǵ�һ���ύ�������V��
//		{
//			node tmp;
//			tmp.id = temp;
//			tmp.MarkPerQuestion[problemId] = problemScore;
//			V.push_back(tmp);
//		}
//	}
//	for (int i = 0; i < V.size(); i++)//����user total�����ĺ���
//	{
//		int sum = 0;
//		for (int j = 1; j < 1 + k; j++)
//		{
//			if (V[i].MarkPerQuestion[j] == fullMarkPerQuestion[j])//���� user������Ŀ�ĸ���
//			{
//				V[i].perfectQuestion++;
//			}
//			if (V[i].MarkPerQuestion[j] != -1 && V[i].MarkPerQuestion[j] != -2)//���������ύ������ͨ���˱�����
//			{
//				sum += V[i].MarkPerQuestion[j];
//			}
//		}
//		V[i].total = sum;
//	}
//	sort(V.begin(), V.end(), cmp);
//	V[0].rank = 1;
//	for (int i = 1; i < V.size(); i++)//��������
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
//			if (V[i].MarkPerQuestion[j] != -2 && V[i].MarkPerQuestion[j] != -1)//���user�������¼���гɹ��÷ֵļ�¼������������û��ύ���������ⶼûͨ���������������
//			{
//				cout << V[i].rank << ' ';
//				printf("%05d %d", V[i].id, V[i].total);
//				for (int j = 1; j < 1 + k; j++)
//				{
//					if (V[i].MarkPerQuestion[j] == -2)//����û�û�ύ������⣬���-
//					{
//						cout << " -";
//					}
//					else if (V[i].MarkPerQuestion[j] == -1)//����û��ύ�����ûͨ������������ĿҪ��Ҫ��0�ֶ�����-
//					{
//						cout << " 0";
//					}
//					else
//						cout << ' ' << V[i].MarkPerQuestion[j];//�û��ύ�����>=0�֣����
//				}
//				cout << endl;
//				break;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}