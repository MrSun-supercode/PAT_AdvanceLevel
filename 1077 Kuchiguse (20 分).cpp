//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main(void)
//{
//	int n;
//	scanf_s("%d\n", &n); // ����� getline ǰ������cin���룬 gitline���Զ�����������ǰ��ʹ�õ����붼Ҫ��scanf������scanf�Ĳ��������Ҫ����\n
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