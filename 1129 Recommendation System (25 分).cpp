/////*
////˼·����ע���3,4���Ե㳬ʱ����cout��cin����Ҳû����
////*/
////#include<iostream>
////#include<vector>
////#include<algorithm>
////using namespace std;
////struct node {
////	int data;
////	int times = 0;
////	bool operator==(const int & x);//find���������ǽ������������ڵ�һ���������ڶ���������Χ�ڲ��ң�ʹ��==�ţ���Ȼ��find�����е�������������Ϊint�������ҵ���������Ϊnode������Ҫ��дnode�ṹ���==����
////};
////vector<node>V;
////vector<int>Data;
////bool node::operator ==(const int &x) {
////	return(this->data == x);
////}
////bool cmp(node a, node b)
////{
////	if (a.times != b.times)//������ִ�������ͬ��������������ǰ
////	{
////		return a.times > b.times;
////	}
////	else return a.data < b.data;//���ִ�����ͬ�����ֵ����С��������
////}
////int main(void)
////{
////	int n, k;
////	scanf("%d %d", &n, &k);
////	Data.resize(n);
////	for (int i = 0; i < n; i++)
////	{
////		scanf("%d",&Data[i]);
////		if (V.size() != 0)
////		{
////			if (V.size() <= k)
////			{
////				printf("%d: ", Data[i]);
////				for (int i = 0; i < V.size(); i++)
////				{
////					if (i == 0)
////					{
////						printf("%d", V[i].data);
////					}
////					else printf(" %d", V[i].data);
////				}
////				printf("\n");
////			}
////			else {
////				printf("%d: ", Data[i]);
////				for (int i = 0; i < k; i++)
////				{
////					if (i == 0)
////					{
////						printf("%d", V[i].data);
////					}
////					else printf(" %d", V[i].data);
////				}
////				printf("\n");
////			}
////		}
////		auto it = find(V.begin(), V.end(), Data[i]);
////		if (it != V.end())//��V���ҵ���Data[i]����times��һ
////		{
////			(*it).times++;
////		}
////		else {//û��V���ҵ�Data[i]��������뵽V��
////			node temp = { Data[i] };
////			V.push_back(temp);
////		}
////		sort(V.begin(), V.end(), cmp);//��������
////	}
////	system("pause");
////	return 0;
////}
///*
//ʹ��set��find���������ǽ���algorithm�е�find��������Ϊset�е�find����ʹ������������BSTʹ�ò��ҵ�ʱ�临�Ӷ�ΪO(logn)
//��algorithm�е�find����ʹ��O(n)�Ĳ���ʱ�伴����������ң�����set���죬���Ҳ���Ҫ����set����ʱĬ��Ϊ�Ӵ�С��˳�򣬵�Ȼ��������<���������Ĭ�����������ǵ����򼴿ɣ�
//ʹ��algorithm�е�find������Ҫ��������һ��
//*/
//#include<iostream>
//#include<vector>
//#include<set>
//#include<algorithm>
//using namespace std;
//struct node {
//	int data;
//	int times;
//	bool operator < (const node &x) const {//����<,��ΪsetĬ�������õ���<,�������Ǹ��ݴ������������Զ������������const������
//		return (times != x.times) ? times > x.times:data < x.data;
//	}
//};
//vector<int>V;
//set<node>S;
//int book[50001];//book����iԪ�صĳ��ִ�����5����һ�κ�book[5]++��Ĭ��һ��ʼֵ����1
//int main(void)
//{
//	int n, k;
//	cin >> n >> k;
//	V.resize(n);
//	fill(book, book + 50001, 1);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V[i];
//		if (S.size() != 0)
//		{
//			if (S.size() <= k)
//			{
//				printf("%d: ", V[i]);
//				for (auto it = S.begin(); it != S.end(); it++)
//				{
//					if (it == S.begin())
//					{
//						printf("%d", (*it).data);
//					}
//					else printf(" %d", (*it).data);
//				}
//				printf("\n");
//			}
//			else {
//				printf("%d: ", V[i]);
//				int tmp = 0;
//				for (auto it = S.begin(); it != S.end(); it++)
//				{
//					if (tmp == k)
//					{
//						break;
//					}
//					if (it == S.begin())
//					{
//						printf("%d", (*it).data);
//						tmp++;
//					}
//					else {
//						printf(" %d", (*it).data);
//						tmp++;
//					}
//				}
//				printf("\n");
//			}
//		}
//		auto it = S.find(node{ V[i],book[V[i]] });
//		if (it != S.end())//��S���ҵ���V[i]����times��һ
//		{
//			S.erase(it);//set��������ԭԪ�ػ�����ʹ��times++��������ɾ��Ԫ�أ�Ȼ��book�����Ӧ��ֵ++��Ȼ���ٲ�������ֵ����
//			book[V[i]]++;
//			S.insert(node{ V[i],book[V[i]] });
//		}
//		else {//û��V���ҵ�Data[i]��������뵽V��
//			node temp = { V[i],1 };
//			S.insert(temp);
//		}
//	}
//	system("pause");
//	return 0;
//}