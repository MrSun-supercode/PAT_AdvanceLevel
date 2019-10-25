///*
//读清题就能做出来，注意：放入set中立刻输出是因为set数据结构默认是自动排序，最后一起输出时可能跟原来中奖顺序有出入。
//*/
//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<set>
//using namespace std;
//int main(void)
//{
//	int m, n, s;
//	cin >> m >> n >> s;
//	set<string>S;
//	vector<string>V(m + 1);
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> V[i];
//	}
//	if (s > m)//如果初始下标比m还大，那就直接输出Keep going...
//	{
//		cout << "Keep going..." << endl;
//	}
//	else {
//		S.insert(V[s]);//先将初始下标对应的元素值放入set中，并立即输出
//		cout << V[s] << endl;
//		while (s <= m)//只要s<=m，那么就一次让s+=n，并且判断V[s]是否出现过，出现过的话就依次顺延
//		{
//			s += n;
//			if (s<=m)
//			{
//				while (S.find(V[s]) != S.end())//V[s]在S中存在
//				{
//					s++;//依次顺延
//				}
//				if (s <= m)//因为s值改变了，此时必须进行判断，一旦s>m不判断的话vector下标就会溢出
//				{
//					S.insert(V[s]);
//					cout << V[s] << endl;
//				}
//				else break;
//			}
//			else break;
//		}
//	}
//	system("pause");
//	return 0;
//}