///*
//������S����Ĵ��룺ʹ��cin��cout��string���������ٶȣ���ʹ��char c[5]������string����scanf��printf����cin��cout
//��һ�������ֻ����int�����������ȡ
//����˼·���趨һ������vector��Ȼ��һ�����������̽�����ת��Ϊint�������ڶ�ӦV�ϴ洢push_back�γ̺�
//�����Ͳ���Ҫ�ٲ�ѯ�ˣ���ʡʱ��Ϳռ䣨һ��vector��
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxn = 26 * 26 * 26 * 10 + 10;
//vector<int> V[maxn];
//int getId(char* c)//�������Ҫд�ã���Ȼ���һ���㲻�Ǵ�����ǳ�ʱ����Ҫ�ó˵ȣ��ᳬʱ��
//{
//	int num = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		num = num * 26 + c[i] - 'A';
//	}
//	num = num * 10 + c[3];
//	return num;
//}
//int main(void)
//{
//	int n, k, id, index, num;
//	cin >> n >> k;
//	char c[5];
//	for (int i = 0; i < k; i++)
//	{
//		cin >> index >> num;
//		for (int j = 0; j < num; j++)
//		{
//			scanf("%s", c);
//			V[getId(c)].push_back(index);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", c);
//		id = getId(c);
//		sort(V[id].begin(), V[id].end());
//		printf("%s %d", c, V[id].size());
//		for (int j = 0; j < V[id].size(); j++)
//		{
//			printf(" %d", V[id][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}