//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//bool is_Palindromic(string n);
//string repeated(string n);
//int main(void)
//{
//	string n;
//	int k;
//	cin >> n >> k;
//	int cnt = 0;
//	while (cnt <= k)
//	{
//		if (is_Palindromic(n)) {//如果n是回文数，直接输出
//			cout << n << endl;
//			cout << cnt;
//			break;
//		}
//		cnt++;//顺序很重要,不能在之前，因为之前会输出cnt导致错误，也不能在最后，最后的话下面的if判断不起作用
//		if (cnt <= k) {//必须在cnt<=k时才对n进行repeated，不然最后cnt>k情况下的n会多repeated一遍
//			n = repeated(n);
//		}
//	}
//	if (cnt > k) {
//		cout << n << endl;
//		cout << k;
//	}
//	system("pause");
//	return 0;
//}
//bool is_Palindromic(string n)//之前测试点135不通过，因为这个函数出了问题，我是用for循环然后将前项跟后项相比而判断，直接用reverse判断更简单也更不易错。
//{
//	string temp = n;//直接将temp赋值为n并且reverse，判断temp是否跟n相等
//	reverse(temp.begin(), temp.end());
//	if (temp == n) {
//		return true;
//	}
//	else return false;
//}
//string repeated(string n)//直接使用大数加法
//{
//	string temp = n;
//	reverse(temp.begin(), temp.end());//temp和n一样的位数
//	int flag = 0;//进位数
//	string str = "";//目标字符串
//	for (int i = 0; i < n.length(); i++)
//	{
//		int a = n[i] - '0';
//		int b = temp[i] - '0';
//		int sum = a + b + flag;
//		flag = 0;
//		while (sum >= 10) {//sum保留个位，flag保留十位
//			sum -= 10;
//			flag++;
//		}
//		str += sum + '0';
//	}
//	reverse(str.begin(), str.end());
//	if (flag > 0) {//如果flag>0，表示还有进位，最后结果需要加上进位
//		return to_string(flag) + str;
//	}
//	else return str;
//}