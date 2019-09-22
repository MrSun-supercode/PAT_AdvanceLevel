//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct Node {
//	int value;
//	int next;
//}node[100000];
//int list[100000];//list是存储的next表，即list存储链表的顺序序列（本例子中是1,2,3,4,5,6，list[i]是每个元素的addr，list[i+1]是每个元素下一个的addr即node[addr].next），详情看https://www.cnblogs.com/ljwTiey/p/4294484.html
//vector<int>res;//使用list数组时要开的很大才不会导致倒数第二个测试点错误，使用res时不用担心
//int main(void)
//{
//	int first, n, k, addr, value, next;
//	cin >> first >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> addr >> value >> next;
//		node[addr] = { value,next };
//	}
//	int cnt = 0;//这样一来，只需要改变list的顺序，然后按照node输出即相当于给链表改变顺序了
//	while (first != -1)
//	{
//		/*list[cnt++] = first;*/
//		res.push_back(first);
//		first = node[first].next;
//	}
//	int i = 0;
//	cout << res.size() << endl;
//	while (i + k <= res.size())
//	{
//		/*reverse(list + i, list + i + k);*/
//		reverse(res.begin() + i, res.begin() + i + k);
//		i += k;
//	}
//	for (i = 0; i < res.size() - 1; i++)
//	{
//		/*printf("%05d %d %05d\n", list[i], node[list[i]].value, list[i + 1]);*/
//		printf("%05d %d %05d\n", res[i], node[res[i]].value, res[i + 1]);
//	}
//	printf("%05d %d -1\n", res[res.size() - 1], node[res[res.size() - 1]].value);
//	system("pause");
//	return 0;
//}