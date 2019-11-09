///*
//一开始读题我懵逼了，后来看题解看懂是什么意思，就是后面的数是前面数的描述，前边是12，后面就是1121（一个1，一个2，数在前个数在后）
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//void change(string &str);
//int main(void)
//{
//	string str;
//	int n;
//	cin >> str >> n;
//	for (int i = 0; i < n-1; i++)//进行n-1次，因为从自身开始
//	{
//		change(str);
//	}
//	cout << str << endl;
//	system("pause");
//	return 0;
//}
//void change(string &str)
//{
//	int length = str.length();
//	int i = 0;
//	string temp = "";
//	int cnt = 1;//cnt是重复的数的个数
//	while (i<length)
//	{
//		char c = str[i];
//		while (str[i+cnt]==c)//如果后面的数仍然是c，则cnt++
//		{
//			cnt++;
//		}
//		temp += c + to_string(cnt);//temp加上数以及数的个数
//		i += cnt;//i跳到cnt个单位之后
//		cnt = 1;//别忘了cnt初始化为1，每次都需要初始化
//	}
//	str = temp;//将temp赋给str
//}