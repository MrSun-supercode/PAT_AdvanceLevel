///*
//����˼·�뿴�����ص���ר��������⣬��������˼·һģһ��
//*/
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct Node {
//	int addr, value, next;
//	bool flag;
//}node[100000];
//Node list[100000];
//int main(void)
//{
//	int first, n, k, addr, value, next;
//	cin >> first >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> addr >> value >> next;
//		node[addr] = { addr,value,next,false };
//	}
//	int cur = first;
//	int index = 0;
//	while (cur != -1)//��һ�飬������С��0�ķ���list��
//	{
//		if (node[cur].value < 0)
//		{
//			node[cur].flag = true;
//			list[index++] = { node[cur] };
//		}
//		cur = node[cur].next;
//	}
//	cur = first;
//	while (cur != -1)//�ڶ��飬������С��k����û������list�еĽڵ����list��
//	{
//		if (node[cur].value <= k && !node[cur].flag)
//		{
//			node[cur].flag = true;
//			list[index++] = { node[cur] };
//		}
//		cur = node[cur].next;
//	}
//	cur = first;
//	while (cur != -1)//�����飬������û������list�еĽڵ����list��
//	{
//		if (!node[cur].flag)
//		{
//			node[cur].flag = true;
//			list[index++] = { node[cur] };
//		}
//		cur = node[cur].next;
//	}
//	for (int i = 0; i < index; i++)
//	{
//		if (i != index - 1)
//		{
//			printf("%05d %d %05d\n", list[i].addr, list[i].value, list[i + 1].addr);
//		}
//		else printf("%05d %d -1\n", list[i].addr, list[i].value);
//	}
//	system("pause");
//	return 0;
//}