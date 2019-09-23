///*
//分数运算题：1081,1088
//最重要的两个步骤：化简分数的三步（分母为负数，分子为0，其他情况）以及输出（整数，假分数，真分数）的三步
//*/
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct node {//分数的结构体，up为分子，down为分母
//	int up, down;
//};
//int gcd(int a, int b)//求最小公倍数的函数，可以看之前的求法
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	else return gcd(b, a%b);
//}
//void func(node &a)//对分数进行化简
//{
//	if (a.down < 0)//第一，如果分母为负数，那么只需将分母分子符号调换一下将分子的符号变为负号（便于输出）即可
//	{
//		a.up = -a.up;
//		a.down = -a.down;
//	}
//	if (a.up == 0)//若分子为0，那么将分母置为1，便于与后面整数输出整合在一起
//	{
//		a.down = 1;
//	}
//	else {//其他条件下，找到分子分母的最小公倍数并同时除以它（有可能是1）
//		int d = gcd(abs(a.up), abs(a.down));
//		a.up /= d;
//		a.down /= d;
//	}
//}
//node funcAdd(node a, node b)//加函数
//{
//	node temp;
//	temp.up = a.up*b.down + b.up*a.down;//列式子之后模拟即可
//	temp.down = a.down*b.down;
//	func(temp);//每次加完之后也需要对分数化简
//	return temp;
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector<node>V(n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d/%d", &V[i].up, &V[i].down);
//	}
//	/*for (int i = 0; i < n; i++)
//	{
//		cout << V[i].up << '/' << V[i].down << endl;
//	}*/
//	node temp;
//	int i = 1;
//	temp = V[0];//先让temp为V[0],然后将temp分别加V[i],i为1至n-1
//	while (i < n)
//	{
//		temp = funcAdd(V[i], temp);
//		i++;
//	}
//	/*cout << temp.up << '/' << temp.down << endl;*/
//	//最后一步，化简所求的temp
//	if (temp.down == 1)//如果分母为1，则说明是整数，则直接输出分子即可
//	{
//		cout << temp.up << endl;
//	}
//	else if (abs(temp.up) > temp.down)//如果分子大于分母，说明是假分数，直接按格式输出即可.注意这里一定是abs，不然有可能分子为负数则不会走这一步
//	{
//		cout << temp.up / temp.down << ' ' << abs(temp.up) % temp.down << '/' << temp.down << endl;//这里是abs是因为如果temp.up小于0，那么前面输出整数时已经将负号输出了，这样后面需要全部都是正数
//	}
//	else {//真分数直接输出即可
//		cout << temp.up << '/' << temp.down << endl;
//	}
//	system("pause");
//	return 0;
//}