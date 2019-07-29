//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//int graph[10001][10001] = { 0 };
//bool visited[10001] = { false };
//int n, maxheight = 0;
//vector<int> V;//存放最大树高的值对应的点
//set<int>s;
//void dfs(int root, int height);
//int main(void)
//{
//	cin >> n;
//	int cnt = 0,root;
//	for (int i = 0; i < n - 1; i++){
//		int a, b;
//		cin >> a >> b;
//		graph[a][b] = graph[b][a] = 1;//建图
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (visited[i] == false){
//			dfs(i, 1);//进行一次dfs，从第一个点开始，并且树的高度给1
//			if (i==1){//将多个连通分量的情况分开
//				if (V.size()!=0){
//					root = V[0];//把最深的点对应的的下标赋给root
//				}				
//				for (int j = 0; j < V.size(); j++){
//					s.insert(V[j]);//将V中的内容全部放到set里
//				}
//			}
//			cnt++;//如果cnt=1表示dfs只进行了一次即图只有一个连通分量，若cnt>1则表示不知一个连通分量
//		}
//	}
//	if (cnt > 1){//错误情况输出
//		cout << "Error: " << cnt << " components" << endl;
//		system("pause");
//		return 0;
//	}
//	else {
//		V.clear();//将V中数据清空，已经提前将V中数据放入set
//		maxheight = 0;//初始化maxheight，因为要再做一遍dfs，所以所有参数需要跟第一遍dfs之前一样
//		fill(visited, visited + 10001, false);//初始化visited
//		dfs(root, 1);//这一次dfs是从从第一个点出发的最大树高度对应的点出发
//		for (int j = 0; j < V.size(); j++){
//			s.insert(V[j]);//将所有值放入set中，set是集合自动剔除重复的字段，并且按从小到大的顺序排序
//		}
//		for (auto it =s.begin(); it != s.end(); it++){
//			cout << *it << endl;
//		}
//	}
//	/*
//	for (int i = 0; i < V.size(); i++)
//	{
//		cout << V[i] << endl;
//	}
//	之前实际上我的思路跟柳婼大神差不多，就是从dfs中间入手把它的height每经过一次迭代height+1，然后找到
//	最大的height对应的下标，但是我的想法是将所有图中的结点都走一遍，看从每个点出发的最深高度是多少
//	实际上上面的for循环一点作用都没有，因为你一个dfs（i,1）只是从i开始遍历一遍，最后求得的只是i的最大height
//	其他点并没有求，所以一遍dfs过后求出的最大height对应的点，再从这个点出发再dfs一遍，两遍的并集就是
//	最大height的下标。
//	*/
//	system("pause");
//	return 0;
//}
//void dfs(int root, int height)
//{	
//	if (height>maxheight){//如果当前树高比最大值要大，则更新最大值，并且将之前V中存储的所有最大值对应的点清空，重新存入最大值对应的点
//		maxheight = height;
//		V.clear();
//		V.push_back(root);
//	}
//	else if (height==maxheight){//如果相等，说明V中容器（如果有内容的话）里面的对应的点的height与当前点一样，则放入当前点
//		V.push_back(root);
//	}
//	visited[root] = true;
//	for (int i = 1; i <= n; i++){
//		if (visited[i] == false && graph[i][root] == 1){
//			dfs(i, height+1);//对i进行dfs，height要+1
//		}
//	}
//}