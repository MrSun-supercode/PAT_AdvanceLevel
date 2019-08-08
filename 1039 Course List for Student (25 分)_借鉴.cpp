///*
//借鉴柳婼大神的代码：使用cin，cout，string都会拖慢速度，则使用char c[5]来代替string，用scanf和printf代替cin和cout
//第一步将名字换算成int，这样方便存取
//大体思路：设定一个最大的vector，然后一输入名字立刻将名字转换为int，并且在对应V上存储push_back课程号
//这样就不需要再查询了，节省时间和空间（一个vector）
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxn = 26 * 26 * 26 * 10 + 10;
//vector<int> V[maxn];
//int getId(char* c)//这个函数要写好，不然最后一个点不是错误就是超时（不要用乘等，会超时）
//{
//	int num = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		num = num * 26 + c[i] - 'A';
//	}
//	num = num * 10 + c[3];
//	return num;
//}
//int main(void)
//{
//	int n, k, id, index, num;
//	cin >> n >> k;
//	char c[5];
//	for (int i = 0; i < k; i++)
//	{
//		cin >> index >> num;
//		for (int j = 0; j < num; j++)
//		{
//			scanf("%s", c);
//			V[getId(c)].push_back(index);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", c);
//		id = getId(c);
//		sort(V[id].begin(), V[id].end());
//		printf("%s %d", c, V[id].size());
//		for (int j = 0; j < V[id].size(); j++)
//		{
//			printf(" %d", V[id][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}