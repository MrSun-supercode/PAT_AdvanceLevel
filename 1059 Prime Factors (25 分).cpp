///*
//˼·�������Ҫ ��n��������˵���n�������������ӣ�
//�����Ƚ���һ������������maxnҪȡ2000001����Ϊlongint�����10λ����ȡƽ����Ϊ��λ������������ȡ��λ��������Ϊ��һ�����Ե�
//���ȡ1000001�ḡ���������ȡ2000001
//�����������֮�󣬽�����������浽vector�У�
//Ȼ���ͷ��ʼ���������n�ܹ�����vector�е���������ô˵���Ǹ�������n���������ӣ����䱣��������������������cnt��
//������
//*/
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//const int maxn = 2000001;
//int list[maxn];
//vector<int>V;
//void isPrime(int n)
//{
//	fill(list, list + maxn, 1);
//	for (int i = 2; i*i <= n; i++)
//	{
//		for (int j = 2 * i; j < n; j += i)
//		{
//			list[j] = 0;
//		}
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		if (list[i] == 1)
//		{
//			V.push_back(i);
//		}
//	}
//}
//int main(void)
//{
//	long int n;
//	cin >> n;
//	int temp = (int)(sqrt(1.0*maxn));
//	isPrime(temp);
//	/*
//	����ע�͵��ǲ���ģ��
//	*/
//	/*for (int i = 0; i < 100; i++)
//	{
//		cout << list[i] << ' ';
//	}*/
//	/*for (int i = 0; i < V.size(); i++)
//	{
//		cout << V[i] << ' ';
//	}*/
//	if (n == 1)//���nΪ1��ֱ�����
//	{
//		cout << "1=1" << endl;
//	}
//	else {
//		cout << n << "=";
//		int cnt;
//		bool flag = false;//��ֹ*����ǰ���
//		for (int i = 0; n >= 2; i++)//
//		{
//			cnt = 0;
//			while (n%V[i] == 0)//�ҵ����������ӣ�nҪ����������cnt��¼�������Ա����^֮�������
//			{
//				n /= V[i];
//				cnt++;
//			}
//			if (cnt == 0)	continue;//�����ǰV[i]����n���������ӣ���i++
//			if (flag)//��ֹ*����ǰ���
//			{
//				cout << '*';
//			}
//			if (cnt == 1)//�����������ֻ������һ�Σ���ôֱ��������ɣ�ͬʱ��flag��Ϊtrue���Ա���һ�������*�ţ�����ֹ��һ�������*��
//			{
//				cout << V[i];
//				flag = true;
//			}
//			else {//����������ӳ����˶�Σ���ô��Ҫ������ֵĴ���cnt��ͬʱ��flag��Ϊtrue���Ա���һ�������*�ţ�����ֹ��һ�������*��
//				cout << V[i] << '^' << cnt;
//				flag = true;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}