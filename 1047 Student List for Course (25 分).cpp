///*
//˼·��ʹ�ö�άvector����һά��ſγ̺ţ��ڶ�ά��ѧ�������֣�������������vector������Ҫbegin(),end()
//һ��ע�⣺ʹ��cout��cinʱ���һ�����Ե㳬ʱ������һ��Ҫ��scanf��printf��
//ע��string���͵��������ʱprintf("%s\n", V[i][j].c_str());����ʱ������Ҫ��cin��������scanf
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