///*
//������Ϊgroup��+1����Ϊgroup��˵����group�����뵽��һ�ֵı�ƴ���У���һ�ֵ������˶�Ӧ����group+1��
//�����ýṹ��洢��ͬʱ�洢weight��rank
//Ȼ��ʹ�ö��У�ÿ�ν�ÿ���������ʤ���ٷ�����У�Ȼ����������㷨
//*/
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<cmath>
//using namespace std;
//queue<int>q;
//const int maxm = 1000;
//struct node {
//	int weight;
//	int rank;
//}a[maxm];
//int main(void)
//{
//	int n, groupnum, num, temp;//groupnumΪÿ��������numΪ����
//	cin >> n >> groupnum;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i].weight;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		q.push(temp);//������зų�ʼ�±�
//	}
//	int mouse = n;
//	while (q.size() > 1)//�������û��ֻʣһ��Ԫ�ؼ�����δ����
//	{
//		num = mouse % groupnum == 0 ? mouse / groupnum : mouse / groupnum + 1;//numΪÿһ�ֲμӵ�������������������(mouse % groupnum==0�����������Ϊ��������ʱ����Ҫ��һ������Ҫ��ʣ�಻�������������˴��Ϊһ���飬����������+1)
//		for (int i = 0; i < num; i++)//����ѭ��
//		{
//			int maxn = -1, ptr = -1;
//			for (int j = 0; j < groupnum; j++)//ÿ����Աѭ��
//			{
//				if (i*groupnum + j == mouse)//������һ�鲻��groupnum�������Ѿ��������һ��Ԫ��֮����ȡq.front()������һ�ֵ�Ԫ���ˣ�����Ҫbreak
//				{
//					break;
//				}
//				if (a[q.front()].weight > maxn)//��ÿ�����������±꣬��ptr����
//				{
//					maxn = a[q.front()].weight;
//					ptr = q.front();
//				}
//				a[q.front()].rank = num + 1;//ÿ�α����󶼼���rank��
//				q.pop();//��������pop��ȥ
//			}
//			if (ptr != -1)//���ptr��Ϊ-1������������
//			{
//				q.push(ptr);
//			}
//		}
//		mouse = num;//mouse��Ϊ��������������һ�ֲμӵ����г�Ա��������һ�������һ��Ҫ�ּ���
//	}
//	a[q.front()].rank = 1;//2���ϵ�rank�Ѿ����ɹ��ˣ������Ҫ�����������һ��Ԫ�أ�Ҳ���ǻ�ʤ�ߣ���rank��Ϊ1
//	for (int i = 0; i < n; i++)
//	{
//		if (i == 0)
//		{
//			cout << a[i].rank;
//		}
//		else cout << ' ' << a[i].rank;
//	}
//	system("pause");
//	return 0;
//}