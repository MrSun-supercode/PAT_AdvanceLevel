///*
//˼·��ʹ��������ȱ���dfs������ϵͳջ��Ȼ��ע�;Ϳ��������
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxsize = 100;
//struct node {//�ṹ�嶨�壬weightΪȨֵ��childΪ���ӽڵ�
//	int weight;
//	vector<int>child;
//}tree[maxsize];
//int n, m, sum;
//int p[maxsize];//�Ӹ��ڵ㵽Ҷ�ӽڵ��·��������p[0]Ϊ���ڵ�
//bool cmp(int a, int b)//����һ��Ҫע�⣬�Ǹ���Ȩֵ����
//{
//	return tree[a].weight > tree[b].weight;
//}
//void dfs(int root, int path, int s);//dfs��ڣ�ע���������
//int main(void)
//{
//	cin >> n >> m >> sum;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> tree[i].weight;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int id, num;
//		cin >> id >> num;
//		for (int j = 0; j < num; j++)
//		{
//			int temp;
//			cin >> temp;
//			tree[id].child.push_back(temp);
//		}
//		sort(tree[id].child.begin(), tree[id].child.end(),cmp);//���������Ӵ�С���к�������ǴӴ�С��˳�򣬲����ٴӽ����������
//	}
//	p[0] = 0;//·������ʼ�ڵ�һ���Ǹ��ڵ�
//	dfs(0, 1, tree[0].weight);//��0��ʼ��·������һ���㣬Ȩֵ��Ϊs
//	system("pause");
//	return 0;
//}
//void dfs(int root, int path, int s)//
//{
//	if (s > sum)//���ˣ�ֱ�ӷ���
//	{
//		return;
//	}
//	else if (s == sum)//���ø�sum��ȣ��ж��Ƿ���Ҷ�ӽڵ�
//	{
//		if (tree[root].child.size() != 0)//����Ҷ�ӽڵ�
//		{
//			return;
//		}
//		else {//��Ҷ�ӽڵ㣬���
//			for (int i = 0; i < path; i++)
//			{
//				if (i == 0)
//				{
//					cout << tree[p[i]].weight;//ע�������ʽ�������������Ȩֵ
//				}
//				else cout << ' ' << tree[p[i]].weight;
//			}
//			cout << endl;
//		}
//	}
//	else {//��δ��sum������dfs
//		for (int i = 0; i < tree[root].child.size(); i++)
//		{
//			int child = tree[root].child[i];
//			p[path] = child;//path�м���child�ڵ�
//			dfs(child, path + 1, s + tree[child].weight);//pathҪ��һ
//		}
//	}
//}