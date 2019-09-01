///*
//一开始一头雾水，后来读清题然后慢慢来就做出来了，一定不要心急慢慢做，把各个条件想清楚
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//int find_point(string str)//找.的函数，返回.在str中的位置
//{
//	int i = 0;
//	while (i < str.size())
//	{
//		if (str[i] != '.')
//		{
//			i++;
//		}
//		else break;
//	}
//	return i;
//}
//int main(void)
//{
//	string str;
//	cin >> str;
//	if (str[0] == '-')//如果是负数直接输出
//	{
//		cout << '-';
//	}
//	string num = "";
//	int index;
//	for (int i = 1; i < str.size(); i++)
//	{
//		if (str[i] != 'E')
//		{
//			num += str[i];//num保存E之前的无符号的字符串，比如+1.23400E-03保存1.23400，-1.2E+10保存1.2
//		}
//		else
//		{
//			index = i;//index找E的位置
//			break;
//		}
//	}
//	index++;//E之后的位置一定是一个符号
//	bool flag;
//	if (str[index] == '+')
//	{
//		flag = true;
//	}
//	else flag = false;//如果符号为正，则flag为true，反之为false
//	string fen = "";
//	for (int i = index + 1; i < str.size(); i++)
//	{
//		fen += str[i];//字符串fen表示后面的位数，即E（符号）之后的字符串，比如+1.23400E-03保存03，-1.2E+10保存10
//	}
//	int n = atoi(fen.c_str());//将fen转换为int 型
//	if (flag)//E后面是正数，即小数点向后移
//	{
//		int temp = find_point(num);//找到小数点并先把小数点之前的数输出
//		for (int i = 0; i < temp; i++)
//		{
//			cout << num[i];
//		}
//		if (num.size() - 1 - temp > n)//这里注意：如果num.size()-1代表num字符串最后一个字符的下标（从0开始，所以要-1）
//		{//其减temp代表小数点之后的位数即+1.23400E-03就是5位（23400），如果其比n大，则说明需要保留num的末尾数
//			for (int i = temp + 1; i < temp + 1 + n; i++)
//			{
//				cout << num[i];
//			}
//			cout << '.';
//			for (int i = temp + 1 + n; i < num.size(); i++)
//			{
//				cout << num[i];
//			}
//		}
//		else {//如果其比n小，说明不需要保留num的位数
//			for (int i = temp + 1; i < num.size(); i++)
//			{
//				cout << num[i];
//				n--;
//			}
//			for (int i = 0; i < n; i++)
//			{
//				cout << '0';
//			}
//		}
//	}
//	else {//E后面是负数，即小数点向左移
//		int temp = find_point(num);
//		for (int i = 0; i < n; i++)//先带.输出0的个数
//		{
//			if (i == 1)
//			{
//				cout << '.';
//			}
//			cout << '0';
//		}
//		cout << num[0];
//		for (int i = temp + 1; i < num.size(); i++)
//		{
//			cout << num[i];
//		}
//	}
//	system("pause");
//	return 0;
//}