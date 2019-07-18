////思路：先将一个临时变量tempfloor存储当前电梯所在的楼层，然后将列表中的楼层跟tempfloor顺序比较，如果
////floor-tempfloor>0说明是上楼，反之是下楼，而且每输入一个楼层后需要将tempfloor设置为当前楼层即floor
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int n;
//	cin >> n;
//	int sum = 0, tempfloor = 0, floor;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> floor;
//		if (floor - tempfloor > 0)
//		{
//			sum = sum + (floor - tempfloor) * 6 + 5;
//		}
//		else {
//			sum = sum + (tempfloor - floor) * 4 + 5;
//		}
//		tempfloor = floor;
//	}
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}