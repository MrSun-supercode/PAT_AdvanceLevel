////long long int�ı�ʾ��Χ������2�ĸ�63�η���2����63�η����������ab���ܴ�Ļ����ܻ������������ans��ʾa+b���ж��Ƿ����
////�Լ��������������Ǹ����
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
////		ans = a + b;//�����ж��Ƿ�����������
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
//�ڶ��ַ�������ӻ������ֱ���ж�������������
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