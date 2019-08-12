///*
//思路：使用二维vector，第一维存放课程号，第二维存学生的名字，最后别忘了排序。vector排序需要begin(),end()
//一定注意：使用cout和cin时最后一个测试点超时，所以一定要用scanf和printf。
//注意string类型的数据输出时printf("%s\n", V[i][j].c_str());输入时还是需要用cin而不能用scanf
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int temp, name;
//bool cmp(string a, string b)
//{
//	return a < b;
//}
//int main(void)
//{
//	int n, k;
//	scanf_s("%d %d", &n, &k);
//	vector<vector<string>>V(k + 1);
//	for (int i = 0; i < n; i++)
//	{
//		string name;
//		int num;
//		cin >> name >> num;
//		for (int j = 0; j < num; j++)
//		{
//			int temp;
//			scanf_s("%d", &temp);
//			V[temp].push_back(name);
//		}
//	}
//	int start = 0;
//	for (int i = 1; i <= k; i++)
//	{
//		sort(V[i].begin(), V[i].end(), cmp);
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		printf("%d %d\n", i, V[i].size());
//		for (int j = 0; j < V[i].size(); j++)
//		{
//			printf("%s\n", V[i][j].c_str());
//		}
//	}
//	system("pause");
//	return 0;
//}