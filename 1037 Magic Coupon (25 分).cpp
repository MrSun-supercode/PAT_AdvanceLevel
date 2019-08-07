///*
//思路：先将两个数据排序，然后分别从前往后和从后往前排列：（贪心算法，局部最优解）
//从前往后：如果都是负数，则计算他们俩的乘积并加到sum中（排序后两个数据最左边的元素肯定是最小的，而负数最小相乘后负负得正是最大的数，这样就可以得到一个较大的数）
//从后往前：如果都是正数，则计算他们俩的乘积并加到sum中（排序后两个数据最右边的元素肯定是最大的，两个最大的正数相乘的数也就相对大）
//注意：只要出现一个正数*一个负数，则肯定会使sum减小，所以不选
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(void)
//{
//	int n1, n2;
//	cin >> n1;
//	vector<int>V1(n1);
//	for (int i = 0; i < n1; i++)
//	{
//		cin >> V1[i];
//	}
//	cin >> n2;
//	vector<int>V2(n2);
//	for (int i = 0; i < n2; i++)
//	{
//		cin >> V2[i];
//	}
//	sort(V1.begin(), V1.end());//排序
//	sort(V2.begin(), V2.end());
//	int pointer1, pointer2,sum=0;
//	pointer1 = 0, pointer2 = 0;//从前到后遍历
//	while (pointer1<n1&&pointer2<n2&&V1[pointer1]<0&&V2[pointer2]<0)//两个指针都不超过n1，n2，并且对应的值都小于0
//	{
//		sum += V1[pointer1] * V2[pointer2];
//		pointer1++;//两个指针向后移动
//		pointer2++;
//	}
//	pointer1 = n1 - 1;//从后往前遍历
//	pointer2 = n2 - 1;
//	while (pointer1>=0&&pointer2>=0&&V1[pointer1]>0&&V2[pointer2]>0) // 两个指针都不小于0，并且对应的值都大于0
//	{
//		sum += V1[pointer1] * V2[pointer2];
//		pointer1--;
//		pointer2--;
//	}
//	//舍弃两个vector中一个正一个负的数据（会使sum减小）
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}