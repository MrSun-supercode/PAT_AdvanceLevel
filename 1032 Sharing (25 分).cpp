///*
//˼·������map�к󣬽������α������Ƚϵ�һ����ȵ�nextֵ��������ռ临�Ӷ�O(n),ʱ�临�Ӷ�O(n*n),���Ե�3��5��ʱ��4�𰸴���
//*/
///*
//ת��˼·���ȴ�begin1��ʼ���������������ֵ��visitedȫ����Ϊtrue��Ȼ���ٴ�begin2��ʼ������������һ��visited==true
//�ĵ���������ء��������֮��û�н���������-1
//���Ե�3��ʱ���ռ临�Ӷ�O(n),ʱ�临�Ӷ�O(n)
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