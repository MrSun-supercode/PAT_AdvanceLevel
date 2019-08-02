//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//string temp = "ABC";
//string change(int n);
//int main(void)
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << '#';
//	cout << change(a) << change(b) << change(c) << endl;
//	system("pause");
//	return 0;
//}
//string change(int n)
//{
//	string str = "";
//	while (n!=0)
//	{
//		int t = n % 13;
//		if (t>=10){
//			str += temp[t - 10];//如果t>=10，则要输出ABC三者其一。其他情况只输出数字即可
//		}
//		else str += t + '0';
//		n /= 13;
//	}
//	if (str.size()==1) {//防止str只有一位的情况下只输出一位（应该在一位前输出0）	
//		str += '0';
//	}
//	if (str.size()==0) {//防止有0出现的情况下什么也不输出	
//		str += "00";
//	}
//	reverse(str.begin(), str.end());//使用相余法求其他进制时别忘了反转
//	return str;
//}