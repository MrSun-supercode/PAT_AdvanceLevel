///*
//���ǵϽ�˹�����㷨����չ�棬��Ҫ������cost�����Զ��½�һ��cost���飬��cost[i]Ϊ��i��cost
//*/
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<set>
//#include<cmath>
//using namespace std;
//const int maxm = 0x3f3f3f3f;//������ʾ������
//const int maxn = 505;//������ʾ��󶥵���
//vector<int>pi;//�����飬���������飬pi[i]=j��ʾi��ǰһ�����Ϊj����������ʾ����·��
//vector<int>dis;//�������飬�洢����
//vector<int>costm;//cost���飬�洢cost
//set<int>S;//��������������ж��㣬����whileѭ�����˳���ʾ����S�ڵ�Ԫ��ǡ��Ϊ���ж�����
//vector<int>result;//���vector�����������������·���ĵ�����Ϊ�ǴӦ������ŵ���ǰ���ڵ㣬������Ҫ���յ�ڵ���ǰ����һֱ����㣩
//int graph[maxn][maxn];//ͼ�ṹ��ʹ���ڽӾ���
//int costn[maxn][maxn];//costͼ���������cost[a][b]��a��b��cost
//int findsmall(vector<int>dis, set<int>S);//��dis���ҵ�dis[i]��С�Ľڵ㣬���Ҳ�����S�г���
//int n, m, s, d;
//int main(void)
//{
//	scanf("%d %d %d %d", &n, &m, &s, &d);
//	pi.resize(n, -1);//pi��ʼΪ-1��Ϊ-1�����κ�һ�����ǰ��
//	dis.resize(n, maxm);//һ��ʼ�����ж���ľ��붼������
//	costm.resize(n, maxm);//����costҲ��������
//	fill(graph[0], graph[0] + maxn * maxn, 0);
//	dis[s] = 0;//s���Լ��ľ���Ϊ0
//	S.insert(s);
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, distence, cost;
//		scanf("%d %d %d %d", &a, &b, &distence, &cost);
//		graph[a][b] = distence;
//		graph[b][a] = distence;
//		costn[a][b] = cost;
//		costn[b][a] = cost;
//	}
//	for (int i = 0; i < n; i++)//��ʼ��������s�����Ķ����dis��pi��costm����
//	{
//		if (i == s)
//		{
//			continue;
//		}
//		if (graph[i][s] != 0)
//		{
//			dis[i] = graph[i][s];
//			pi[i] = s;
//			costm[i] = costn[i][s];
//		}
//	}
//	while (S.size() != n)
//	{
//		int temp = findsmall(dis, S);//�ҵ�dis����С�Ķ��㣬������һ�����Ͻ�˹�����㷨��
//		for (int i = 0; i < n; i++)
//		{
//			if (graph[i][temp] != 0 && temp != i && S.find(i) == S.end())//��graph���Ҹ�temp�������Ҳ���S�����еĶ���
//			{
//				if (dis[i] > dis[temp] + graph[i][temp])//����relax�������㷨���ۣ�
//				{
//					dis[i] = dis[temp] + graph[i][temp];
//					pi[i] = temp;
//					costm[i] = costm[temp] + costn[i][temp];//ע�⣬���dis[i] > dis[temp] + graph[i][temp]����ʱ����Ҫ�Ƚ�costm[i],ֱ�ӽ��и��£���Ϊ������ˣ���������ȼ�����cost
//				}
//				else if (dis[i] == dis[temp] + graph[i][temp])//���������ͬ��
//				{
//					if (costm[i] > costm[temp] + costn[i][temp])//����cost��ͬʱ���¦����飨��ΪҪ�ھ�����ͬ����������cost��С�ģ���������·��·��ҲҪ���£�
//					{
//						costm[i] = costm[temp] + costn[i][temp];
//						pi[i] = temp;
//					}
//				}
//			}
//		}
//		S.insert(temp);
//	}
//	int tmp = d;
//	result.push_back(tmp);//�Ƚ��յ�Ž�ȥ
//	while (pi[tmp] != s)//ѭ��������һֱ�ߵ���㣬������·��������result
//	{
//		result.push_back(pi[tmp]);
//		tmp = pi[tmp];
//	}
//	result.push_back(s);//������s����Ϊǰ�ߵ�whileѭ������s
//	/*reverse(result.begin(), result.end());*/
//	/*for (int i = 0; i < result.size(); i++)
//	{
//		printf("%d ", result[i]);
//	}*/
//	for (auto it = result.rbegin(); it != result.rend(); it++)//�������
//	{
//		printf("%d ", *it);
//	}
//	printf("%d %d\n", dis[d], costm[d]);
//	system("pause");
//	return 0;
//}
//int findsmall(vector<int>dis, set<int>S)
//{
//	int cnt = 0, i;
//	int maxx = maxm;
//	for (i = 0; i < dis.size(); i++)
//	{
//		if (i == s)
//		{
//			continue;
//		}
//		if (S.find(i) != S.end())//i��������S�г���
//		{
//			continue;
//		}
//		if (dis[i] < maxx)
//		{
//			maxx = dis[i];
//			cnt = i;
//		}
//	}
//	return cnt;
//}