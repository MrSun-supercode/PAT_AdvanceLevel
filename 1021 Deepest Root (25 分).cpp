//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//int graph[10001][10001] = { 0 };
//bool visited[10001] = { false };
//int n, maxheight = 0;
//vector<int> V;//���������ߵ�ֵ��Ӧ�ĵ�
//set<int>s;
//void dfs(int root, int height);
//int main(void)
//{
//	cin >> n;
//	int cnt = 0,root;
//	for (int i = 0; i < n - 1; i++){
//		int a, b;
//		cin >> a >> b;
//		graph[a][b] = graph[b][a] = 1;//��ͼ
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (visited[i] == false){
//			dfs(i, 1);//����һ��dfs���ӵ�һ���㿪ʼ���������ĸ߶ȸ�1
//			if (i==1){//�������ͨ����������ֿ�
//				if (V.size()!=0){
//					root = V[0];//������ĵ��Ӧ�ĵ��±긳��root
//				}				
//				for (int j = 0; j < V.size(); j++){
//					s.insert(V[j]);//��V�е�����ȫ���ŵ�set��
//				}
//			}
//			cnt++;//���cnt=1��ʾdfsֻ������һ�μ�ͼֻ��һ����ͨ��������cnt>1���ʾ��֪һ����ͨ����
//		}
//	}
//	if (cnt > 1){//����������
//		cout << "Error: " << cnt << " components" << endl;
//		system("pause");
//		return 0;
//	}
//	else {
//		V.clear();//��V��������գ��Ѿ���ǰ��V�����ݷ���set
//		maxheight = 0;//��ʼ��maxheight����ΪҪ����һ��dfs���������в�����Ҫ����һ��dfs֮ǰһ��
//		fill(visited, visited + 10001, false);//��ʼ��visited
//		dfs(root, 1);//��һ��dfs�ǴӴӵ�һ���������������߶ȶ�Ӧ�ĵ����
//		for (int j = 0; j < V.size(); j++){
//			s.insert(V[j]);//������ֵ����set�У�set�Ǽ����Զ��޳��ظ����ֶΣ����Ұ���С�����˳������
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
//	֮ǰʵ�����ҵ�˼·�����S�����࣬���Ǵ�dfs�м����ְ�����heightÿ����һ�ε���height+1��Ȼ���ҵ�
//	����height��Ӧ���±꣬�����ҵ��뷨�ǽ�����ͼ�еĽ�㶼��һ�飬����ÿ�������������߶��Ƕ���
//	ʵ���������forѭ��һ�����ö�û�У���Ϊ��һ��dfs��i,1��ֻ�Ǵ�i��ʼ����һ�飬�����õ�ֻ��i�����height
//	�����㲢û��������һ��dfs������������height��Ӧ�ĵ㣬�ٴ�����������dfsһ�飬����Ĳ�������
//	���height���±ꡣ
//	*/
//	system("pause");
//	return 0;
//}
//void dfs(int root, int height)
//{	
//	if (height>maxheight){//�����ǰ���߱����ֵҪ����������ֵ�����ҽ�֮ǰV�д洢���������ֵ��Ӧ�ĵ���գ����´������ֵ��Ӧ�ĵ�
//		maxheight = height;
//		V.clear();
//		V.push_back(root);
//	}
//	else if (height==maxheight){//�����ȣ�˵��V����������������ݵĻ�������Ķ�Ӧ�ĵ��height�뵱ǰ��һ��������뵱ǰ��
//		V.push_back(root);
//	}
//	visited[root] = true;
//	for (int i = 1; i <= n; i++){
//		if (visited[i] == false && graph[i][root] == 1){
//			dfs(i, height+1);//��i����dfs��heightҪ+1
//		}
//	}
//}