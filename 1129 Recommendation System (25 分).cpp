///*
//思路：在注释里，3,4测试点超时，将cout和cin改了也没有用
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	int data;
//	int times = 0;
//	bool operator==(const int & x);//find函数本质是将第三个参数在第一个参数到第二个参数范围内查找（使用==号），然后find函数中第三个参数类型为int，而查找的容器类型为node，所以要重写node结构体的==意义
//};
//vector<node>V;
//vector<int>Data;
//bool node::operator ==(const int &x) {
//	return(this->data == x);
//}
//bool cmp(node a, node b)
//{
//	if (a.times != b.times)//如果出现次数不相同，按次数大者在前
//	{
//		return a.times > b.times;
//	}
//	else return a.data < b.data;//出现次数相同，按字典序从小到大排列
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
//		if (it != V.end())//在V中找到了Data[i]，将times加一
//		{
//			(*it).times++;
//		}
//		else {//没在V中找到Data[i]，将其加入到V中
//			node temp = { Data[i] };
//			V.push_back(temp);
//		}
//		sort(V.begin(), V.end(), cmp);//进行排序
//	}
//	system("pause");
//	return 0;
//}