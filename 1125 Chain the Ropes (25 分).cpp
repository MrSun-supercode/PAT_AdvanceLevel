/*
思想：哈夫曼编码思想，先排序后，每次拿两个最小值然后取平均放回。依次进行直到剩下最后一个元素即最大值
*/
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
priority_queue<int, vector<int>, greater<int>>q;//这样是让优先队列默认从小到大排列（q[0]为最小，q[n]为最大）
//priority_queue<int>q;//这样默认从大到小排列
int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		q.push(temp);
	}
	while (!q.empty())
	{
		int temp = q.top();
		q.pop();
		cout << temp << endl;
	}
	/*while (q.size()!=1)
	{
		int a = q.top();
		q.pop();
		int b = q.top();
		q.pop();
		int ans = (a + b) / 2;
		q.push(ans);
	}
	cout << q.top() << endl;*/
	system("pause");
	return 0;
}