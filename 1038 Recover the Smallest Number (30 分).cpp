//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//vector<string>V;
//bool cmp(string a, string b)//��������һ�����У����ĳ�������ڵ�Ԫ��֮�䷢����������ʹ���������е�ֵ��С�����Ǿ�Ӧ�ü���Ľ���
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
//	while (ans[0] == '0'&&ans.size() > 1)//����ĵ�һλ������0�������ֻ��0����Ӧ�����0
//	{
//		ans.erase(ans.begin());
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}