///*
//思路：借鉴的柳婼大神的思路：进行栈模拟，先将输入保存下来，然后按1-N的顺序依次将元素（也是1-N）放入栈中，每放一个数
//进行比较，如果栈中元素超过m则跳出循环并返回NO，设一个cur从输入的第一个值的下标开始向后遍历，如果栈不为空并且
//cur对应的输入的值与栈顶元素相等，则依次弹出栈顶元素，并且cur指针向后移动。
//最后判断是否全部都遍历过即cur要指向n（cur从0~n-1,遍历最后一个结束后cur++即cur==n）
//*/
//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//int main(void)
//{
//	int m, n, k;
//	cin >> m >> n >> k;
//	for (int i = 0; i < k; i++)
//	{
//		vector<int>temp(n);
//		for (int j = 0; j < n; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			temp[j] = tmp;
//		}
//		int cur = 0;
//		stack<int>s;
//		for (int x = 1; x <= n; x++)
//		{
//			s.push(x);
//			if (s.size() > m)//一定别忘了判断这个，如果没有这个条件基本上输入都应该算过，但是算上这个条件以后就不一定了
//			{
//				break;
//			}
//			while (!s.empty() && temp[cur] == s.top())
//			{
//				s.pop();
//				cur++;
//			}
//		}
//		if (cur == n)
//		{
//			cout << "YES" << endl;
//		}
//		else cout << "NO" << endl;
//	}
//	system("pause");
//	return 0;
//}