///*
//�ܼ򵥵�һ���⣬�����⼴��
//V1����str1������Ľ����i-thλ�ñ��������Ļ����1���������0
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	vector<int>V1;
//	vector<int>V2;
//	string str1, str2;
//	getline(cin, str1);
//	getline(cin, str2);
//	V1.resize(str1.size());
//	V2.resize(str2.size());
//	for (int i = 0; i < str2.size(); i++)
//	{
//		for (int j = 0; j < str1.size(); j++)
//		{
//			if (str2[i] == str1[j] && V2[i] != 1 && V1[j] != 1)//V1,V2��j-th,i-thλ��û�б��������ſ�����
//			{
//				V1[j] = 1;
//				V2[i] = 1;
//				break;
//			}
//		}
//	}
//	int cnt = 0;
//	for (int i = 0; i < str2.size(); i++)
//	{
//		if (V2[i] == 1)
//		{
//			cnt++;
//		}
//	}
//	if (cnt == str2.size())
//	{
//		cout << "Yes ";
//		cout << str1.size() - cnt;
//	}
//	else {
//		cout << "No ";
//		cout << str2.size() - cnt;
//	}
//	system("pause");
//	return 0;
//}