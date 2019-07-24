////思路：这道题就是很简单的判断一个数是否为素数并且其在radix进制下的数的回文数再返回10进制以后是否为素数
////一开始自己写了三个函数一个用于将对应n和radix进制的数转换为10进制，再将10进制的这个数回文，判断新的数跟旧的数是否都为素数。
////后来之后第一个测试点能过，然后对了对柳婼大佬的发现了错误，是先到其进制下再回文，再到十进制，我犯了先入为主的错误。
//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//int change(int n, int radix)//对应n和radix的数转换为10进制，实际上并没用到
//{
//	if (radix == 10)
//	{
//		return n;
//	}
//	else {
//		string temp = to_string(n);
//		int sum = 0, index = 0;
//		for (auto it = temp.rbegin(); it < temp.rend(); it++)//it为指针类型变量
//		{
//			int its = *it - '0';
//			sum += its * pow(radix, index++);
//		}
//		return sum;
//	}
//}
//int reverse(int n)//回文一个数并返回结果，实际上并没用到
//{
//	string n_str = to_string(n);
//	string temp = "";
//	for (auto it = n_str.rbegin(); it < n_str.rend(); it++)
//	{
//		temp += *it;
//	}
//	return atoi(temp.c_str());
//}
//bool is_prime(int n)//判断一个数是否是素数，注意小于等于1的数也不是素数
//{
//	int i;
//	if (n <= 1)
//	{
//		return false;
//	}
//	for (i = 2; i*i <= n; i++)
//	{
//		if (n%i == 0 && n > i)//若不加n>i条件当n=2时结果返回false
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main(void)
//{
//	int n;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		if (n < 0)
//		{
//			break;
//		}
//		else {			
//			int radix, index = 0;
//			cin >> radix;
//			if (!is_prime(n))//如果旧数不是素数，则直接跳过后续判断，输出No
//			{
//				cout << "No" << endl;
//				continue;
//			}
//			/*int temp = change(n, radix);
//			int temp_rev = reverse(temp);*/
//			int arr[1001];
//			while (n != 0)//将n转化为radix进制的数并存到arr数组里，需要注意的是，如果单纯转化的话,
//			{//实际上arr的最后一位是最高位，第一位是最低位（参考余2法将10进制转换为2进制最后结果需要反转）
//				arr[index++] = n % radix;//但是我们最后需要其回文数相当于又反转了一遍，所以直接这样存即是结果
//				n /= radix;
//			}
//			int sum = 0;
//			int j = 0;
//			for (int i = index - 1; i >= 0; i--)
//			{
//				sum += arr[i] * pow(radix, j++);
//			}//将其转换为10进制
//			if (is_prime(sum))//判断是否为素数
//			{
//				cout << "Yes" << endl;
//			}
//			else cout << "No" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}