//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//map<string, vector<int>>Mtitle, Mauthor, Mkeywords, Mpub, Myear;
//void find(map <string, vector<int> >M, string str)
//{
//	if (M[str].size()==0)
//	{
//		cout << "Not Found" << endl;
//		return;
//	}
//	else {
//		sort(M[str].begin(), M[str].end());//��Ҫ��һ����ʹ�䰴��С�����˳�����
//		for (int i = 0; i < M[str].size(); i++)
//		{
//			printf("%07d\n", M[str][i]);
//		}
//		/*for (auto it = M[str].begin(); it != M[str].end(); it++)
//		{
//			printf("%07d\n", *it);
//		}*/
//	}
//}
//int main(void)
//{
//	int n, m;
//	scanf("%d\n", &n);//����ʱ�мɼǵô�\n,��Ȼ�����������
//	for (int i = 0; i < n; i++)
//	{
//		int id;
//		string title, author, keywords, publisher, year;
//		scanf("%d\n", &id);//id����ʹ��int��ʹ��string���һ�����Ե�ᳬʱ
//
//		getline(cin, title);
//		Mtitle[title].push_back(id);
//
//		getline(cin, author);
//		Mauthor[author].push_back(id);
//
//		while (cin>>keywords)//ѭ������keywords����Ϊkeywords����һ�кܶ����cin������һ���ո�
//		{
//			Mkeywords[keywords].push_back(id);
//			if (getchar()=='\n')
//			{
//				break;
//			}
//		}		
//
//		getline(cin, publisher);
//		Mpub[publisher].push_back(id);
//
//		getline(cin, year);
//		Myear[year].push_back(id);
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int num;
//		string str;
//		scanf_s("%d: ", &num);
//		getline(cin, str);
//		cout << num << ": " << str << endl;
//		if (num == 1)
//		{			
//			find(Mtitle, str);
//		}
//		else if (num == 2)
//		{
//			find(Mauthor, str);
//		}
//		else if (num == 3)
//		{
//			find(Mkeywords, str);
//		}
//		else if (num == 4)
//		{
//			find(Mpub, str);
//		}
//		else {
//			find(Myear, str);
//		}
//	}
//	system("pause");
//	return 0;
//}