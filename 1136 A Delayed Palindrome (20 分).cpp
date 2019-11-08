//#include<iostream>
//#include<string>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//bool isPalind(string str)//判断是否是回文数：判断它的转置是否跟它相等即可
//{
//	string temp = str;
//	reverse(temp.begin(), temp.end());
//	if (temp == str)
//	{
//		return true;
//	}
//	else return false;
//}
//string add(string str1, string str2)//相加函数，返回string，注意其中的过程不能使用int否则位数很大时会答案错误
//{
//	int length = str1.length();
//	int i = length - 1;
//	int temp = 0;
//	string st = "";
//	while (i >= 0)//模拟大数运算
//	{
//		int n = (str1[i] - '0') + (str2[i] - '0') + temp;
//		temp = 0;
//		while (n >= 10)
//		{
//			n -= 10;
//			temp++;
//		}
//		st.append(to_string(n));//从后面加n
//		i--;
//	}
//	if (temp != 0)
//	{
//		st.append(to_string(temp));//从后面加temp
//	}
//	reverse(st.begin(), st.end());//st是按从低位到高位排列的，所以要转置。
//	return st;
//}
//int main(void)
//{
//	string str;
//	cin >> str;
//	for (int i = 0; i < 10; i++)
//	{
//		if (isPalind(str))//如果一开始输入的str就是回文，则直接输出即可
//		{
//			cout << str << " is a palindromic number." << endl;
//			break;
//		}
//		string temp = str;
//		reverse(temp.begin(), temp.end());
//		string tmp = add(str, temp);
//		cout << str << " + " << temp << " = " << tmp << endl;
//		if (isPalind(tmp))
//		{
//			cout << tmp << " is a palindromic number." << endl;
//			break;
//		}
//		str = tmp;
//		if (i == 9)
//		{
//			cout << "Not found in 10 iterations." << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}