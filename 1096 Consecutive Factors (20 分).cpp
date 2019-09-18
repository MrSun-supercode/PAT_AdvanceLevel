//#include<iostream>
//#include<cmath>
//using namespace std;
//long int n, temp;
//int main(void)
//{
//	scanf("%d", &n);
//	int len = 0, first = 0;
//	int maxn = sqrt(n);//n因数的最大值
//	for (int i = 2; i <= maxn; i++)//从2开始一直到maxn， 从1开始没意义
//	{
//		int j, temp = 1;//j为从i开始一直往后可以被n整除的最大的距离
//		for (j = i; j <= maxn; j++)
//		{
//			temp *= j;//temp为当前可以让n被整除的所有数的乘积
//			if (n%temp != 0)//如果此时不可以被temp整除了，说明j多走了一位，需要自减1，比如630可以被5*6*7整除，但当j=8时发现不可以整除，所以需要j--
//			{
//				break;
//			}
//		}
//		//这里需要注意，j--之后的数（比如7）减i后（-5）再加1才可以得到从i-j的数的个数，即j-1-i+1即j-i
//		if (len < j - i)//如果len小于j-i，则更新len和first，first指向i，代表连续因数的初始因数（比如5,6,7的5）
//		{
//			len = j - i;
//			first = i;
//		}
//	}
//	if (first == 0)//如果first==0，说明n为1或者是素数，只有一个因数就是它自己本身
//	{
//		printf("1\n%d\n", n);
//	}
//	else {
//		printf("%d\n", len);
//		for (int i = 0; i < len; i++)
//		{
//			if (i == 0)
//			{
//				printf("%d", first++);//从first一直到first+len为最大连续因子序列
//			}
//			else printf("*%d", first++);
//		}
//	}
//	system("pause");
//	return 0;
//}