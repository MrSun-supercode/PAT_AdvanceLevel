///*
//֮ǰ��˼·�����������ṹ��ֱ�洢�˻���query������vector��
//����ʱ����Ϊÿ������ʱѭ�򽥽��ģ����������Σ��ȴӴ�С��money
//�ڶ����ŵ�ʱ��money���ʱ��С������age
//�������ŵ�ʱ��money��age�����ʱ��С������name
//���ǲ��Ե�2��ʱ�����Ե�3�𰸴���
//������S����Ĵ��룬ֻ��Ҫ��һ����
//����������һ������Ȼ����һ�飬�����ֿ���׼ȷ����ȫ��AC
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
//	else if (a.age != b.age)//�������else if˵��money�϶����
//	{
//		return a.age < b.age;
//	}
//	else return a.name < b.name;//�������else˵��money��age�϶����
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
//	int n, k;//����������ѯ����
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