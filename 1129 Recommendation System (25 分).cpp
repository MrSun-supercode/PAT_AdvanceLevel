///*
//˼·����ע���3,4���Ե㳬ʱ����cout��cin����Ҳû����
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	int data;
//	int times = 0;
//	bool operator==(const int & x);//find���������ǽ������������ڵ�һ���������ڶ���������Χ�ڲ��ң�ʹ��==�ţ���Ȼ��find�����е�������������Ϊint�������ҵ���������Ϊnode������Ҫ��дnode�ṹ���==����
//};
//vector<node>V;
//vector<int>Data;
//bool node::operator ==(const int &x) {
//	return(this->data == x);
//}
//bool cmp(node a, node b)
//{
//	if (a.times != b.times)//������ִ�������ͬ��������������ǰ
//	{
//		return a.times > b.times;
//	}
//	else return a.data < b.data;//���ִ�����ͬ�����ֵ����С��������
//}
//int main(void)
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	Data.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d",&Data[i]);
//		if (V.size() != 0)
//		{
//			if (V.size() <= k)
//			{
//				printf("%d: ", Data[i]);
//				for (int i = 0; i < V.size(); i++)
//				{
//					if (i == 0)
//					{
//						printf("%d", V[i].data);
//					}
//					else printf(" %d", V[i].data);
//				}
//				printf("\n");
//			}
//			else {
//				printf("%d: ", Data[i]);
//				for (int i = 0; i < k; i++)
//				{
//					if (i == 0)
//					{
//						printf("%d", V[i].data);
//					}
//					else printf(" %d", V[i].data);
//				}
//				printf("\n");
//			}
//		}
//		auto it = find(V.begin(), V.end(), Data[i]);
//		if (it != V.end())//��V���ҵ���Data[i]����times��һ
//		{
//			(*it).times++;
//		}
//		else {//û��V���ҵ�Data[i]��������뵽V��
//			node temp = { Data[i] };
//			V.push_back(temp);
//		}
//		sort(V.begin(), V.end(), cmp);//��������
//	}
//	system("pause");
//	return 0;
//}