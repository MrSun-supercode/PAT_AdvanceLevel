///*
//ֱ��ʹ�ò��鼯���ɣ������������̿ɿ�ipadPAT�׼�1118�£�����棩
//*/
//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//const int maxn = 10010;//���10000��һ�����Ե�𰸴���
//set<int>cnt;
//int father[maxn];
//void init(int father[])
//{
//	for (int i = 0; i < maxn; i++)
//	{
//		father[i] = i;
//	}
//}
//int findFather(int x)
//{
//	int a = x;
//	while (a!=father[a])
//	{
//		a = father[a];
//	}
//	while (x!=father[x])//·��ѹ�� 
//	{
//		int temp = x;		
//		x = father[x];
//		father[temp] = a;
//	}
//	return a;
//}
//void Union(int a, int b)
//{
//	int tempa = findFather(a);
//	int tempb = findFather(b);
//	if (tempa!=tempb)
//	{
//		father[tempa] = tempb;
//	}
//}
//int main(void)
//{
//	int n,k,temp;
//	cin >> n;
//	init(father);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> k >> temp;
//		cnt.insert(temp);
//		for (int j = 0; j < k-1; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			cnt.insert(tmp);
//			Union(temp, tmp);
//		}
//	}
//	int maxm = *(--cnt.end());//set�����ź���ģ����һ��Ԫ��Ϊ�����Ԫ�أ���Ϊend()Ϊ���һ��Ԫ�صĺ�һ��λ�ã�����Ҫ���Լ���ȡ
//	/*for (int i = 1; i <= maxm; i++)
//	{
//		cout << father[i] << endl;
//	}*/
//	int count = 0;//�м������ڵ���м�����
//	for (int i = 1; i <= maxm; i++)
//	{
//		if (father[i]==i)
//		{
//			count++;
//		}
//	}
//	cout << count<<' '<<maxm << endl;
//	int query;
//	cin >> query;
//	for (int i = 0; i < query; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		if (findFather(a)==findFather(b))
//		{
//			cout << "Yes" << endl;
//		}
//		else cout << "No" << endl;
//	}
//	system("pause");
//	return 0;
//}