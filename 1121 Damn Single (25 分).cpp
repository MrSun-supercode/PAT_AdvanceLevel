/////*
////����������Ե㳬ʱ������������scanf����cin��printf����cout���Եģ�����������㷨�������û�ԣ�ʵ����������
////׼����map������һ��
////*/
////#include<iostream>
////#include<algorithm>
////#include<vector>
////using namespace std;
////vector<pair<int, int>>V;
////vector<int>temp;
////int isExist(int tmp);
////bool isHave(vector<int>temp, int tmp);
////int main(void)
////{
////	int n,m;
////	cin >> n;
////	V.resize(n);
////	for (int i = 0; i < n; i++)
////	{
////		cin>>V[i].first >> V[i].second;
////	}
////	cin >> m;
////	temp.resize(m);
////	for (int i = 0; i < m; i++)
////	{
////		cin >> temp[i];
////	}
////	vector<int>last;
////	for (int i = 0; i < temp.size(); i++)
////	{
////		int t = isExist(temp[i]);
////		if (t!=-1)//��һ����V���Ƿ���ֹ��������ֹ�
////		{
////			if (isHave(temp,t))//��������һ�����Ƿ���ֹ��������ֹ���ʲôҲ��������һ��
////			{
////
////			}
////			else {//��û���ֹ���ֱ�Ӽ�������vector��
////				last.push_back(temp[i]);
////			}
////		}
////		else {//��û���ֹ���ֱ�Ӽ�������vector��
////			last.push_back(temp[i]);
////		}
////	}
////	sort(last.begin(), last.end());
////	cout << last.size() << endl;
////	for (int i = 0; i < last.size(); i++)
////	{
////		if (i==0)
////		{
////			printf("%05d", last[i]);
////		}
////		else printf(" %05d", last[i]);
////	}
////	system("pause");
////	return 0;
////}
////int isExist(int tmp)
////{
////	for (int i = 0; i < V.size(); i++)
////	{
////		if (V[i].first==tmp)
////		{
////			return V[i].second;
////		}
////		else if (V[i].second==tmp)
////		{
////			return V[i].first;
////		}
////	}
////	return -1;
////}
////bool isHave(vector<int>temp, int tmp)
////{
////	for (int i = 0; i < temp.size(); i++)
////	{
////		if (temp[i]==tmp)
////		{
////			return true;
////		}
////	}
////	return false;
////}
//#include<iostream>
//#include<algorithm>
//#include<set>
//#include<vector>
//using namespace std;
//const int maxsize = 100000;
//int P[maxsize];//������ģ��map����Ϊmap���ݽṹ����û��ֵ���ڵĻ�Ĭ����0����������Ҫ�����������������0������������ģ��mapȻ�����ȫ����ʼ��-1
//vector<int>temp;
//set<int>s;//�����s���棬��ֹ��ͬ��Ԫ�س���ʹ������ִ���
//bool isHave(vector<int>temp, int tmp);
//int main(void)
//{
//	int n, m;
//	cin >> n;
//	fill(P, P + maxsize, -1);
//	for (int i = 0; i < n; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		P[a] = b;
//		P[b] = a;
//	}
//	cin >> m;
//	temp.resize(m);
//	for (int i = 0; i < m; i++)
//	{
//		cin >> temp[i];
//	}
//	for (int i = 0; i < temp.size(); i++)
//	{
//		int t = P[temp[i]];
//		if (t != -1)//��һ����V���Ƿ���ֹ��������ֹ���ע�����ﲻ����t!=0����Ϊ�п������������0,��Ӧ���Ե�1�Ĵ𰸴���
//		{
//			if (isHave(temp, t))//��������һ�����Ƿ���ֹ��������ֹ���ʲôҲ��������һ��
//			{
//
//			}
//			else {//��û���ֹ���ֱ�Ӽ�������vector��
//				s.insert(temp[i]);
//			}
//		}
//		else {//��û���ֹ���ֱ�Ӽ�������vector��
//			s.insert(temp[i]);
//		}
//	}
//	cout << s.size() << endl;
//	for (auto it = s.begin(); it != s.end(); it++)
//	{
//		if (it==s.begin())
//		{
//			printf("%05d", *it);
//		}
//		else printf(" %05d", *it);
//	}
//	system("pause");
//	return 0;
//}
//bool isHave(vector<int>temp, int tmp)
//{
//	for (int i = 0; i < temp.size(); i++)
//	{
//		if (temp[i]==tmp)
//		{
//			return true;
//		}
//	}
//	return false;
//}