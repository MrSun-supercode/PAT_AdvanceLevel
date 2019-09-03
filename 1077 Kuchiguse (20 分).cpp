//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main(void)
//{
//	int n;
//	scanf_s("%d\n", &n); // 如果在 getline 前，调用cin输入， gitline会自动跳过，所以前面使用的输入都要用scanf，而且scanf的参数最后需要加上\n
//	string ans;
//	for (int i = 0; i < n; i++)
//	{
//		string temp;
//		getline(cin, temp);
//		reverse(temp.begin(), temp.end());
//		if (i == 0)
//		{
//			ans = temp;
//		}
//		else {
//			int minn = min(ans.size(), temp.size());
//			for (int j = 0; j < minn; j++)
//			{
//				if (ans[j] != temp[j])
//				{
//					ans = ans.substr(0, j);
//					break;
//				}
//			}
//		}
//	}
//	reverse(ans.begin(), ans.end());
//	if (ans.size() == 0)
//	{
//		cout << "nai" << endl;
//	}
//	else cout << ans << endl;
//	system("pause");
//	return 0;
//}