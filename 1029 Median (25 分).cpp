///*
//思路：直接将两个式子里面的数放到vector中，排序并输出中位数（测试点5678内存超限，猜想可能是两个式子数合到vector中导致vector内存超限）
//*/
////#include<iostream>
////#include<vector>
////#include<algorithm>
////#include<cmath>
////using namespace std;
////int main(void)
////{
////	vector<long int>V;
////	int n;
////	for (int i = 0; i < 2; i++)
////	{
////		cin >> n;
////		for (int i = 0; i < n; i++)
////		{
////			long int temp;
////			cin >> temp;
////			V.push_back(temp);
////		}
////	}
////	sort(V.begin(), V.end());
////	cout << V[(V.size() - 1) / 2] << endl;
////	system("pause");
////	return 0;
////}
///*
//思路：只保留第一个式子的数字，然后第二个式子边输入边判断，然后找到中值，但是只将倒数第二个的内存超限变为了答案错误，其他结果一样
//*/
////#include<iostream>
////#include<vector>
////#include<algorithm>
////#include<cmath>
////using namespace std;
////int main(void)
////{
////	int n1, n2, index = 0, t, sum;
////	cin >> n1;
////	vector<long int>V(n1);
////	for (int i = 0; i < n1; i++)
////	{
////		cin >> t;
////		V[i] = t;
////	}
////	cin >> n2;
////	int mid = (n1 + n2 + 1) / 2;
////	bool flag = false;
////	for (int i = 0; i < n2; i++)
////	{
////		int temp;
////		cin >> temp;
////		flag = false;
////		for (auto it = V.cbegin(); it != V.cend();)
////		{
////			if (temp < (*it) && index != mid - 1) {
////				index++;
////				flag = true;
////				break;
////			}
////			else if (temp >= (*it) && index != mid - 1) {//如果比他大，直接删除它
////				index++;
////				it = V.erase(it);
////			}
////			if (index == mid - 1) {
////				break;
////			}
////		}
////		if (index == mid - 1) {
////			if (V.size() == 0) {
////				sum = temp;
////				break;
////			}
////			else {
////				if (temp > V[0]) {
////					sum = V[0];
////					break;
////				}
////				else {
////					sum = temp;
////					break;
////				}
////			}
////
////		}
////	}
////	cout << sum << endl;
////	system("pause");
////	return 0;
////}
///*
//柳婼大神，思路相似，但是比我简单很多很多
//*/
//#include<iostream>
//using namespace std;
//int n[200001];
//int main(void)
//{
//	int N,m,mid,i,cnt=0;
//	cin >> N;
//	for (i = 1; i <= N; i++)
//	{
//		cin >> n[i];
//	}
//	n[N+1]= 0x7fffffff;//将数组最后一位保存为无限大的值，防止后面temp会比n[i]大而超出数组索引
//	cin >> m;
//	mid = (N + m + 1) / 2;//中位数的索引
//	i = 1;//i记录temp跟n数组比较时比较到的下标
//	for (int j = 0; j < m; j++)
//	{
//		int temp;
//		cin >> temp;
//		while (temp>n[i])//如果temp比n[i]大,cnt要加一，i也要加一，即下次直接跳过当前n的位置（输入时也为有序，temp比当前i大，则之后所有值都会比它大）
//		{
//			cnt++;
//			if (cnt==mid)
//			{
//				cout << n[i]<<endl;
//			}
//			i++;
//		}
//		cnt++;//如果temp比n数组第一个数字小，那么直接cnt加一，然后判断
//		if (cnt==mid)
//		{
//			cout << temp << endl;
//		}
//	}
//	while (i<=N)//如果输入完成后还没有结果，说明中位数位于n数组内，则从i的位置开始遍历，直到找到中位数
//	{
//		cnt++;
//		if (cnt == mid)
//		{
//			cout << n[i] << endl;
//			break;
//		}
//		i++;
//	}
//	system("pasue");
//	return 0;
//}