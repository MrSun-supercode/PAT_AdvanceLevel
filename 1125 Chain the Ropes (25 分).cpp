/*
˼�룺����������˼�룬�������ÿ����������СֵȻ��ȡƽ���Żء����ν���ֱ��ʣ�����һ��Ԫ�ؼ����ֵ
*/
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
priority_queue<int, vector<int>, greater<int>>q;//�����������ȶ���Ĭ�ϴ�С�������У�q[0]Ϊ��С��q[n]Ϊ���
//priority_queue<int>q;//����Ĭ�ϴӴ�С����
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