///*
//�ܼ򵥵�dfs����ǰ��������ƣ�����������������к��ӣ���˵�����ǹ�Ӧ�����м�ĳһ�����ڣ����Խ��亢��ȫ��dfs��ע��depth+1
//Ȼ�����û�к��ӣ�˵�����ǹ�Ӧ�̣������۸�
//*/
//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//vector<int>V[100001];
//int n;
//double p, r;
//double price = 1000000000.00;
//int cnt = 0;
//int mindepth;
//void dfs(int index, int depth)
//{
//	if (V[index].size() != 0)//����к��ӣ�˵�����ǹ�Ӧ��
//	{
//		for (int i = 0; i < V[index].size(); i++)
//		{
//			dfs(V[index][i], depth + 1);
//		}
//	}
//	else {//��Ӧ�̣�����۸�
//		double temp = p * pow(1 + r, depth);
//		if (temp == price)
//		{
//			cnt++;
//		}
//		else if (temp < price)
//		{
//			price = temp;
//			cnt = 1;
//		}
//	}
//}
//int main(void)
//{
//	cin >> n >> p >> r;
//	r /= 100;
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		for (int j = 0; j < temp; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			V[i].push_back(tmp);
//		}
//	}
//	dfs(0, 0);
//	printf("%.4f %d\n", price, cnt);
//	system("pause");
//	return 0;
//}