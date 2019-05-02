///*
//1001 A+B Format (20 分)
//Calculate a+b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).
//
//Input Specification:
//Each input file contains one test case. Each case contains a pair of integers a and b where −10
//​6
//​​ ≤a,b≤10
//​6
//​​ . The numbers are separated by a space.
//
//Output Specification:
//For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.
//
//Sample Input:
//-1000000 9
//Sample Output:
//-999,991
//*/
///*
//思路：先求这个sum的位数，然后将%3部分先输出并在后面加","
//然后做循环，每三个数后加","
//*/
//#include<iostream>
//#include<string>
//#include<cstdlib>
//using namespace std;
//int wei(long long int x);
//int main(void)
//{
//	long long int a, b;
//	cin >> a >> b;
//	long long int sum = a + b;
//	if (sum==0)
//	{
//		cout << 0;
//		system("pause");
//		return 0;
//	}
//	long long int temp = abs(sum);
//	int x = wei(temp);//位数
//	int abc = x % 3;
//	if (sum < 0)
//	{
//		cout << '-';
//	}
//	string t = to_string(abs(sum));
//	int i = 0;
//	if (abc==0)
//	{
//
//	}
//	else {
//		while (i < abc)
//		{
//			cout << t[i];
//			i++;
//		}
//		if (x>3)
//		{
//			cout << ',';
//		}		
//	}	
//	while (i < t.size())
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << t[i];
//			i++;
//		}
//		if (i != t.size())
//		{
//			cout << ',';
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
//int wei(long long int x)
//{
//	int add = 0;
//	while (x > 0)
//	{
//		x /= 10;
//		add++;
//	}
//	return add;
//}
