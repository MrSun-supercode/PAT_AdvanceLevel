///*
//���鼯��Ŀ�б�1114,1107,1118���������ȿ�1118��ǰ��ע�Ͳ��֣�ipad1107��д�ĺ����
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxm = 10010;
//vector<int>V[1001];//V����ʾhobby���࣬����push_back�����˵ı�ţ���1-N��
//int	father[maxm];
//int	num[maxm];
//void init(int father[])//��ʼ��
//{
//	for (int i = 0; i < maxm; i++)
//	{
//		father[i] = i;
//	}
//	fill(num, num + maxm, 0);
//}
//int getFather(int x) {//�Ҹ���
//	int a = x;
//	while (a != father[a])
//	{
//		a = father[a];
//	}
//	while (x != father[x])//·��ѹ��
//	{
//		int temp = x;
//		x = father[x];
//		father[temp] = a;
//	}
//	return a;
//}
//void Union(int a, int b)//�ϲ����鼯
//{
//	int tempa = getFather(a);
//	int tempb = getFather(b);
//	if (tempa != tempb)
//	{
//		father[tempa] = tempb;
//	}
//}
//bool cmp(int a, int b)//�Զ�������ʽ����
//{
//	return a > b;
//}
//int main(void)
//{
//	int n, maxn = 0;//maxn������hobby�������ֵ
//	cin >> n;
//	init(father);
//	for (int i = 1; i <= n; i++)
//	{
//		int k, temp;
//		scanf_s("%d: %d", &k, &temp);
//		V[temp].push_back(i);//��ʾϲ��temp��һhobby����i�����
//		maxn = max(maxn, temp);
//		for (int j = 0; j < k - 1; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			V[tmp].push_back(i);
//			maxn = max(maxn, tmp);
//		}
//	}
//	/*cout << maxn;*/
//	for (int i = 1; i <= maxn; i++)//1��Ԫ�ع����ɲ��鼯��������Ԫ�����ϣ������䲢�鼯
//	{
//		if (V[i].size() >= 2)
//		{
//			int temp = V[i][0];
//			for (int j = 1; j < V[i].size(); j++)
//			{
//				Union(temp, V[i][j]);
//			}
//		}
//	}
//	int cnt = 0;//�����Ҹ��ڵ����
//	for (int i = 1; i <= n; i++)
//	{
//		if (father[i] == i)
//		{
//			cnt++;
//		}
//	}
//	cout << cnt << endl;
//	for (int i = 1; i <= n; i++)//���������нڵ�����ڸ��ڵ�ĸ��������Ǹø��ڵ㺢�ӵĸ�����
//	{
//		num[getFather(i)]++;//���粢�鼯Ϊ3->5->7����num[7]Ϊ3����ʾ��7Ϊ���ڵ�ļ���Ԫ�ظ���Ϊ3
//	}
//	vector<int>V;
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] != 0)//�������ÿ�����ϵ�Ԫ�ظ�������V�н����������
//		{
//			V.push_back(num[i]);
//		}
//	}
//	sort(V.begin(), V.end(), cmp);
//	for (int i = 0; i < cnt; i++)
//	{
//		if (i == 0)
//		{
//			cout << V[i];
//		}
//		else cout << ' ' << V[i];
//	}
//	system("pause");
//	return 0;
//}