///*
//һ��ʼһͷ��ˮ������������Ȼ�����������������ˣ�һ����Ҫ�ļ����������Ѹ������������
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//int find_point(string str)//��.�ĺ���������.��str�е�λ��
//{
//	int i = 0;
//	while (i < str.size())
//	{
//		if (str[i] != '.')
//		{
//			i++;
//		}
//		else break;
//	}
//	return i;
//}
//int main(void)
//{
//	string str;
//	cin >> str;
//	if (str[0] == '-')//����Ǹ���ֱ�����
//	{
//		cout << '-';
//	}
//	string num = "";
//	int index;
//	for (int i = 1; i < str.size(); i++)
//	{
//		if (str[i] != 'E')
//		{
//			num += str[i];//num����E֮ǰ���޷��ŵ��ַ���������+1.23400E-03����1.23400��-1.2E+10����1.2
//		}
//		else
//		{
//			index = i;//index��E��λ��
//			break;
//		}
//	}
//	index++;//E֮���λ��һ����һ������
//	bool flag;
//	if (str[index] == '+')
//	{
//		flag = true;
//	}
//	else flag = false;//�������Ϊ������flagΪtrue����֮Ϊfalse
//	string fen = "";
//	for (int i = index + 1; i < str.size(); i++)
//	{
//		fen += str[i];//�ַ���fen��ʾ�����λ������E�����ţ�֮����ַ���������+1.23400E-03����03��-1.2E+10����10
//	}
//	int n = atoi(fen.c_str());//��fenת��Ϊint ��
//	if (flag)//E��������������С���������
//	{
//		int temp = find_point(num);//�ҵ�С���㲢�Ȱ�С����֮ǰ�������
//		for (int i = 0; i < temp; i++)
//		{
//			cout << num[i];
//		}
//		if (num.size() - 1 - temp > n)//����ע�⣺���num.size()-1����num�ַ������һ���ַ����±꣨��0��ʼ������Ҫ-1��
//		{//���temp����С����֮���λ����+1.23400E-03����5λ��23400����������n����˵����Ҫ����num��ĩβ��
//			for (int i = temp + 1; i < temp + 1 + n; i++)
//			{
//				cout << num[i];
//			}
//			cout << '.';
//			for (int i = temp + 1 + n; i < num.size(); i++)
//			{
//				cout << num[i];
//			}
//		}
//		else {//������nС��˵������Ҫ����num��λ��
//			for (int i = temp + 1; i < num.size(); i++)
//			{
//				cout << num[i];
//				n--;
//			}
//			for (int i = 0; i < n; i++)
//			{
//				cout << '0';
//			}
//		}
//	}
//	else {//E�����Ǹ�������С����������
//		int temp = find_point(num);
//		for (int i = 0; i < n; i++)//�ȴ�.���0�ĸ���
//		{
//			if (i == 1)
//			{
//				cout << '.';
//			}
//			cout << '0';
//		}
//		cout << num[0];
//		for (int i = temp + 1; i < num.size(); i++)
//		{
//			cout << num[i];
//		}
//	}
//	system("pause");
//	return 0;
//}