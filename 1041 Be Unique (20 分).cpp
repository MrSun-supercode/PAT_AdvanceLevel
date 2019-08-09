///*
//使用arraylist存储数字出现的次数（初始化为0），使用list存储数字，按list顺序判断并将数字出现次数为1的数字输出
//*/
//#include<iostream>
//using namespace std;
//int arraylist[10001] = { 0 };//数字出现次数
//int list[100001];//数字
//int main(void)
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> list[i];
//		arraylist[list[i]]++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (arraylist[list[i]] == 1)
//		{
//			cout << list[i] << endl;
//			system("pause");
//			return 0;
//		}
//	}
//	cout << "None" << endl;
//	system("pause");
//	return 0;
//}