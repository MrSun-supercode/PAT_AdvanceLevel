///*
//思路：存入map中后，进行两次遍历，比较第一个相等的next值，输出，空间复杂度O(n),时间复杂度O(n*n),测试点3，5超时，4答案错误
//*/
///*
//转换思路后，先从begin1开始往后遍历，将所有值的visited全部置为true，然后再从begin2开始遍历，遇到第一个visited==true
//的点输出并返回。如果遍历之后没有结果的则输出-1
//测试点3超时，空间复杂度O(n),时间复杂度O(n)
//*/
//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//struct node {
//	char alp;
//	string next;
//	bool visited = false;
//};
//int main(void)
//{
//	string begin1, begin2;
//	map<string, node>P;
//	int n;
//	cin >> begin1 >> begin2 >> n;
//	for (int i = 0; i < n; i++)
//	{
//		string address, next;
//		char c;
//		cin >> address >> c >> next;
//		P[address] = { c,next };
//	}
//	string next1 = P[begin1].next;
//	P[begin1].visited = true;
//	string next2 = P[begin2].next;
//	string next = "";
//	bool flag = false;
//	/*while (next1 != "-1")
//	{
//		next2 = P[begin2].next;
//		while (next2 != "-1")
//		{
//			if (next1 == next2)
//			{
//				next = next1;
//				flag = true;
//				break;
//			}
//			else next2 = P[next2].next;
//		}
//		if (!flag)
//		{
//			next1 = P[next1].next;
//		}
//		else break;
//	}
//	*/
//	while (next1 != "-1")
//	{
//		P[next1].visited = true;
//		next1 = P[next1].next;
//	}
//	if (P[begin2].visited == true)
//	{
//		cout << begin2 << endl;
//		system("pause");
//		return 0;
//	}
//	while (next2 != "-1")
//	{
//		if (P[next2].visited == true)
//		{
//			next = next2;
//			break;
//		}
//		else next2 = P[next2].next;
//	}
//	if (next == "")
//	{
//		cout << "-1" << endl;
//		system("pause");
//		return 0;
//	}
//	cout << next << endl;
//	system("pause");
//	return 0;
//}