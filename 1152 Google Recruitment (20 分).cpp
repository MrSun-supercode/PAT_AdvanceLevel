//#include<iostream>
//#include<string>
//#include<vector>
//#include<cmath>
//using namespace std;
//string str;
//bool isPrime(string str)//�ж�str�Ƿ�Ϊ����
//{
//	int p = stoi(str.c_str());
//	for (int i = 2; i <= sqrt(p); i++)
//	{
//		if (p%i==0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main(void)
//{
//	int n, k;
//	cin >> n >> k>>str;
//	bool flag = false;
//	for (int i = 0; i <= n - k; i++)//Ҫȡ�Ⱥţ���Ȼ���kλȡ����
//	{
//		string temp = "";
//		for (int j = 0; j < k; j++)
//		{
//			temp += str[i + j];//tempΪ��str[i]��ʼ��kλ����
//		}
//		if (isPrime(temp))
//		{
//			cout << temp << endl;
//			flag = true;
//			break;
//		}
//	}
//	if (!flag)
//	{
//		cout << "404" << endl;
//	}
//	system("pause");
//	return 0;
//}