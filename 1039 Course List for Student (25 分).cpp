///*
//思路：我想的复杂了，我想的是先设立个二维vector，然后将课程的编号以及每个课程的人存进去，然后再设立一个vector将
//学生存进去，然后从学生开始遍历，如果这个学生在先前的二维vector中出现，则加入课程号以及课程数量（时间复杂度和空间复杂度太高，不是很好的思路）
//最后一个测试点未能通过，得分23分，还害得我debug了好久，
//收获：find(V.begin(),V.end(),temp)!=V.end()这个只适用于基本的数据结构，而不适用于自己创建的struct node
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	string name;
//	int class_num = 0;
//	vector<int>C;//class的下标
//};
//struct stu {
//	string name;
//	int class_index;
//};
//int main(void)
//{
//	int n, k;
//	cin >> n >> k;
//	vector<vector<stu>>V(k);
//	vector<node>Stu(n);
//	for (int i = 0; i < k; i++)
//	{
//		int num, index;
//		cin >> index >> num;
//		V[i].resize(num);
//		for (int j = 0; j < num; j++)
//		{
//			cin >> V[i][j].name;
//			V[i][j].class_index = index;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> Stu[i].name;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			for (int m = 0; m < V[j].size(); m++)//查找V[j]中是否有Stu[i].name
//			{
//				if (V[j][m].name == Stu[i].name)
//				{
//					Stu[i].class_num++;
//					Stu[i].C.push_back(V[j][m].class_index);//因为是从1-k遍历，并且push_back，所以输出时按从小到大的顺序就不需要再排序了
//					break;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (Stu[i].C.size() > 1)
//		{
//			sort(Stu[i].C.begin(), Stu[i].C.end());
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << Stu[i].name << ' ';
//		int temp = Stu[i].class_num;
//		if (temp != 0)
//		{
//			cout << temp;
//			for (int j = 0; j < temp; j++)
//			{
//				cout << ' ' << Stu[i].C[j];
//			}
//			cout << endl;
//		}
//		else {
//			cout << temp << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}