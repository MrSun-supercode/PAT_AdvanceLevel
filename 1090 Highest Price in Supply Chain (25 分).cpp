///*
//��1079��ֻ࣬��������û�и������ӣ�������Ҫ�Լ���Ӻ��ӣ������temp�ǵ�ǰi�Ĺ�Ӧ�̣�����tempΪi��Ӧ
//temp.child.push_back(i)
//���˺�ɵ�ƵĴ��󣬵���ȫ�����Ե㶼�����һ���Ϊ���Լ����ˣ����������ĸ�ʽ���⣬��������������û�и������Ǹ�ʽ���Ⱑ�������ٲ��Ե�0���ұ�������û�����
//scanfʱ���븡����ʱʹ��%f��%lf��ǰ����float��������double��
//printfʱ���������ʱʹ��%f���ɣ������Ƿ���float������double��
//*/
//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//struct node {
//	double data;
//	vector<int>child;
//};
//int n;
//double price, raise;
//vector<node>V;
//double cost = 0.00;
//int maxheight = 0;
//int cnt = 0;
//void dfs(int root, int depth)
//{
//	if (V[root].child.size() == 0)
//	{
//		if (maxheight < depth)
//		{
//			maxheight = depth;
//			cnt = 1;
//		}
//		else if (maxheight == depth)
//		{
//			cnt++;
//		}
//		return;
//	}
//	else {
//		for (int i = 0; i < V[root].child.size(); i++)
//		{
//			dfs(V[root].child[i], depth + 1);
//		}
//	}
//}
//int main(void)
//{
//	cin >> n >> price >> raise;
//	raise /= 100;
//	int index;
//	V.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		if (temp == -1)
//		{
//			index = i;
//		}
//		else {
//			V[temp].child.push_back(i);
//		}
//	}
//	dfs(index, 0);
//	printf("%.2f %d\n", price*pow(1 + raise, maxheight), cnt);
//	system("pause");
//	return 0;
//}