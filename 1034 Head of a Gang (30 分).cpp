///*
//思路：图的遍历，但是需要将string类型的人名转换为int型，然后最后再将int型转换回string类型的人名，两个map即可
//参考https://blog.csdn.net/weixin_43869268/article/details/88363772算法笔记
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//using namespace std;
//map<int, string>name;
//map<string, int>title;
//map<string, int>result;
//const int maxn = 2010;//n最大为1000表示通话记录为1000，所以最大人数要2000
//int weight[maxn];//权值
//int graph[maxn][maxn];
//int numperson = 0;//总人数
//int change(string str);//string->int
//int n, k;
//bool visited[maxn];
//void dfs(int temp,int &head,int &num,int &totalweight);//dfs的参数分别是：当前结点，首领结点，帮派的人数，帮派的总权值
//int main(void)
//{
//	cin >> n >> k;
//	fill(visited, visited + maxn, false);//三行初始化
//	fill(weight, weight + maxn, 0);
//	fill(graph[0], graph[0] + maxn * maxn, 0);
//	for (int i = 0; i < n; i++)
//	{
//		string str1, str2;
//		int minute;
//		cin >> str1 >> str2 >> minute;
//		int id1 = change(str1);
//		int id2 = change(str2);
//		weight[id1] += minute;//这里是+=而不是=，因为对每个人来说，他的入度和出度都要算到他的weight中，最后根据这个weight得到帮派首领
//		weight[id2] += minute;
//		graph[id1][id2] += minute;
//	}
//	for (int i = 0; i < numperson; i++)
//	{
//		if (!visited[i])//如果i没被访问过，就进行dfs
//		{
//			int head = i, num = 0, totalweight = 0;//初始化
//			dfs(i, head, num, totalweight);
//			if (num > 2 && totalweight > k)//如果满足条件的话，将结果放入result中
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
//	if (title.find(str) != title.end())//如果str在title已经有了，那么直接返回这个值即可
//	{
//		return title[str];
//	}
//	else {//如果没有的话
//		title[str] = numperson;//新建项目，时str对应numperson
//		name[numperson] = str;//新建name中的numperson也要对应str
//		return numperson++;//别忘了自增
//	}
//}
//void dfs(int temp, int &head, int &num, int &totalweight)
//{
//	num++;//每访问一次，帮派成员加一
//	visited[temp] = true;
//	if (weight[temp]>weight[head])//如果发现weight更重的，则更新帮派首领
//	{
//		head = temp;
//	}
//	for (int i = 0; i < numperson; i++)//继续遍历，参考dfs
//	{
//		if (graph[temp][i]!=0)//如果temp跟i有联系
//		{
//			totalweight += graph[temp][i];//帮派的totalweight就是所有边的权值相加，所以+=
//			if (!visited[i])//如果没被访问过，继续对它进行dfs
//			{
//				dfs(i, head, num, totalweight);
//			}
//		}
//	}
//}