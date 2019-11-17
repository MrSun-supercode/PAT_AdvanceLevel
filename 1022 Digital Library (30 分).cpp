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
//		sort(M[str].begin(), M[str].end());//需要排一下序，使其按从小到大的顺序输出
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
//	scanf("%d\n", &n);//输入时切忌记得带\n,不然输入会有问题
//	for (int i = 0; i < n; i++)
//	{
//		int id;
//		string title, author, keywords, publisher, year;
//		scanf("%d\n", &id);//id必须使用int，使用string最后一个测试点会超时
//
//		getline(cin, title);
//		Mtitle[title].push_back(id);
//
//		getline(cin, author);
//		Mauthor[author].push_back(id);
//
//		while (cin>>keywords)//循环输入keywords，因为keywords是在一行很多个，cin读到第一个空格
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