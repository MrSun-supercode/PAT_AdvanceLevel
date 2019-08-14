///*
//题目中说了所有字符不会超过ascii码的值即256之内，所以建立一个256的数组，如果有字符在deleter出现
//则将对应的flag的值置为1（初始都是0）
//然后遍历str时如果当前字符在flag中的值是0，说明在deleter中没有出现过，所以输出。否则就不输出
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//int main(void)
//{
//	string str, deleter;
//	getline(cin, str);
//	getline(cin, deleter);
//	int flag[256] = { 0 };
//	for (int i = 0; i < deleter.size(); i++)
//	{
//		flag[deleter[i]] = 1;
//	}
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (!flag[str[i]])
//		{
//			cout << str[i];
//		}
//	}
//	system("pause");
//	return 0;
//}