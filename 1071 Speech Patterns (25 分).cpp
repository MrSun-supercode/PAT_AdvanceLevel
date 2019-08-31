///*
//思路：将字符串读入，然后一位一位的读单词，放入到map中，最后输出map中value最大的单词以及value即可
//注意：isalnum(c)这个函数在#include<cctype>中，表示c属于[0-9 A-Z a-z].
//*/
//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//#include<cctype>
//using namespace std;
//const int maxn = 100000;
//int main(void)
//{
//	map<string, int>P;
//	string s;
//	getline(cin, s);
//	char c;
//	string temp = "";
//	for (int i = 0; i < s.size(); i++)
//	{
//		c = s[i];
//		if (isalnum(c))
//		{
//			temp += tolower(c);
//		}
//		else {
//			if (temp.size() != 0)
//			{
//				P[temp]++;
//				temp = "";
//			}
//		}
//		if (i == s.size() - 1)//这一步必须加上，不然最后一个测试点错误，因为到s最后一个值时，c不为空即走18行的if语句，
//		//那么最后一个单词就不会加到map中了
//		{
//			P[temp]++;
//		}
//	}
//	int maxn = 0;
//	string t = "";
//	for (auto it = P.begin(); it != P.end(); it++)
//	{
//		if (it->second > maxn)
//		{
//			maxn = it->second;
//			t = it->first;
//		}
//	}
//	cout << t << ' ' << maxn << endl;
//	system("pause");
//	return 0;
//}