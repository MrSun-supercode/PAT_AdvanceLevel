///*
//���Ե�2�ǵ�mΪ1ʱ��������
//���һ�����Ե��޷�ͨ������֪��Ϊʲô
//��������Լ��Ĵ��룬��Ҫע���ڽ����ͻʱʹ���˽������ƽ�����
//*/
////#include<iostream>
////#include<vector>
////using namespace std;
////bool isPrime(int m)
////{
////	if (m == 1)
////	{
////		return false;
////	}
////	for (int i = 2; i*i <= m; i++)
////	{
////		if (m%i == 0)
////		{
////			return false;
////		}
////	}
////	return true;
////}
////int findHigherPrime(int m)
////{
////	while (!isPrime(m))
////	{
////		m++;
////	}
////	return m;
////}
////int main(void)
////{
////	int m, n;
////	cin >> m >> n;
////	m = findHigherPrime(m);
////	vector<int>V(m);
////	for (int i = 0; i < n; i++)
////	{
////		int temp;
////		cin >> temp;
////		bool flag = false;
////		if (i != 0)
////		{
////			cout << ' ';
////		}
////		if (V[temp%m] != 1)
////		{
////			cout << temp % m;
////			V[temp % m] = 1;
////		}
////		else {
////			for (int j = 1; j < V.size(); j++)
////			{
////				int index = (temp + j * j) % V.size();
////				if (V[index] != 1)
////				{
////					cout << index;
////					V[index] == 1;
////					flag = true;
////					break;
////				}
////			}
////			if (!flag)
////			{
////				cout << '-';
////			}
////		}
////	}
////	system("pause");
////	return 0;
////}
///*
//�ο����S����Ĵ��룬�����
//*/
//#include<iostream>
//#include<vector>
//using namespace std;
//bool isPrime(int m)
//{
//	if (m == 1)
//	{
//		return false;
//	}
//	for (int i = 2; i*i <= m; i++)
//	{
//		if (m%i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int findHigherPrime(int m)
//{
//	while (!isPrime(m))
//	{
//		m++;
//	}
//	return m;
//}
//void insert(int temp, vector<int>&V)//��һ���ǹؼ���û����һ����ʱ��i��0-V.size()��Ȼ���Ƿ��ͻ������ͻ��continue������͸���
//{
//	for (int i = 0; i < V.size(); i++)
//	{
//		int index = (temp + i * i) % V.size();
//		if (V[index] != 1)
//		{
//			V[index] = 1;
//			cout << index;
//			return;
//		}
//	}
//	cout << '-';//��forѭ������������δ��������ʹ��������μ������ͻʧ�ܣ������-
//}
//int main(void)
//{
//	int m, n;
//	cin >> m >> n;
//	m = findHigherPrime(m);
//	vector<int>V(m);
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		if (i != 0)
//		{
//			cout << ' ';
//		}
//		insert(temp, V);
//	}
//	system("pause");
//	return 0;
//}