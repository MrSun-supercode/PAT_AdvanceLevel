///*
//���⣺�ȸ���Ԫ��֮�䲻���໥���ڵĶԣ�Ȼ�����m��׼���������Ʒ�ж���Щ��Ʒ�Ƿ����һ��Я����
//һ��ʼ��ʹ��map���������ͬһ����Ʒ�����в�ֹһ���Ļ�����Ʒ�����Ը���vector����̬�����以����Ʒ
//ע��׼���������ƷҪʹ��set������ʹ��vector����Ϊ���ʹ��vector�ٽ��в���ʱҪ����algorithm�е�find������ʱ�临�Ӷ�ΪO(n)
//��set�е�find����ʱ�临�Ӷ�ΪO(logn)����Ϊ����ʹ�ú�����Ľṹ��
//*/
//#include<iostream>
//#include<set>
//#include<vector>
//using namespace std;
//vector<int>v[99999];
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		int str1, str2;
//		cin >> str1 >> str2;
//		v[str1].push_back(str2);//��str1�б���str2
//		v[str2].push_back(str1);//��str2�б���str1
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int temp;
//		cin >> temp;
//		int item;
//		set<int>s;
//		bool flag = false;
//		for (int j = 0; j < temp; j++)
//		{
//			cin >> item;
//			s.insert(item);
//		}
//		for (auto it = s.begin(); it != s.end(); it++)
//		{
//			if (v[*it].size()!=0)//�����ǰs�е�Ԫ���л�����Ʒ
//			{
//				for (int i = 0; i < v[*it].size(); i++)//�����以����Ʒ����s���Ƿ����以����Ʒ
//				{
//					if (s.find(v[*it][i]) != s.end())//���У������No,��ֱ������ѭ��
//					{
//						cout << "No" << endl;
//						flag = true;
//						break;
//					}
//				}	
//				if (flag)
//				{
//					break;
//				}
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