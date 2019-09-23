///*
//数组的题使用list数组保存链表节点的addr以及value模拟就很简单了
//*/
//#include<iostream>
//#include<vector>
//#include<set>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//struct Node {
//	int addr, value, next;
//}node[100000];
//Node list1[100001];//保存第一个链表中的内容，第一个链表中的内容只需要链表节点的addr以及value即可，next就是下一个节点的addr
//Node list2[100001];//保存第二个链表中的内容
//int main(void)
//{
//	int first, n, addr, value, next;
//	cin >> first >> n;
//	set<int>S;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> addr >> value >> next;
//		node[addr] = { addr,value,next };//链表输入
//	}
//	int cur = first;//vur从第一个给出的地址开始遍历
//	int index1 = 0, index2 = 0;//两个list中的索引下标
//	while (cur != -1)
//	{
//		if (S.find(abs(node[cur].value)) == S.end())//S中不存在abs(value)
//		{
//			S.insert(abs(node[cur].value));//将abs(value)添加到S中去
//			list1[index1++] = { node[cur] };//list1中加入node[cur]
//		}
//		else {//S中存在abs(value)
//			list2[index2++] = { node[cur] };//list2中加入node[cur]
//		}
//		cur = node[cur].next;//cur指向下一个链表节点
//	}
//	for (int i = 0; i < index1; i++)
//	{
//		if (i != index1 - 1)
//		{
//			printf("%05d %d %05d\n", list1[i].addr, list1[i].value, list1[i + 1].addr);//注意这里给出的是list1[i + 1].addr而不可以使用list[i].next,因为list[i]的next已经改变了，而改变后的值便是list1[i + 1].addr
//		}
//		else printf("%05d %d -1\n", list1[i].addr, list1[i].value);
//	}
//	for (int i = 0; i < index2; i++)
//	{
//		if (i != index2 - 1)
//		{
//			printf("%05d %d %05d\n", list2[i].addr, list2[i].value, list2[i + 1].addr);
//		}
//		else printf("%05d %d -1\n", list2[i].addr, list2[i].value);
//	}
//	system("pause");
//	return 0;
//}