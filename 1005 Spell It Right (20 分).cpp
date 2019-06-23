//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
///*
//思路：10的100次方这么大的数肯定不可能用long long int,然后这些数的所有和最大是999，所以先用string
//储存这个数，然后分别求出这些数字的和，最后输出。
//*/
//int main(void)
//{
//	string str;
//	cin >> str;
//	int sum = 0;
//	for (int i = 0; i < str.size(); i++)
//	{
//		sum += str[i] - '0';
//	}
//	string s = to_string(sum);//将sum转化为string类型的变量
//	/*cout << s << endl;*/
//	vector<string> v;//声明一个vector来存放string类型的所有可能输出
//	v.push_back("zero");
//	v.push_back("one");
//	v.push_back("two");
//	v.push_back("three");
//	v.push_back("four");
//	v.push_back("five");
//	v.push_back("six");
//	v.push_back("seven");
//	v.push_back("eight");
//	v.push_back("nine");
//	cout << v[s[0] - '0'];
//	for (int i = 1; i < s.size(); i++)
//	{
//		cout << ' '<<v[s[i] - '0'];
//	}
//	system("pause");
//	return 0;
//}