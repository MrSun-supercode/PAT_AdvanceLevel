///*
//暴力法遍历，但是有一个测试点4过不去。
//*/
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//bool is_Symmetric(string s)
//{
//	string temp = s;
//	reverse(temp.begin(), temp.end());
//	if (s == temp) {
//		return true;
//	}
//	else return false;
//}
//int main(void)
//{
//	string s;
//	getline(cin, s);
//	string str = "";
//	int cnt = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		str += s[i];
//		for (int j = i + 1; j < s.size(); j++)
//		{
//			str += s[j];
//			if (is_Symmetric(str))
//			{
//				if (str.size() > cnt)
//				{
//					cnt = str.size();
//				}
//			}
//		}
//		str.clear();
//	}
//	if (s.size() == 1 || s.size() == 0)
//	{
//		cout << '1';
//	}
//	else cout << cnt;
//	system("pause");
//	return 0;
//}