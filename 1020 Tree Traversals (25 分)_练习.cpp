////˼·����֪�������������Ĺ������ȴӺ������ҵ����һ���������ڵ㣬Ȼ���ٴ���������������ڵ㣬
////������ڵ���ߵ�����ֵΪ���������ұߵ�����ֵΪ��������
////���������������ո������ҵ�˳��ݹ����ʣ�µ�����
//#include<iostream>
//using namespace std;
//int post[6], in[6];
//void pre(int root, int start, int end);
//int main(void)
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> post[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> in[i];
//	}
//	pre(n - 1, 0, n - 1);
//	system("pause");
//	return 0;
//}
//void pre(int root, int start, int end)//rootΪ��������еĸ��ڵ���±꣬startΪ����������Ϊ��������ʼ���±꣬endΪ������ֹ���±ꡣ
//{
//	if (start > end)
//	{
//		return;
//	}
//	int i = start;
//	while (in[i] != post[root] && i < end)
//	{
//		i++;//i�Ǹ��ڵ��Ӧ���±꣬���Ը��ڵ����һ���������������ұ�һ��������������i-1һ�����������Ľ�β��end��i+1һ�����������Ŀ�ͷ��start
//	}
//	cout << post[root];
//	pre(root - end + i - 1, start, i - 1);
//	pre(root - 1, i + 1, end);
//}
/*
����������
6
3 4 2 6 5 1
3 2 4 1 6 5
���ӦΪ��123456
*/