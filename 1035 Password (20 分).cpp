///*
//思路：很简单的水题，就遍历一遍password找到需要替换的字符进行替换即可，然后将替换过后的V[i].checked置为true
//按输入顺序输出V[i].checked为true的即可
//坑点：一定注意在没有发生改变的情况下，
//n=1时是is和count 测试点1
//n大于1时是are 和counts 测试点2
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//struct node {
//	string name;
//	string password;
//	bool checked = false;
//};
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector<node>V(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V[i].name >> V[i].password;
//	}
//	int count = 0;
//	for (int i = 0; i < V.size(); i++)
//	{
//		for (int j = 0; j < V[i].password.size(); j++)
//		{
//			if (V[i].password[j] == '1')
//			{
//				V[i].password[j] = '@';
//				V[i].checked = true;
//			}
//			else if (V[i].password[j] == '0')
//			{
//				V[i].password[j] = '%';
//				V[i].checked = true;
//			}
//			else if (V[i].password[j] == 'l')
//			{
//				V[i].password[j] = 'L';
//				V[i].checked = true;
//			}
//			else if (V[i].password[j] == 'O')
//			{
//				V[i].password[j] = 'o';
//				V[i].checked = true;
//			}
//		}
//		if (V[i].checked)
//		{
//			count++;
//		}
//	}
//	if (count != 0)
//	{
//		cout << count << endl;
//		for (int i = 0; i < V.size(); i++)
//		{
//			if (V[i].checked)
//			{
//				cout << V[i].name << ' ' << V[i].password << endl;
//			}
//		}
//	}
//	else
//	{
//		if (n == 1)
//		{
//			cout << "There is 1 account and no account is modified" << endl;
//		}
//		else cout << "There are " << n << " accounts and no account is modified" << endl;
//	}
//
//	system("pause");
//	return 0;
//}