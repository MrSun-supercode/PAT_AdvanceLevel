///*
//思路同上面优化的一样，只不过不用map和string，使用数组下标来表示address，数组为node类型
//*/
//#include<iostream>
//using namespace std;
//struct node {
//	char c;
//	int next;
//	bool flag;
//};
//node list[100000];
//int main(void)
//{
//	int begin1, begin2, n;
//	cin >> begin1 >> begin2 >> n;
//	int addr, next;
//	char c;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> addr >> c >> next;
//		list[addr] = { c,next,false };//给结点赋值
//	}
//	while (begin1 != -1)
//	{
//		list[begin1].flag = true;
//		begin1 = list[begin1].next;
//	}
//	while (begin2 != -1)
//	{
//		if (list[begin2].flag == true)
//		{
//			printf("%05d\n", begin2);//注意输出时要输出5位，不够的向前补0
//			system("pause");
//			return 0;
//		}
//		begin2 = list[begin2].next;
//	}
//	cout << "-1" << endl;
//	system("pause");
//	return 0;
//}