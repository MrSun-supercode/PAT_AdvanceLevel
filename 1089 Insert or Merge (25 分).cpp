///*
//紧扣插入排序和归并排序的定义与性质。
//插入排序左边的是有序序列，右边是无序序列，所以我们先找到第一个无序序列开始的索引，然后判断后面若跟V1相等（即没有排序，插入排序只从前边开始往后排），说明是插入排序
//否则就是归并排序，但是归并排序我们只能做个模拟，不可以从头写，因为归并排序是一个递归的过程，我们无法从中间序列判断从而进行下一步的操作
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//vector<int>V1;
//vector<int>V2;
//bool isSame(vector<int>V1, vector<int>V2)
//{
//	for (int i = 0; i < V1.size(); i++)
//	{
//		if (V1[i] != V2[i])
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	V1.resize(n);
//	V2.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V1[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V2[i];
//	}
//	int i;
//	for (i = 0; i < n; i++)//判断找到V2中第一个不是有序的索引值赋给j
//	{
//		if (V2[i] > V2[i + 1])
//		{
//			break;
//		}
//	}
//	int j = i + 1;
//	bool flag = false;
//	for (int i = j; i < n; i++)//从j开始，如果后续值V2与V1都相等，则说明是插入排序
//	{
//		if (V1[i] != V2[i])
//		{
//			flag = true;
//			break;
//		}
//	}
//	if (!flag)
//	{
//		cout << "Insertion Sort" << endl;
//		sort(V2.begin(), V2.begin() + i + 1 + 1);//插入排序在进行一步的话只将下一个数字加入到前边有序序列进行排序即可
//		for (int i = 0; i < n; i++)
//		{
//			if (i == 0)
//			{
//				cout << V2[i];
//			}
//			else cout << ' ' << V2[i];
//		}
//	}
//	else {
//		cout << "Merge Sort" << endl;
//		bool flag = false;
//		for (int step = 2; step / 2 < n; step *= 2)//这里不是step/2的话测试点3过不去,因为如果是step<n的话step最大到8，那么最后一趟归并排序只能分为8,2的数字序列，则最后无法对10个数字的序列整个进行排序，所以要在*2，让其大于整个序列，然后在下步min(i+step,n)中取n
//		{
//			if (isSame(V1, V2))//如果两个式子相等，说明找到了中间序列，然后再进行一次操作即可输出
//			{
//				flag = true;
//			}
//			for (int i = 0; i < n; i += step)//进行归并排序的模拟过程，先以2为基数排序，再以4，再以8，所以上面是step*=2
//			{
//				sort(V1.begin() + i, V1.begin() + min(i + step, n));//加min(i+step，n)表示比如数字序列为10，在以4位基数时最后的序列不够4了所以只有2，但如果不加min的话V2会超出索引值，所以给它一个边界，如果i+step比n大了，那么最大的界限就是n
//			}
//			if (flag)//如果flag为true，即可，因为上步已经在相等的基础上多进行了一步操作了
//			{
//				for (int i = 0; i < n; i++)
//				{
//					if (i == 0)
//					{
//						cout << V1[i];
//					}
//					else cout << ' ' << V1[i];
//				}
//				break;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}