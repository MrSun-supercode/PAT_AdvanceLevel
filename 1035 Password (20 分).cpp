///*
//˼·���ܼ򵥵�ˮ�⣬�ͱ���һ��password�ҵ���Ҫ�滻���ַ������滻���ɣ�Ȼ���滻�����V[i].checked��Ϊtrue
//������˳�����V[i].checkedΪtrue�ļ���
//�ӵ㣺һ��ע����û�з����ı������£�
//n=1ʱ��is��count ���Ե�1
//n����1ʱ��are ��counts ���Ե�2
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//struct node {
//	string name;
//	string password;
//	bool checked = false;
//};
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector<node>V(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V[i].name >> V[i].password;
//	}
//	int count = 0;
//	for (int i = 0; i < V.size(); i++)
//	{
//		for (int j = 0; j < V[i].password.size(); j++)
//		{
//			if (V[i].password[j] == '1')
//			{
//				V[i].password[j] = '@';
//				V[i].checked = true;
//			}
//			else if (V[i].password[j] == '0')
//			{
//				V[i].password[j] = '%';
//				V[i].checked = true;
//			}
//			else if (V[i].password[j] == 'l')
//			{
//				V[i].password[j] = 'L';
//				V[i].checked = true;
//			}
//			else if (V[i].password[j] == 'O')
//			{
//				V[i].password[j] = 'o';
//				V[i].checked = true;
//			}
//		}
//		if (V[i].checked)
//		{
//			count++;
//		}
//	}
//	if (count != 0)
//	{
//		cout << count << endl;
//		for (int i = 0; i < V.size(); i++)
//		{
//			if (V[i].checked)
//			{
//				cout << V[i].name << ' ' << V[i].password << endl;
//			}
//		}
//	}
//	else
//	{
//		if (n == 1)
//		{
//			cout << "There is 1 account and no account is modified" << endl;
//		}
//		else cout << "There are " << n << " accounts and no account is modified" << endl;
//	}
//
//	system("pause");
//	return 0;
//}