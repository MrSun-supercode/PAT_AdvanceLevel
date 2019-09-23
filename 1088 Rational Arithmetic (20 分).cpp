/////*
////做不下去了，太麻烦了，直接换下一题
////这种分数的题一直做不好
////*/
////#include<iostream>
////#include<string>
////#include<vector>
////using namespace std;
////struct node {
////	bool flag;
////	long int temp = 0;
////	long int fenzi;
////	long int fenmu;
////	bool isZero = false;
////	bool isInf = false;
////};
////int main(void)
////{
////	string s1, s2;
////	cin >> s1 >> s2;
////	node num1, num2;
////	vector<node>V(4);
////	if (s1[0] == '-')
////	{
////		num1.flag = false;
////		string fenzi = "", fenmu = "";
////		int index;
////		for (int i = 1; i < s1.size(); i++)
////		{
////			if (s1[i] <= '9'&&s1[i] >= '0')
////			{
////				fenzi += s1[i];
////			}
////			else {
////				index = i;
////				break;
////			}
////		}
////		for (int i = index + 1; i < s1.size(); i++)
////		{
////			fenmu += s1[i];
////		}
////		num1.fenzi = atoi(fenzi.c_str());
////		num1.fenmu = atoi(fenmu.c_str());
////	}
////	else {
////		num1.flag = true;
////		string fenzi = "", fenmu = "";
////		int index;
////		for (int i = 0; i < s1.size(); i++)
////		{
////			if (s1[i] <= '9'&&s1[i] >= '0')
////			{
////				fenzi += s1[i];
////			}
////			else {
////				index = i;
////				break;
////			}
////		}
////		for (int i = index + 1; i < s1.size(); i++)
////		{
////			fenmu += s1[i];
////		}
////		num1.fenzi = atoi(fenzi.c_str());
////		num1.fenmu = atoi(fenmu.c_str());
////	}
////	if (s2[0] == '-')
////	{
////		num2.flag = false;
////		string fenzi = "", fenmu = "";
////		int index;
////		for (int i = 1; i < s2.size(); i++)
////		{
////			if (s2[i] <= '9'&&s2[i] >= '0')
////			{
////				fenzi += s2[i];
////			}
////			else {
////				index = i;
////				break;
////			}
////		}
////		for (int i = index + 1; i < s2.size(); i++)
////		{
////			fenmu += s2[i];
////		}
////		num2.fenzi = atoi(fenzi.c_str());
////		num2.fenmu = atoi(fenmu.c_str());
////	}
////	else {
////		num2.flag = true;
////		string fenzi = "", fenmu = "";
////		int index;
////		for (int i = 0; i < s2.size(); i++)
////		{
////			if (s2[i] <= '9'&&s2[i] >= '0')
////			{
////				fenzi += s2[i];
////			}
////			else {
////				index = i;
////				break;
////			}
////		}
////		for (int i = index + 1; i < s2.size(); i++)
////		{
////			fenmu += s2[i];
////		}
////		num2.fenzi = atoi(fenzi.c_str());
////		num2.fenmu = atoi(fenmu.c_str());
////	}
////	/*cout << num1.flag << num1.temp << ' ' << num1.fenzi << '/' << num1.fenmu << endl;
////	cout << num2.flag << num2.temp << ' ' << num2.fenzi << '/' << num2.fenmu << endl;*/
////	for (int i = 0; i < 4; i++)
////	{
////		node num3;
////		if (i == 0)
////		{
////
////		}
////		else if (i == 1)
////		{
////
////		}
////		else if (i == 2)
////		{
////			if (num1.isZero==0||num2.isZero==0)
////			{
////				num3.isZero = 0;
////			}
////			else {
////				num3.fenzi = num1.fenzi*num2.fenzi;
////				num3.fenmu = num1.fenmu*num2.fenmu;
////				while (num3.fenzi >= num3.fenmu)
////				{
////					if (num3.fenzi != 0)
////					{
////						num3.fenzi -= num3.fenmu;
////						num3.temp++;
////					}
////					if (num3.fenzi == 0)
////					{
////						break;
////					}
////				}
////			}			
////		}
////		else {
////			if (num2.isZero==0)
////			{
////				num3.isInf = true;
////			}
////			else if (num1.isZero == 0)
////			{
////				num3.isZero = 0;
////			}
////			else {
////				num3.fenzi = num1.fenzi*num2.fenmu;
////				num3.fenmu = num1.fenmu*num2.fenzi;
////				while (num3.fenzi >= num3.fenmu)
////				{
////					if (num3.fenzi != 0)
////					{
////						num3.fenzi -= num3.fenmu;
////						num3.temp++;
////					}
////					if (num3.fenzi == 0)
////					{
////						break;
////					}
////				}
////			}
////		}
////	}
////	if (num1.fenzi == 0)
////	{
////		num1.isZero = true;
////	}
////	while (num1.fenzi >= num1.fenmu)
////	{
////		if (num1.fenzi != 0)
////		{
////			num1.fenzi -= num1.fenmu;
////			num1.temp++;
////		}
////		if (num1.fenzi == 0)
////		{
////			break;
////		}
////	}
////	if (num2.fenzi == 0)
////	{
////		num2.isZero = true;
////	}
////	while (num2.fenzi >= num2.fenmu)
////	{
////		if (num2.fenzi != 0)
////		{
////			num2.fenzi -= num2.fenmu;
////			num2.temp++;
////		}
////		if (num2.fenzi == 0)
////		{
////			break;
////		}
////	}
////	//开始输出
////	for (int i = 0; i < 4; i++)
////	{
////		if (num1.isZero == true)
////		{
////			cout << "0 ";
////		}
////		else {
////			if (num1.flag == false)
////			{
////				cout << "(-";
////				if (num1.temp == 0)
////				{
////					cout << num1.fenzi << '/' << num1.fenmu << ") ";
////				}
////				else {
////					if (num1.fenzi != 0)
////					{
////						cout << num1.temp << ' ' << num1.fenzi << '/' << num1.fenmu << ") ";
////					}
////					else cout << num1.temp << ") ";
////				}
////			}
////			else {
////				if (num1.temp == 0)
////				{
////					cout << num1.fenzi << '/' << num1.fenmu << ' ';
////				}
////				else {
////					if (num1.fenzi != 0)
////					{
////						cout << num1.temp << ' ' << num1.fenzi << '/' << num1.fenmu << ' ';
////					}
////					else cout << num1.temp << ' ';
////				}
////			}
////		}
////		if (i == 0)
////		{
////			cout << "+ ";
////
////		}
////		else if (i == 1)
////		{
////			cout << "- ";
////		}
////		else if (i == 2)
////		{
////			cout << "* ";
////		}
////		else if (i == 3)
////		{
////			cout << "/ ";
////		}
////		if (num2.isZero == true)
////		{
////			cout << "0 ";
////		}
////		else {
////			if (num2.flag == false)
////			{
////				cout << "(-";
////				if (num2.temp == 0)
////				{
////					cout << num2.fenzi << '/' << num2.fenmu << ") ";
////				}
////				else {
////					if (num2.fenzi != 0)
////					{
////						cout << num2.temp << ' ' << num2.fenzi << '/' << num2.fenmu << ") ";
////					}
////					else cout << num2.temp << ") ";
////				}
////			}
////			else {
////				if (num2.temp == 0)
////				{
////					cout << num2.fenzi << '/' << num2.fenmu << ' ';
////				}
////				else {
////					if (num2.fenzi != 0)
////					{
////						cout << num2.temp << ' ' << num2.fenzi << '/' << num2.fenmu << ' ';
////					}
////					else cout << num2.temp << ' ';
////				}
////			}
////		}
////		cout << "= ";
////		/*cout << endl;*/
////	}
////
////
////	system("pause");
////	return 0;
////}
///*
//看了算法笔记157页，收益良多，这道题就很简单了，详情见1081题注释
//*/
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	long int up, down;
//};
//long int gcd(long int a, long int b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	else return gcd(b, a%b);
//}
//void func(node &a)
//{
//	if (a.down < 0)
//	{
//		a.up = -a.up;
//		a.down = -a.down;
//	}
//	if (a.up == 0)
//	{
//		a.down = 1;
//	}
//	else {
//		int d = gcd(abs(a.up), abs(a.down));
//		a.up /= d;
//		a.down /= d;
//	}
//}
//node funcAdd(node a, node b)
//{
//	node temp;
//	temp.up = a.up*b.down + a.down*b.up;
//	temp.down = a.down*b.down;
//	func(temp);
//	return temp;
//}
//node funcSub(node a, node b)
//{
//	node temp;
//	temp.up = a.up*b.down - a.down*b.up;
//	temp.down = a.down*b.down;
//	func(temp);
//	return temp;
//}
//node funcMul(node a, node b)
//{
//	node temp;
//	temp.up = a.up*b.up;
//	temp.down = a.down*b.down;
//	func(temp);
//	return temp;
//}
//node funcDivide(node a, node b)
//{
//	node temp;
//	temp.up = a.up*b.down;
//	temp.down = a.down*b.up;
//	func(temp);
//	return temp;
//}
//void print(node a)
//{
//	func(a);//因为输入输出不一定是最简的分数形式，所以对输入的数就要先进行化简,分情况讨论，若是负数就加一个（）
//	if (a.up < 0)
//	{
//		cout << "(";
//		if (a.down == 1)
//		{
//			cout << a.up;
//		}
//		else if (abs(a.up) > a.down)
//		{
//			cout << a.up / a.down << ' ' << abs(a.up) % a.down << '/' << a.down;
//		}
//		else {
//			cout << a.up << '/' << a.down;
//		}
//		cout << ')';
//	}
//	else {
//		if (a.down == 1)
//		{
//			cout << a.up;
//		}
//		else if (a.up > a.down)
//		{
//			cout << a.up / a.down << ' ' << abs(a.up) % a.down << '/' << a.down;
//		}
//		else {
//			cout << a.up << '/' << a.down;
//		}
//	}
//}
//void add(node a, node b)
//{
//	node temp;
//	temp = funcAdd(a, b);
//	print(a);
//	cout << " + ";
//	print(b);
//	cout << " = ";
//	print(temp);
//	cout << endl;
//}
//void Minus(node a, node b)
//{
//	node temp;
//	temp = funcSub(a, b);
//	print(a);
//	cout << " - ";
//	print(b);
//	cout << " = ";
//	print(temp);
//	cout << endl;
//}
//void mul(node a, node b)
//{
//	node temp;
//	temp = funcMul(a, b);
//	print(a);
//	cout << " * ";
//	print(b);
//	cout << " = ";
//	print(temp);
//	cout << endl;
//}
//void divide(node a, node b)
//{
//	node temp;
//	temp = funcDivide(a, b);
//	print(a);
//	cout << " / ";
//	print(b);
//	cout << " = ";
//	if (temp.down == 0)//如果被除数是0，那么直接输出Inf，不需要走print(temp)了
//	{
//		cout << "Inf";
//	}
//	else print(temp);
//	cout << endl;
//}
//int main(void)
//{
//	node a, b;
//	scanf_s("%ld/%ld %ld/%ld", &a.up, &a.down, &b.up, &b.down);//注意输入是long int型，所以即使是求最小公倍数的函数输入输出类型也应该是long int
//	add(a, b);
//	Minus(a, b);
//	mul(a, b);
//	divide(a, b);
//	system("pause");
//	return 0;
//}