///*
//�������ʹ��list���鱣������ڵ��addr�Լ�valueģ��ͺܼ���
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
//Node list1[100001];//�����һ�������е����ݣ���һ�������е�����ֻ��Ҫ����ڵ��addr�Լ�value���ɣ�next������һ���ڵ��addr
//Node list2[100001];//����ڶ��������е�����
//int main(void)
//{
//	int first, n, addr, value, next;
//	cin >> first >> n;
//	set<int>S;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> addr >> value >> next;
//		node[addr] = { addr,value,next };//��������
//	}
//	int cur = first;//vur�ӵ�һ�������ĵ�ַ��ʼ����
//	int index1 = 0, index2 = 0;//����list�е������±�
//	while (cur != -1)
//	{
//		if (S.find(abs(node[cur].value)) == S.end())//S�в�����abs(value)
//		{
//			S.insert(abs(node[cur].value));//��abs(value)��ӵ�S��ȥ
//			list1[index1++] = { node[cur] };//list1�м���node[cur]
//		}
//		else {//S�д���abs(value)
//			list2[index2++] = { node[cur] };//list2�м���node[cur]
//		}
//		cur = node[cur].next;//curָ����һ������ڵ�
//	}
//	for (int i = 0; i < index1; i++)
//	{
//		if (i != index1 - 1)
//		{
//			printf("%05d %d %05d\n", list1[i].addr, list1[i].value, list1[i + 1].addr);//ע�������������list1[i + 1].addr��������ʹ��list[i].next,��Ϊlist[i]��next�Ѿ��ı��ˣ����ı���ֵ����list1[i + 1].addr
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