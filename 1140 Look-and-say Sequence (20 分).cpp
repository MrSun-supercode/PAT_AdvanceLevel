///*
//һ��ʼ�������±��ˣ���������⿴����ʲô��˼�����Ǻ��������ǰ������������ǰ����12���������1121��һ��1��һ��2������ǰ�����ں�
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//void change(string &str);
//int main(void)
//{
//	string str;
//	int n;
//	cin >> str >> n;
//	for (int i = 0; i < n-1; i++)//����n-1�Σ���Ϊ������ʼ
//	{
//		change(str);
//	}
//	cout << str << endl;
//	system("pause");
//	return 0;
//}
//void change(string &str)
//{
//	int length = str.length();
//	int i = 0;
//	string temp = "";
//	int cnt = 1;//cnt���ظ������ĸ���
//	while (i<length)
//	{
//		char c = str[i];
//		while (str[i+cnt]==c)//������������Ȼ��c����cnt++
//		{
//			cnt++;
//		}
//		temp += c + to_string(cnt);//temp�������Լ����ĸ���
//		i += cnt;//i����cnt����λ֮��
//		cnt = 1;//������cnt��ʼ��Ϊ1��ÿ�ζ���Ҫ��ʼ��
//	}
//	str = temp;//��temp����str
//}