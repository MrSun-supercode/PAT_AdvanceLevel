///*
//自己的思路，就把它按照定义来如果该元素左边所有的元素都小于它，右边的元素都大于它，那么就将它添加到temp中去准备输出
//结果出了第一个测试点其他都超时了。。。
//*/
////#include<iostream>
////#include<vector>
////using namespace std;
////vector<int>V;
////vector<int>temp;
////bool isPivot(vector<int>V, int num)
////{
////	bool flag = true;
////	for (int i = 0; i < num; i++)
////	{
////		if (V[i] > V[num])
////		{
////			flag = false;
////			return flag;
////		}
////	}
////	for (int i = num + 1; i < V.size(); i++)
////	{
////		if (V[i] < V[num])
////		{
////			flag = false;
////			return flag;
////		}
////	}
////	return true;
////}
////int main(void)
////{
////	int n;
////	cin >> n;
////	V.resize(n);
////	for (int i = 0; i < n; i++)
////	{
////		cin >> V[i];
////	}
////	for (int i = 0; i < n; i++)
////	{
////		if (isPivot(V, i))
////		{
////			temp.push_back(V[i]);
////		}
////	}
////	cout << temp.size() << endl;
////	for (int i = 0; i < temp.size(); i++)
////	{
////		if (i == 0)
////		{
////			cout << temp[i];
////		}
////		else cout << ' ' << temp[i];
////	}
////	system("pause");
////	return 0;
////}
///*
//柳婼大神的思路：
//先排序，如果排序后的元素位置相对于排序前没有发生变化并且当前位置的元素值大于其左边所有元素的最大值时，可以证明它是pivot
//毕竟⽆无论如何当前这个数要满⾜足左边都⽐比他⼤大 右边都⽐比他⼩小，那它的排名【当前数在序列列中处在第⼏几个】⼀一定不不会变
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//vector<int>V1;
//vector<int>V2;
//int main(void)
//{
//	int n, max = 0;
//	scanf("%d", &n);
//	V1.resize(n);
//	V2.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &V1[i]);
//		V2[i] = V1[i];
//	}
//	sort(V1.begin(), V1.end());
//	/*for (int i = 0; i < n; i++)
//	{
//		cout << V1[i] << ' ';
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << V2[i] << ' ';
//	}*/
//	//此时V1已排好序，V2跟原输入一样
//	vector<int>temp;
//	for (int i = 0; i < n; i++)
//	{
//		if (V1[i] == V2[i])
//		{
//			if (V2[i] > max)
//			{
//				temp.push_back(V2[i]);
//			}
//		}
//		if (max < V2[i])
//		{
//			max = V2[i];
//		}
//	}
//	printf("%d\n", temp.size());
//	for (int i = 0; i < temp.size(); i++)
//	{
//		if (i == 0)
//		{
//			printf("%d", temp[i]);
//		}
//		else printf(" %d", temp[i]);
//	}
//	printf("\n");//不加有一个测试点会错误，应该是空值测试点
//	system("pause");
//	return 0;
//}