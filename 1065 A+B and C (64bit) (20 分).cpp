////long long int的表示范围正好是2的负63次方到2的正63次方，但是如果ab都很大的话可能会溢出，所以用ans表示a+b来判断是否溢出
////以及溢出是正溢出还是负溢出
////#include<iostream>
////using namespace std;
////int main(void)
////{
////	int n;
////	long long int a, b, c, ans;
////	cin >> n;
////	bool flag;
////	for (int i = 0; i < n; i++)
////	{
////		cin >> a >> b >> c;
////		ans = a + b;//用来判断是否正溢出或负溢出
////		if (a > 0 && b > 0 && ans < 0) flag = true;
////		else if (a < 0 && b < 0 && ans >= 0) flag = false;
////		else if (ans > c) flag = true;
////		else flag = false;
////		printf("Case #%d: ", i + 1);
////		if (!flag)	cout << "false" << endl;
////		else cout << "true" << endl;
////	}
////	system("pause");
////	return 0;
////}
///*
//第二种方法，相加会溢出，直接判断相减的情况即可
//*/
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int n;
//	long long int a, b, c, ans;
//	cin >> n;
//	bool flag;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b >> c;
//		printf("Case #%d: ", i + 1);
//		b > c - a ? flag = true : flag = false;
//		if (!flag)	cout << "false" << endl;
//		else cout << "true" << endl;
//	}
//	system("pause");
//	return 0;
//}