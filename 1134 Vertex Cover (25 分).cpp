///*
//˼·�����߱�����֣���һ����Ϊ0���ڶ�������1���Դ����ơ�
//
//*/
//#include<iostream>
//#include<set>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxsize = 10001;
//set<int>S;
//int main(void)
//{
//	int n, m, k;
//	cin >> n >> m;
//	vector<int>V[maxsize];
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		V[a].push_back(i);//a�Ķ��������ı�����i�����־����Ӧ�ı�
//		V[b].push_back(i);//b�Ķ��������ı�����i�����־����Ӧ�ı�
//	}
//	cin >> k;
//	//for (int i = 0; i < k; i++)
//	//{
//	//	int temp;
//	//	cin >> temp;
//	//	for (int j = 0; j < temp; j++)
//	//	{
//	//		int tmp;
//	//		cin >> tmp;
//	//		S.insert(tmp);
//	//	}
//	//	bool flag = false;
//	//	int cnt = 0;
//	//	for (auto it = S.begin(); it != S.end(); it++)
//	//	{
//	//		for (int p = 0; p < n; p++)
//	//		{
//	//			if (graph[*it][p] == 1)//���ж���p�����Ľڵ������Ƿ���
//	//			{
//	//				cnt++;
//	//			}
//	//		}
//	//	}
//	//	if (cnt >= m)
//	//	{
//	//		cout << "Yes" << endl;
//	//	}
//	//	else cout << "No" << endl;
//	//	S.clear();
//	//}
//	for (int i = 0; i < k; i++)
//	{
//		vector<int>temp(m, 0);//�½�m��С�ģ���ʼֵ��0��vector����
//		int t;
//		cin >> t;
//		for (int j = 0; j < t; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			for (int p = 0; p < V[tmp].size(); p++)//��tmpÿ�������ıߣ���Ӧ��temp��Ϊ1
//			{
//				temp[V[tmp][p]] = 1;
//			}
//		}
//		bool flag = false;
//		for (int j = 0; j < temp.size(); j++)
//		{
//			if (temp[j]==0)//���temp�д���0��˵�������߶�Ӧ����������û�б����ʹ�
//			{
//				cout << "No" << endl;
//				flag = true;
//				break;
//			}
//		}
//		if (!flag)
//		{
//			cout << "Yes" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}