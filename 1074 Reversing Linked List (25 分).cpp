//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct Node {
//	int value;
//	int next;
//}node[100000];
//int list[100000];//list�Ǵ洢��next����list�洢�����˳�����У�����������1,2,3,4,5,6��list[i]��ÿ��Ԫ�ص�addr��list[i+1]��ÿ��Ԫ����һ����addr��node[addr].next�������鿴https://www.cnblogs.com/ljwTiey/p/4294484.html
//vector<int>res;//ʹ��list����ʱҪ���ĺܴ�Ų��ᵼ�µ����ڶ������Ե����ʹ��resʱ���õ���
//int main(void)
//{
//	int first, n, k, addr, value, next;
//	cin >> first >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> addr >> value >> next;
//		node[addr] = { value,next };
//	}
//	int cnt = 0;//����һ����ֻ��Ҫ�ı�list��˳��Ȼ����node������൱�ڸ�����ı�˳����
//	while (first != -1)
//	{
//		/*list[cnt++] = first;*/
//		res.push_back(first);
//		first = node[first].next;
//	}
//	int i = 0;
//	cout << res.size() << endl;
//	while (i + k <= res.size())
//	{
//		/*reverse(list + i, list + i + k);*/
//		reverse(res.begin() + i, res.begin() + i + k);
//		i += k;
//	}
//	for (i = 0; i < res.size() - 1; i++)
//	{
//		/*printf("%05d %d %05d\n", list[i], node[list[i]].value, list[i + 1]);*/
//		printf("%05d %d %05d\n", res[i], node[res[i]].value, res[i + 1]);
//	}
//	printf("%05d %d -1\n", res[res.size() - 1], node[res[res.size() - 1]].value);
//	system("pause");
//	return 0;
//}