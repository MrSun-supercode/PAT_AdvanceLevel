//���˼·�Ǳ����������еĿ�����Ȼ���ҵ������Ǹ������У����������������ȥ�����һ�����������Ϊ
//ʱ�临�ӶȺͿռ临�Ӷ�̫�ߵ�ԭ����δ���
//#include<iostream>
//#include<vector>
//using namespace std;
//int addr[2000];
//int res[2000][2000];
//int main(void)
//{
//	int n;
//	fill(addr, addr + 2000, 0);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> addr[i];
//	}
//	fill(res[0], res[0] + 2000 * 2000, 0);
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (addr[i]<0)
//		{
//			count++;
//		}
//		else break;
//	}
//	if (count==n)
//	{
//		cout << "0 " << addr[0] << ' ' << addr[n - 1];
//		system("pause");
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int temp = i; temp <= j; temp++)
//			{
//				res[i][j] += addr[temp];
//			}
//		}
//	}
//	int max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (res[i][j]>max)
//			{
//				max = res[i][j];
//			}
//		}
//	}
//	bool flag = false;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (res[i][j]==max)
//			{
//				cout << max << ' ' << addr[i] << ' ' << addr[j];
//				flag = true;
//				break;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}