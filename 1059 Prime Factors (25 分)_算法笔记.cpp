//#include<iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//struct node {
//	int factor;
//	int num;
//}fact[10];//
//const int maxn = 10010;
//bool isPrime(int n)
//{
//	int temp = sqrt(n);
//	if (n == 1)
//	{
//		return false;
//	}
//	for (int i = 2; i <= temp; i++)
//	{
//		if (n%i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int prime[maxn];
//int cnt = 0;
//void findPrime()//�����ж������ĺ�������������
//{
//	for (int i = 1; i < maxn; i++)
//	{
//		if (isPrime(i))
//		{
//			prime[cnt++] = i;
//		}
//	}
//}
//int main(void)
//{
//	long int n;
//	cin >> n;
//	int pnum = 0;
//	findPrime();
//	if (n == 1)
//	{
//		cout << "1=1" << endl;
//	}
//	else {
//		cout << n << '=';
//		int temp = sqrt(n);
//		int i;
//		for (i = 0; i < cnt&&prime[i] <= temp; i++)//ע��������i < cnt��Ϊcnt��prime���������ĸ���
//		{
//			if (n%prime[i] == 0)
//			{
//				fact[pnum].factor = prime[i];
//				fact[pnum].num = 0;
//				while (n%prime[i] == 0)
//				{
//					fact[pnum].num++;
//					n /= prime[i];
//				}
//				pnum++;//Ҫ��ifѭ������ӣ�������ӵĻ���ʹn%prime[i]���ܱ�����Ҳ���
//			}
//			if (n == 1)
//			{
//				break;
//			}
//		}
//		if (n != 1)//���������n����Ϊ1��˵���϶���һ������sqrt(n)�����ӣ�ֱ�ӽ������Ӹ���fact����
//		{
//			fact[pnum].factor = n;
//			fact[pnum].num = 1;
//			pnum++;
//		}
//	}
//	for (int i = 0; i < pnum; i++)
//	{
//		if (i != 0)
//		{
//			cout << '*';
//		}
//		cout << fact[i].factor;
//		if (fact[i].num > 1)
//		{
//			cout << '^' << fact[i].num;
//		}
//	}
//	system("pause");
//	return 0;
//}