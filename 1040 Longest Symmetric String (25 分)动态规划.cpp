//#include<iostream>
//#include<string>
//using namespace std;
//int dp[1001][1001];
//int main(void)
//{
//	int nmax;
//	string str;
//	getline(cin, str);
//	fill(dp[0], dp[0] + 1001 * 1001, 0);
//	for (int i = 0; i < str.size(); i++)
//	{
//		dp[i][i] = 1;
//		nmax = 1;//�����ʱ���Ҫ�ı�nmax
//		if (str[i] == str[i + 1] && i + 1 < str.size())
//		{
//			dp[i][i + 1] = 1;
//			nmax = 2;
//		}
//	}
//	/*for (int i = 0; i < str.size(); i++)
//	{
//		for (int j = 0; j < str.size(); j++)
//		{
//			cout << dp[i][j];
//		}
//		cout << endl;
//	}*/
//	//���������㣬Ӧ������С�Ĵ��������Ĵ��ڣ����˫��forѭ���������i��0-2һֱ��0-n-1���ٴ�1-3һֱ��1-n-1�����Ǽ���ʱ��Ҫ�м䱣��������ж�û�������
//	/*for (int i = 0; i < str.size() - 2; i++)
//	{
//		for (int j = i + 2; j < str.size(); j++)
//		{
//			if (dp[i + 1][j - 1] == 1 && str[i] == str[j])
//			{
//				dp[i][j] = 1;
//				if (j - i + 1 > nmax)
//				{
//					nmax = j - i + 1;
//				}
//			}
//		}
//	}*/
//	int i;
//	for (i = 2; i <= str.size(); i++)
//	{
//		for (int j = 0; j < str.size() - i; j++)
//		{
//			if (dp[j + 1][j + i - 1] == 1 && str[j] == str[j + i])
//			{
//				dp[j][j + i] = 1;
//				if (i + 1 > nmax)
//				{
//					nmax = i + 1;
//				}
//			}
//		}
//	}
//	/*for (int i = 0; i < str.size(); i++)
//	{
//		for (int j = 0; j < str.size(); j++)
//		{
//			cout << dp[i][j];
//		}
//		cout << endl;
//	}*/
//	cout << nmax << endl;
//	system("pause");
//	return 0;
//}