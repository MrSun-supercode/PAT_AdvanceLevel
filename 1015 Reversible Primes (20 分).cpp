////˼·���������Ǻܼ򵥵��ж�һ�����Ƿ�Ϊ������������radix�����µ����Ļ������ٷ���10�����Ժ��Ƿ�Ϊ����
////һ��ʼ�Լ�д����������һ�����ڽ���Ӧn��radix���Ƶ���ת��Ϊ10���ƣ��ٽ�10���Ƶ���������ģ��ж��µ������ɵ����Ƿ�Ϊ������
////����֮���һ�����Ե��ܹ���Ȼ����˶����S���еķ����˴������ȵ���������ٻ��ģ��ٵ�ʮ���ƣ��ҷ�������Ϊ���Ĵ���
//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//int change(int n, int radix)//��Ӧn��radix����ת��Ϊ10���ƣ�ʵ���ϲ�û�õ�
//{
//	if (radix == 10)
//	{
//		return n;
//	}
//	else {
//		string temp = to_string(n);
//		int sum = 0, index = 0;
//		for (auto it = temp.rbegin(); it < temp.rend(); it++)//itΪָ�����ͱ���
//		{
//			int its = *it - '0';
//			sum += its * pow(radix, index++);
//		}
//		return sum;
//	}
//}
//int reverse(int n)//����һ���������ؽ����ʵ���ϲ�û�õ�
//{
//	string n_str = to_string(n);
//	string temp = "";
//	for (auto it = n_str.rbegin(); it < n_str.rend(); it++)
//	{
//		temp += *it;
//	}
//	return atoi(temp.c_str());
//}
//bool is_prime(int n)//�ж�һ�����Ƿ���������ע��С�ڵ���1����Ҳ��������
//{
//	int i;
//	if (n <= 1)
//	{
//		return false;
//	}
//	for (i = 2; i*i <= n; i++)
//	{
//		if (n%i == 0 && n > i)//������n>i������n=2ʱ�������false
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main(void)
//{
//	int n;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		if (n < 0)
//		{
//			break;
//		}
//		else {			
//			int radix, index = 0;
//			cin >> radix;
//			if (!is_prime(n))//�������������������ֱ�����������жϣ����No
//			{
//				cout << "No" << endl;
//				continue;
//			}
//			/*int temp = change(n, radix);
//			int temp_rev = reverse(temp);*/
//			int arr[1001];
//			while (n != 0)//��nת��Ϊradix���Ƶ������浽arr�������Ҫע����ǣ��������ת���Ļ�,
//			{//ʵ����arr�����һλ�����λ����һλ�����λ���ο���2����10����ת��Ϊ2�����������Ҫ��ת��
//				arr[index++] = n % radix;//�������������Ҫ��������൱���ַ�ת��һ�飬����ֱ�������漴�ǽ��
//				n /= radix;
//			}
//			int sum = 0;
//			int j = 0;
//			for (int i = index - 1; i >= 0; i--)
//			{
//				sum += arr[i] * pow(radix, j++);
//			}//����ת��Ϊ10����
//			if (is_prime(sum))//�ж��Ƿ�Ϊ����
//			{
//				cout << "Yes" << endl;
//			}
//			else cout << "No" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}