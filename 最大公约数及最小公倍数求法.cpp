//#include<iostream>
//using namespace std;
//int gcd(int a, int b)//շת����������156ҳPAT�㷨�ʼ�,��a<b�����һ���������̽���a��b��ֵ
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	else return gcd(b, a%b);
//}
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//	int temp = gcd(n, m);
//	cout <<"���Լ���ǣ�"<< temp << endl;
//	cout << "��С�������ǣ�" << n / temp * m << endl;//��С��������������Լ���Ļ�����n*m/temp������n*m�п����������������n/temp�ٳ�m,��ΪtempΪn��m�����Լ������һ�����Ա�n��m����
//	system("pause");
//	return 0;
//}