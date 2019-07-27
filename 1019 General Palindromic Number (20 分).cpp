////思路：先使用余数法将所有得到的数存在vector中，然后再判断回文，最后输出即可。
////第一次提交测试点2答案错误，测试点4格式错误 原因--string类储存的字符最大只能到255，之前用的string，卡了很久，后改成vector直接过
//#include<iostream>
//#include<vector>
////#include<string>
//using namespace std;
//void is_Palindromic(vector<int> V)
//{
//	for (int i = 0; i <= V.size() / 2; i++)
//	{
//		if (V[i] != V[V.size() - 1 - i])
//		{
//			cout << "No" << endl;
//			return;
//		}
//	}
//	cout << "Yes" << endl;
//}
//int main(void)
//{
//	int n, b;
//	cin >> n >> b;
//	/*string list = "";*/
//	vector<int>V;
//	while (n != 0)
//	{
//		int temp = n % b;
//		/*list += to_string(temp);*/
//		V.push_back(temp);
//		n /= b;
//	}
//	/*cout << list.length() << endl;*/
//	is_Palindromic(V);
//	for (int i = V.size() - 1; i >= 0; i--)
//	{
//		if (i != 0)
//		{
//			cout << V[i] << ' ';
//		}
//		else cout << V[i];
//	}
//	system("pause");
//	return 0;
//}