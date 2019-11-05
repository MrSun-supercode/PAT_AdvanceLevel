/////*
////思路：在注释里，3,4测试点超时，将cout和cin改了也没有用
////*/
////#include<iostream>
////#include<vector>
////#include<algorithm>
////using namespace std;
////struct node {
////	int data;
////	int times = 0;
////	bool operator==(const int & x);//find函数本质是将第三个参数在第一个参数到第二个参数范围内查找（使用==号），然后find函数中第三个参数类型为int，而查找的容器类型为node，所以要重写node结构体的==意义
////};
////vector<node>V;
////vector<int>Data;
////bool node::operator ==(const int &x) {
////	return(this->data == x);
////}
////bool cmp(node a, node b)
////{
////	if (a.times != b.times)//如果出现次数不相同，按次数大者在前
////	{
////		return a.times > b.times;
////	}
////	else return a.data < b.data;//出现次数相同，按字典序从小到大排列
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
////		if (it != V.end())//在V中找到了Data[i]，将times加一
////		{
////			(*it).times++;
////		}
////		else {//没在V中找到Data[i]，将其加入到V中
////			node temp = { Data[i] };
////			V.push_back(temp);
////		}
////		sort(V.begin(), V.end(), cmp);//进行排序
////	}
////	system("pause");
////	return 0;
////}
///*
//使用set的find函数而不是借助algorithm中的find函数，因为set中的find函数使用搜索二叉树BST使得查找的时间复杂度为O(logn)
//而algorithm中的find函数使用O(n)的查找时间即逐项遍历查找，所以set更快，而且不需要排序（set插入时默认为从大到小的顺序，当然我们重载<运算符让其默认排序是我们的排序即可）
//使用algorithm中的find函数后还要重新排序一遍
//*/
//#include<iostream>
//#include<vector>
//#include<set>
//#include<algorithm>
//using namespace std;
//struct node {
//	int data;
//	int times;
//	bool operator < (const node &x) const {//重载<,因为set默认排序用到了<,所以我们根据此来定制我们自定义的排序，最后的const别忘加
//		return (times != x.times) ? times > x.times:data < x.data;
//	}
//};
//vector<int>V;
//set<node>S;
//int book[50001];//book保存i元素的出现次数，5出现一次后book[5]++，默认一开始值都是1
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
//		if (it != S.end())//在S中找到了V[i]，将times加一
//		{
//			S.erase(it);//set不可以在原元素基础上使其times++，所以先删除元素，然后将book数组对应的值++，然后再插入所需值即可
//			book[V[i]]++;
//			S.insert(node{ V[i],book[V[i]] });
//		}
//		else {//没在V中找到Data[i]，将其加入到V中
//			node temp = { V[i],1 };
//			S.insert(temp);
//		}
//	}
//	system("pause");
//	return 0;
//}