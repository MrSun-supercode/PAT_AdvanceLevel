///*
//这题大体思路跟1089类似，也是先判断是否是插入排序，若不是则一定是堆排序，然后按照堆排序的递归方法，每交换大根堆根节点
//并且调整大根堆之后，判断是否跟V2一致，若一致继续进行一次迭代并输出，否则继续迭代
//堆排序的实现很标准，注意这里的所有数存在vector中都是从1-n的下标来存的，下标0没有用到，具体可以看大话数据结构399页（ipad上为423页）
//讲的很通透了，我也是先看的实现在做的题，感觉理解更深了，给程杰老师点个赞。
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//vector<int>V1;
//vector<int>V2;
//void HeapSort(vector<int>V);//堆排序入口
//void adjustHeap(vector<int>&V, int s, int m);//将swap后的堆调整为大根堆
//bool isSame(vector<int>V1, vector<int>V2)
//{
//	for (int i = 1; i < V1.size(); i++)
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
//	V1.resize(n + 1);
//	V2.resize(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> V1[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> V2[i];
//	}
//	int index = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (V2[i] > V2[i + 1])
//		{
//			index = i;
//			break;
//		}
//	}
//	index++;
//	bool flag = false;
//	for (int i = index; i <= n; i++)
//	{
//		if (V1[i] != V2[i])
//		{
//			flag = true;
//			break;
//		}
//	}
//	if (flag)//HeapSort
//	{
//		cout << "Heap Sort" << endl;
//		HeapSort(V1);
//	}
//	else {
//		cout << "Insertion Sort" << endl;
//		sort(V2.begin(), V2.begin() + index + 1);
//		for (int i = 1; i <= n; i++)
//		{
//			if (i == 1)
//			{
//				cout << V2[i];
//			}
//			else cout << " " << V2[i];
//		}
//	}
//	system("pause");
//	return 0;
//}
//void HeapSort(vector<int>V)//堆排序入口
//{
//	for (int i = (V.size() - 1) / 2; i > 0; i--)
//	{
//		adjustHeap(V, i, V.size() - 1);//构建大根堆（只需构建带子节点的节点）
//	}
//	for (int i = (V.size() - 1); i > 1; i--)//因为会一直跟1交换，所以不需要减到1
//	{
//		swap(V[1], V[i]);//交换一次，最大的数据（堆的根节点一直为当前堆的最大节点）交换到了vector最后一位，以此类推
//		adjustHeap(V, 1, i - 1);//别忘了再调整堆使其为大根堆
//		if (isSame(V, V2))
//		{
//			i--;//因为最后需要输出下一次迭代过程，所以别忘了i--
//			swap(V[1], V[i]);
//			adjustHeap(V, 1, i - 1);
//			for (int i = 1; i < V.size(); i++)
//			{
//				if (i == 1)
//				{
//					cout << V[i];
//				}
//				else cout << ' ' << V[i];
//			}
//			return;
//		}
//	}
//}
//void adjustHeap(vector<int>&V, int s, int m)//将swap后的堆调整为大根堆
//{
//	int temp = V[s], j;
//	for (j = 2 * s; j <= m; j *= 2)//s若有左右子节点，那么2*s一定是其左子节点下标，而2*s+1一定是其右子节点下标
//	{
//		if (j < m&&V[j] < V[j + 1])//j<m保证当前s有两个左右子节点一个是j，一个是j+1
//		{
//			j++;//找s的左右子节点最大的那个，若j++说明右子节点比左子节点大，否则j不变
//		}
//		if (temp > V[j])//如果当前节点已经比左右节点的最大值都大，无需交换，退出即可
//		{
//			break;
//		}
//		V[s] = V[j];//s赋值为j，注意此时j下标的值仍然没变
//		s = j;//s=j,继续迭代s的j节点的子节点
//	}
//	V[s] = temp;
//}