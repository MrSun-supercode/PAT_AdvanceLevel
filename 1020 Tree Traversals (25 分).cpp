////˼·����ϰ������֪�������������������ƣ�ֻ������ÿ������node�洢����Ϊ��Ҫ�õ�index��
////Ȼ���ÿ�������ȫ��������Ӧ���±긳��ÿ�����indexֵ��Ȼ��index��С�������в������Ϊ����������
////ipad�������У�����ϸ��
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int post[31], in[31];
//struct node {
//	int index, value;
//};
//bool cmp(node a, node b)//�Զ������򷽷������±��С�������С�
//{
//	return a.index < b.index;
//}
//vector<node>V;
//void pre(int root, int start, int end, int index);
//int main(void)
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> post[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> in[i];
//	}
//	pre(n - 1, 0, n - 1, 0);
//	sort(V.begin(), V.end(), cmp);//���У�����index��С����������ǲ���������
//	for (int i = 0; i < V.size(); i++)
//	{
//		if (i != 0)
//		{
//			cout << " " << V[i].value;
//		}
//		else cout << V[i].value;
//	}
//	system("pause");
//	return 0;
//}
//void pre(int root, int start, int end, int index)
//{
//	if (start > end)
//	{
//		return;
//	}
//	int i = start;//i��start��ʼ�����Ǵ�0��ʼ��
//	while (i < end&&post[root] != in[i])
//	{
//		i++;//�ҵ�i�������������е�λ�ã���in�У���i��ʾ��ǰ�����ڵ��Ӧ���±꣬���Ը��ڵ����һ������������
//		//�ұ�һ��������������i-1һ�����������Ľ�β����end��i+1һ�����������Ŀ�ͷ����start���ݹ����õ���	
//	}
//	V.push_back({ index,post[root] });
//	pre(root - (end - i) - 1, start, i - 1, 2 * index + 1);//�ݹ�����������ֵ�ǵ�ǰ�ڵ�����ȫ��������Ӧ������ֵ��
//	pre(root - 1, i + 1, end, 2 * index + 2);
//}