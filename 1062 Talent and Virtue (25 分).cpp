///*
//˼·��һ��Ҫ�ȶ�׼��Ŀ��Ȼ���ÿ����������
//����һ���ṹ�屣��ÿ���˵ķ����Լ�����һ���ܷ���total�Ա�֮������
//������Ҳ�ǰ�����ĿҪ���ȸ����ܷ������ܷ�һ���������·���������һ������ʱ�츳��ҲӦ��һ��������ѧ�����������
//�Կռ任ʱ���˼�룬���һ���������������Ѷ���Щ�󣬵�����Ŀ˵������������sage>nobleman>fool>else
//���Էֱ����ĸ�vector�洢�ĸ���Χ�ڵ��ˣ�Ȼ���ĸ�vector�������
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	long int id;//
//	int vir;//
//	int tal;//
//	int total;
//};
//bool cmp(node a, node b)
//{
//	if (a.total != b.total)
//	{
//		return a.total > b.total;
//	}
//	else if (a.vir != b.vir)
//	{
//		return a.vir > b.vir;
//	}
//	else  return a.id < b.id;
//}
//int main(void)
//{
//	int n, l, h;
//	cin >> n >> l >> h;
//	vector<node>V;
//	vector<node>sage;
//	vector<node>noble;
//	vector<node>fool;
//	vector<node>else_fool;
//	V.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V[i].id >> V[i].vir >> V[i].tal;
//		V[i].total = V[i].vir + V[i].tal;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (V[i].vir >= l && V[i].tal >= l)
//		{
//			if (V[i].vir >= h && V[i].tal >= h)
//			{
//				sage.push_back(V[i]);
//			}
//			else if (V[i].vir >= h && V[i].tal < h)
//			{
//				noble.push_back(V[i]);
//			}
//			else if (V[i].tal < h&&V[i].vir < h&&V[i].vir >= V[i].tal)
//			{
//				fool.push_back(V[i]);
//			}
//			else else_fool.push_back(V[i]);
//		}
//	}
//	sort(sage.begin(), sage.end(), cmp);
//	sort(noble.begin(), noble.end(), cmp);
//	sort(fool.begin(), fool.end(), cmp);
//	sort(else_fool.begin(), else_fool.end(), cmp);
//	//������insert���ĸ�vector�ϳ�һ���������û��Ҫ������ʹ��ʱ���������������Ϊû�û��������ݴ洢��int�ȣ�
//	/*vector<node>v;
//	v.insert(V.end, sage.begin(), sage.end());
//	v.insert(V.end, noble.begin(), noble.end());
//	v.insert(V.end, fool.begin(), fool.end());
//	v.insert(V.end, else_fool.begin(), else_fool.end());*/
//	cout << sage.size() + noble.size() + fool.size() + else_fool.size()<<endl;
//	for (int i = 0; i < sage.size(); i++)
//	{
//		cout << sage[i].id << ' ' << sage[i].vir << ' ' << sage[i].tal << endl;
//	}
//	for (int i = 0; i < noble.size(); i++)
//	{
//		cout << noble[i].id << ' ' << noble[i].vir << ' ' << noble[i].tal << endl;
//	}
//	for (int i = 0; i < fool.size(); i++)
//	{
//		cout << fool[i].id << ' ' << fool[i].vir << ' ' << fool[i].tal << endl;
//	}
//	for (int i = 0; i < else_fool.size(); i++)
//	{
//		cout << else_fool[i].id << ' ' << else_fool[i].vir << ' ' << else_fool[i].tal << endl;
//	}
//	system("pause");
//	return 0;
//}