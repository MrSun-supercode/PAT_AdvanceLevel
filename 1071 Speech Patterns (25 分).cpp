///*
//˼·�����ַ������룬Ȼ��һλһλ�Ķ����ʣ����뵽map�У�������map��value���ĵ����Լ�value����
//ע�⣺isalnum(c)���������#include<cctype>�У���ʾc����[0-9 A-Z a-z].
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
//		if (i == s.size() - 1)//��һ��������ϣ���Ȼ���һ�����Ե������Ϊ��s���һ��ֵʱ��c��Ϊ�ռ���18�е�if��䣬
//		//��ô���һ�����ʾͲ���ӵ�map����
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