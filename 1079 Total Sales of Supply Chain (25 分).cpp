//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//struct node {//�ṹ���㣬�������ǹ�Ӧ�̲Ż���product������ֻ��child
//	double product;
//	vector<int>child;
//};
//vector<node>V;
//double p, r, ans = 0.0;
//void dfs(int x, int depth)
//{
//	if (V[x].child.size() == 0)//����ý��û�к��ӣ�˵����Ϊ��Ӧ�̣���������ͷ����ļ�ֵ
//	{
//		ans += V[x].product*p*pow(1 + r, depth);
//	}
//	else {
//		for (int i = 0; i < V[x].child.size(); i++)//���򣬼����������ĺ��ӣ�ע��depth��һ
//		{
//			dfs(V[x].child[i], depth + 1);
//		}
//	}
//}
//int main(void)
//{
//	int n;
//	cin >> n >> p >> r;
//	r /= 100;//rʹ��ʱ�ǰٷֵ�λ�����Գ���100
//	V.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		if (temp == 0)//���tempΪ0��˵����Ϊ��Ӧ�̣�ֻ��Ҫ����product����
//		{
//			cin >> V[i].product;
//		}
//		else {
//			for (int j = 0; j < temp; j++)//���temp��Ϊ0��˵������������㣬�����������
//			{
//				int k;
//				cin >> k;
//				V[i].child.push_back(k);
//			}
//		}
//	}
//	dfs(0, 0);//�ӵ�0�㼴root��ʼ����
//	printf("%.1f", ans);//�������һλС��
//	system("pause");
//	return 0;
//}