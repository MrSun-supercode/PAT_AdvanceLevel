///*
//借鉴柳婼大神的代码，动态规划，本质上是滑动窗口，就是让窗口的大小从1到len，时间复杂度是O(n)
//d[i][i]==1和d[i][i+1]==1时动态规划的奇数和偶数的返回方程即如果回文串是奇数，最后一定落在d[i][i]==1上
//偶数就一定落在d[i][i+1]==1上
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//int dp[1001][1001];
//int main(void)
//{
//	string s;
//	getline(cin, s);	
//	int cnt = 1;
//	for (int i = 0; i < s.size(); i++)
//	{
//		dp[i][i] = 1;//窗口大小为1时
//		if (s[i] == s[i + 1] && i < s.size() - 1)//窗口大小为2时
//		{
//			dp[i][i + 1] = 1;
//			cnt = 2;//两个元素是相同的，则最大回文串的长度是2
//		}
//	}
//	for (int L = 3; L <= s.size(); L++)//窗口大小从3到len
//	{
//		for (int i = 0; i < s.size() - L + 1; i++)
//		{
//			int temp = i + L - 1;//temp从距离i L-1的地方开始(i到L-1的窗口距离正好是L)
//			if (s[i] == s[temp] && dp[i + 1][temp - 1] == 1)
//			{
//				dp[i][temp] = 1;//s[i]==s[j]时，dp[i][j]是否为1，看dp[i+1][j-1]（两头相等，递归地看向里面的内容，只不过这里面的内容是已经算好的）
//				cnt = L;//L距离的字符串相等，则最大回文串的长度更新为L
//			}
//		}
//	}
//	cout << cnt << endl;
//	system("pause");
//	return 0;
//}