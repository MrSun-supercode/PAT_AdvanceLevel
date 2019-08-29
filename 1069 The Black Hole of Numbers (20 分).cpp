///*
//思路：设立一个字符串接受输入，然后排序字符串，反转字符串，再将两个字符串变成int型相减，如果结果不为6174，则
//让n=相减结果然后继续
//要注意的是一开始要在n前面补够0，即n.insert(0, 4 - n.size(), '0');
//因为如果输入128不到四位数，应在前面补零，否则测试点至少2个通不过
//*/
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//bool cmp(char a, char b) { return a > b; }
//int main(void)
//{
//	string n;
//	cin >> n;
//	char c = n[0];
//	bool flag = false;
//	n.insert(0, 4 - n.size(), '0');//在0位置插入4-n.size()个'0'字符
//	for (int i = 1; i < n.size(); i++)
//	{
//		if (n[i] != c)
//		{
//			flag = true;
//			break;
//		}
//	}
//	if (!flag)
//	{
//		string temp = n;
//		reverse(temp.begin(), temp.end());
//		cout << n << " - " << temp << " = " << "0000" << endl;
//	}
//	else {
//		while (true)
//		{
//			sort(n.begin(), n.end(), cmp);
//			string temp = n;
//			reverse(temp.begin(), temp.end());
//			int temp1 = atoi(n.c_str());
//			int temp2 = atoi(temp.c_str());
//			printf("%04d - %04d = %04d\n", temp1, temp2, temp1 - temp2);
//			if (temp1 - temp2 == 6174)
//			{
//				break;
//			}
//			n = to_string(temp1 - temp2);
//			n.insert(0, 4 - n.size(), '0');
//		}
//	}
//	system("pause");
//	return 0;
//}