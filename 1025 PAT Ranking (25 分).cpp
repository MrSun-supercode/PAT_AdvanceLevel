///*
//˼·���Ȱ�ÿһ���������˽���������ʹ��vector����ʱ����V,ע��ÿһ��������ǵ�clear�����ҵó����е�local_num��local_rank��Ȼ���ٽ���һ���ּ��뵽�ܵ�vector��sum��
//����ܵĽ���final_rank������
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
//bool cmp(node a, node b)//֮ǰд����return a.grade>b.grade�����Ե�13����ȥ�����뻹�Ǹ����ɼ���ͬʱ�������ǵݼ������йء�
//{//�ж�a��b�ĳɼ��Ƿ�һ��������һ��������ݳɼ��Ӵ�С�ţ���һ������������ִ�С������
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
//		sort(V.begin(), V.end(), cmp);//��������
//		for (int m = 0; m < V.size(); m++)
//		{
//			V[m].local_rank = m + 1;//��������һ��local_rank����������grade��ǰ��һ������������rank��ͬ
//			if (m >= 1) {
//				if (V[m].grade == V[m - 1].grade) {
//					V[m].local_rank = V[m - 1].local_rank;
//					//if (V[m - 1].num > V[m].num)//�ҵ�˼·�ǵ�������֮���ٲ鿴�Ƿ���ǰ���num�Ⱥ����num�󣬽���У�˵��������cmp�ǲ�������������󲻸ı����λ�õģ��ⲽ�Ǳ���Ĳ�����
//					//{
//					//	swap(V[m - 1], V[m]);
//					//}
//				}
//			}
//		}
//		sum.insert(sum.end(), V.begin(), V.end());//��ÿһ����V���뵽sum�ܵ�������
//	}
//	sort(sum.begin(), sum.end(), cmp);//���������������򣬵õ�final_rank
//	for (int i = 0; i < sum.size(); i++)
//	{
//		sum[i].fianl_rank = i + 1;//����ÿ���˵�final_rank
//		if (i >= 1) {//˼·������һ�£���ֹ����11234������11345�������
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