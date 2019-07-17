//这个思路是暴力遍历所有的可能性然后找到最大的那个子序列，但是有两个点过不去，最后一个点可能是因为
//时间复杂度和空间复杂度太高的原因而段错误。
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