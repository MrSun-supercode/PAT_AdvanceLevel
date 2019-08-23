///*
//之前的思路：设立两个结构体分别存储人还有query，放入vector中
//排序时，因为每个排序时循序渐进的，所以排三次，先从大到小排money
//第二遍排的时候看money相等时从小到大排age
//第三遍排的时候看money和age都相等时从小到大排name
//但是测试点2超时，测试点3答案错误
//借鉴柳婼大神的代码，只需要改一步：
//将排序缩成一个函数然后排一遍，这样又快又准确，已全部AC
//*/
//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct Node {
//	string name;
//	int age;
//	int money;
//};
//struct query {
//	int num;
//	int min;
//	int max;
//};
//bool cmp(Node a, Node b)
//{
//	if (a.money != b.money)
//	{
//		return a.money > b.money;
//	}
//	else if (a.age != b.age)//经过这个else if说明money肯定相等
//	{
//		return a.age < b.age;
//	}
//	else return a.name < b.name;//经过这个else说明money和age肯定相等
//}
////bool cmp1(Node a, Node b)
////{
////	return a.money > b.money;
////}
////bool cmp2(Node a, Node b)
////{
////	return a.money == b.money ? a.age < b.age : NULL;
////}
////bool cmp3(Node a, Node b)
////{
////	return a.money == b.money&&a.age == b.age ? a.name < b.name : NULL;
////}
//int main(void)
//{
//	int n, k;//人总数，查询总数
//	scanf_s("%d %d", &n, &k);
//	vector<Node>V(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V[i].name;
//		scanf_s("%d %d", &V[i].age, &V[i].money);
//	}
//	vector<query>vec(k);
//	for (int i = 0; i < k; i++)
//	{
//		scanf_s("%d %d %d", &vec[i].num, &vec[i].min, &vec[i].max);
//	}
//	sort(V.begin(), V.end(), cmp);
//	/*sort(V.begin(), V.end(), cmp2);
//	sort(V.begin(), V.end(), cmp3);*/
//	/*for (int i = 0; i < n; i++)
//	{
//		cout << V[i].name << ' ' << V[i].age << ' ' << V[i].money << endl;
//	}*/
//	for (int i = 0; i < k; i++)
//	{
//		printf("Case #%d:\n", i + 1);
//		int index = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (V[j].age >= vec[i].min&&V[j].age <= vec[i].max)
//			{
//				cout << V[j].name << ' ';
//				printf("%d %d\n", V[j].age, V[j].money);
//				index++;
//			}
//			if (index == vec[i].num)
//			{
//				break;
//			}
//		}
//		if (index == 0)
//		{
//			printf("None\n");
//		}
//	}
//	system("pause");
//	return 0;
//}