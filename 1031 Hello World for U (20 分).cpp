///*
//思路:先找到这个U型的长宽高各是多少，用两个for循环（注意初始从i=3，j=2开始（因为U的string长度应大于5））
//最后按格式输出即可
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//void print_blank(int y)
//{
//	for (int i = 0; i < y; i++)
//	{
//		cout << ' ';
//	}
//}
//int main(void)
//{
//	int x,y;
//	string str;
//	cin >> str;
//	int n = str.size();
//	bool flag = false;
//	for (int i = 3; i <= n; i++)//i是最后一行横着的字符个数（包括节点）
//	{
//		for (int j = 2; j <= n; j++)//j是两个竖列的字符个数（包括节点）
//		{
//			if (j<=i&&2*j+i-2==n){//做判断，一直j最大不能超过i
//				x = i;
//				y = j;
//				flag = true;
//				break;
//			}
//		}
//		if (flag){
//			break;
//		}
//	}
//	int index = 0;
//	for (int i = 0; i < y-1; i++)
//	{
//		cout << str[i];
//		print_blank(x - 2);
//		cout << str[str.size() - 1-i] << endl;
//		index++;//index记录字符串前后共输出了多少个字符，便于后面输出剩余的字符
//	}
//	for (int i = 0; i < str.size()-2*index; i++)
//	{
//		cout << str[i + index];
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}