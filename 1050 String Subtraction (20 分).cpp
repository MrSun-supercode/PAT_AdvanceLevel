///*
//��Ŀ��˵�������ַ����ᳬ��ascii���ֵ��256֮�ڣ����Խ���һ��256�����飬������ַ���deleter����
//�򽫶�Ӧ��flag��ֵ��Ϊ1����ʼ����0��
//Ȼ�����strʱ�����ǰ�ַ���flag�е�ֵ��0��˵����deleter��û�г��ֹ����������������Ͳ����
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//int main(void)
//{
//	string str, deleter;
//	getline(cin, str);
//	getline(cin, deleter);
//	int flag[256] = { 0 };
//	for (int i = 0; i < deleter.size(); i++)
//	{
//		flag[deleter[i]] = 1;
//	}
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (!flag[str[i]])
//		{
//			cout << str[i];
//		}
//	}
//	system("pause");
//	return 0;
//}