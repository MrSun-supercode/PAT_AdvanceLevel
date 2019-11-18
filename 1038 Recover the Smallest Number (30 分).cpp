//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//vector<string>V;
//bool cmp(string a, string b)//对于这样一个序列，如果某两个相邻的元素之间发生交换可以使得整个序列的值变小，我们就应该坚决的交换
//{
//	return a + b < b + a;
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	V.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V[i];
//	}
//	sort(V.begin(), V.end(), cmp);
//	string ans = "";
//	for (int i = 0; i < n; i++)
//	{
//		ans += V[i];
//	}
//	while (ans[0] == '0'&&ans.size() > 1)//输出的第一位不能是0，但如果只有0还是应该输出0
//	{
//		ans.erase(ans.begin());
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}