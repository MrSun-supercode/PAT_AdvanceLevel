///*
//˼·��ֻҪ��ÿ�����ڵ��ʾΪ�ṹ��node��Ȼ�������������ɣ����ֻ���ҵ��ڵ����Ĳ���Ȼ��������Ľڵ㼴��
//*/
//#include<iostream>
//#include<vector>
//using namespace std;
//struct node {//����ڵ�ṹ��
//	int id;
//	vector<node>child;
//	int depth;
//};
//void setDepth(vector<node>&V, int index, int depth)//index�ǵ�ǰ�ڵ��ID��depth�ǵ�ǰ�ڵ�Ĳ���
//{
//	V[index].depth = depth;
//	if (V[index].child.size() != 0)
//	{
//		for (int i = 0; i < V[index].child.size(); i++)
//		{
//			setDepth(V, V[index].child[i].id, depth + 1);//�ݹ�ؽ���ǰ�ڵ�������ӽڵ�Ĳ�����ֵΪdepth+1
//		}
//	}
//}
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//	vector<node>V(n + 1);
//	for (int i = 0; i < m; i++)
//	{
//		int id, num;
//		cin >> id >> num;
//		for (int j = 0; j < num; j++)
//		{
//			node temp;
//			int tmp;
//			cin >> tmp;
//			temp.id = tmp;
//			V[id].child.push_back(temp);
//		}
//	}
//	int depth = 1;
//	setDepth(V, 1, depth);//�ݹ���ڣ���IDΪ1�Ľڵ��depth��ֵΪ1��Ȼ����еݹ�
//	int cnt = 0;
//	vector<int>D(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		D[V[i].depth]++;//D i-th���ǲ���Ϊi�Ľڵ�ĸ���
//	}
//	int max = 0, index;
//	for (int i = 1; i <= n; i++)
//	{
//		if (D[i] > max)
//		{
//			max = D[i];//�ҵ����Ľڵ����������������
//			index = i;
//		}
//	}
//	cout << max << ' ' << index << endl;
//	system("pause");
//	return 0;
//}