////˼·��������ĳ��нڵ㱻�ƻ�֮����Ҫ��������ͨ·���ܽ����еĳ�������������
////�൱���ҳ�ͼ�����е�����飬Ȼ�����������Ӧ����ͨ������Ȼ�������������ͨ·������ͨ����-1��
//#include<iostream>
//#include<algorithm>//fill����
//using namespace std;
//int v[1001][1001];//�ڽӾ���
//bool visited[1001];//ȷ��һ���ڵ��Ƿ񱻷��ʹ�
//int n;
//void dfs(int sd)//dfsʵ��
//{
//	visited[sd] = true;//����ǰ�Ľڵ��Ӧ��visited��Ϊtrue
//	for (int i = 1; i <= n; i++)//����Ŀ���Կ����ڵ��Ǵ�1-N��
//	{
//		if (visited[i] == false && v[sd][i] == 1)//�����ǰ�ڵ���i�ڵ�����ͨ��������i�ڵ�û�б����ʹ������i����dfs
//		{
//			dfs(i);
//		}
//	}
//}
//int main(void)
//{
//	int m, k;
//	cin >> n >> m >> k;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		v[a][b] = v[b][a] = 1;
//	}
//	int cnt;
//	for (int i = 0; i < k; i++)
//	{
//		cnt = 0;
//		fill(visited, visited + 1001, false);//ÿ����һ�����붼Ҫ��visited��false
//		int temp;
//		cin >> temp;
//		visited[temp] = true;//temp�ڵ㱻����ռ���ˣ�ֱ�ӽ�temp�ڵ��Ӧ��visited��Ϊtrue��֮������temp�ڵ��Լ���temp�ڵ������Ľڵ�
//		for (int j = 1; j <= n; j++)
//		{
//			if (!visited[j])//���j�ڵ�δ�����ʹ�����j�ڵ����dfs����
//			{
//				dfs(j);//��Ҫע����ǣ�������е�dfs(j)�����j�Լ����д�1-N�Ľڵ�����j�����Ľڵ㶼����dfs������������һ�������ͼ��һ�������
//				cnt++;
//			}
//		}
//		cout << cnt - 1 << endl;//������ͼ�������-1����Ŀ��������ͨ��������Ŀ��
//	}
//	system("pause");
//	return 0;
//}