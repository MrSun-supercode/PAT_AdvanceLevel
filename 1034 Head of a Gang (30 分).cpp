///*
//˼·��ͼ�ı�����������Ҫ��string���͵�����ת��Ϊint�ͣ�Ȼ������ٽ�int��ת����string���͵�����������map����
//�ο�https://blog.csdn.net/weixin_43869268/article/details/88363772�㷨�ʼ�
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//using namespace std;
//map<int, string>name;
//map<string, int>title;
//map<string, int>result;
//const int maxn = 2010;//n���Ϊ1000��ʾͨ����¼Ϊ1000�������������Ҫ2000
//int weight[maxn];//Ȩֵ
//int graph[maxn][maxn];
//int numperson = 0;//������
//int change(string str);//string->int
//int n, k;
//bool visited[maxn];
//void dfs(int temp,int &head,int &num,int &totalweight);//dfs�Ĳ����ֱ��ǣ���ǰ��㣬�����㣬���ɵ����������ɵ���Ȩֵ
//int main(void)
//{
//	cin >> n >> k;
//	fill(visited, visited + maxn, false);//���г�ʼ��
//	fill(weight, weight + maxn, 0);
//	fill(graph[0], graph[0] + maxn * maxn, 0);
//	for (int i = 0; i < n; i++)
//	{
//		string str1, str2;
//		int minute;
//		cin >> str1 >> str2 >> minute;
//		int id1 = change(str1);
//		int id2 = change(str2);
//		weight[id1] += minute;//������+=������=����Ϊ��ÿ������˵��������Ⱥͳ��ȶ�Ҫ�㵽����weight�У����������weight�õ���������
//		weight[id2] += minute;
//		graph[id1][id2] += minute;
//	}
//	for (int i = 0; i < numperson; i++)
//	{
//		if (!visited[i])//���iû�����ʹ����ͽ���dfs
//		{
//			int head = i, num = 0, totalweight = 0;//��ʼ��
//			dfs(i, head, num, totalweight);
//			if (num > 2 && totalweight > k)//������������Ļ������������result��
//			{
//				result[name[head]] = num;
//			}
//		}
//	}
//	cout << result.size() << endl;
//	for (auto it = result.begin(); it != result.end(); it++)
//	{
//		cout << it->first << ' ' << it->second << endl;
//	}
//	system("pause");
//	return 0;
//}
//int change(string str)
//{
//	if (title.find(str) != title.end())//���str��title�Ѿ����ˣ���ôֱ�ӷ������ֵ����
//	{
//		return title[str];
//	}
//	else {//���û�еĻ�
//		title[str] = numperson;//�½���Ŀ��ʱstr��Ӧnumperson
//		name[numperson] = str;//�½�name�е�numpersonҲҪ��Ӧstr
//		return numperson++;//����������
//	}
//}
//void dfs(int temp, int &head, int &num, int &totalweight)
//{
//	num++;//ÿ����һ�Σ����ɳ�Ա��һ
//	visited[temp] = true;
//	if (weight[temp]>weight[head])//�������weight���صģ�����°�������
//	{
//		head = temp;
//	}
//	for (int i = 0; i < numperson; i++)//�����������ο�dfs
//	{
//		if (graph[temp][i]!=0)//���temp��i����ϵ
//		{
//			totalweight += graph[temp][i];//���ɵ�totalweight�������бߵ�Ȩֵ��ӣ�����+=
//			if (!visited[i])//���û�����ʹ���������������dfs
//			{
//				dfs(i, head, num, totalweight);
//			}
//		}
//	}
//}