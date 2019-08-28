//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//int main(void)
//{
//	int n, m, k;
//	scanf("%d", &n);
//	set<int>S[51];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		for (int j = 0; j < m; j++)
//		{
//			int temp;
//			scanf("%d", &temp);
//			S[i].insert(temp);//因为题目不考虑每个输入行中重复的元素，所以不需要数组，直接用set存储输入即可
//		}
//	}
//	scanf("%d", &k);
//	set<int>total;
//	for (int i = 0; i < k; i++)
//	{
//		int set1, set2;
//		scanf("%d %d", &set1, &set2);
//		total.clear();
//		set1 -= 1;
//		set2 -= 1;
//		int cnt = 0, cnm = S[set1].size();
//		for (auto iter = S[set2].begin(); iter != S[set2].end(); iter++)
//		{
//			/*total.insert(*iter);*/
//			if (S[set1].find(*iter) != S[set1].end())
//			{
//				cnt++;
//			}
//			else cnm++;
//		}//第一次思路：直接设立一个total集合，将set1和set2集合的全部元素添加进去，最后返回total集合的大小即分母，这样最后一个测试点超时
//		//第二次思路：在上一步判断时就将set2集合的元素添加进去，然后只需添加set1集合即可，但还是最后一个测试点超时
//		//参考柳婼大神思路：因为你是遍历set2，然后从set1里面找set2是否在set1中出现过
//		//那么直接将cnm赋值set1集合的大小，这样在遍历set2时，如果发现没找到的话将cnm++，这样说明这是set2特有的元素，添加到总数上面去（tql，我怎么也想不出来）
//		/*for (auto iter = S[set1].begin(); iter != S[set1].end(); iter++)
//		{
//			total.insert(*iter);
//		}*/
//		/*for (iter = S[set2].begin(); iter != S[set2].end(); iter++)
//		{
//			total.insert(*iter);
//		}*/
//		float result = cnt * 1.000 / cnm;
//		result *= 100;
//		printf("%.1f%%\n", result);
//	}
//	system("pause");
//	return 0;
//}