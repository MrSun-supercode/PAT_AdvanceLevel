///*
//���������⣺1081,1088
//����Ҫ���������裺�����������������ĸΪ����������Ϊ0������������Լ�������������ٷ������������������
//*/
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct node {//�����Ľṹ�壬upΪ���ӣ�downΪ��ĸ
//	int up, down;
//};
//int gcd(int a, int b)//����С�������ĺ��������Կ�֮ǰ����
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	else return gcd(b, a%b);
//}
//void func(node &a)//�Է������л���
//{
//	if (a.down < 0)//��һ�������ĸΪ��������ôֻ�轫��ĸ���ӷ��ŵ���һ�½����ӵķ��ű�Ϊ���ţ��������������
//	{
//		a.up = -a.up;
//		a.down = -a.down;
//	}
//	if (a.up == 0)//������Ϊ0����ô����ĸ��Ϊ1������������������������һ��
//	{
//		a.down = 1;
//	}
//	else {//���������£��ҵ����ӷ�ĸ����С��������ͬʱ���������п�����1��
//		int d = gcd(abs(a.up), abs(a.down));
//		a.up /= d;
//		a.down /= d;
//	}
//}
//node funcAdd(node a, node b)//�Ӻ���
//{
//	node temp;
//	temp.up = a.up*b.down + b.up*a.down;//��ʽ��֮��ģ�⼴��
//	temp.down = a.down*b.down;
//	func(temp);//ÿ�μ���֮��Ҳ��Ҫ�Է�������
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
//	temp = V[0];//����tempΪV[0],Ȼ��temp�ֱ��V[i],iΪ1��n-1
//	while (i < n)
//	{
//		temp = funcAdd(V[i], temp);
//		i++;
//	}
//	/*cout << temp.up << '/' << temp.down << endl;*/
//	//���һ�������������temp
//	if (temp.down == 1)//�����ĸΪ1����˵������������ֱ��������Ӽ���
//	{
//		cout << temp.up << endl;
//	}
//	else if (abs(temp.up) > temp.down)//������Ӵ��ڷ�ĸ��˵���Ǽٷ�����ֱ�Ӱ���ʽ�������.ע������һ����abs����Ȼ�п��ܷ���Ϊ�����򲻻�����һ��
//	{
//		cout << temp.up / temp.down << ' ' << abs(temp.up) % temp.down << '/' << temp.down << endl;//������abs����Ϊ���temp.upС��0����ôǰ���������ʱ�Ѿ�����������ˣ�����������Ҫȫ����������
//	}
//	else {//�����ֱ���������
//		cout << temp.up << '/' << temp.down << endl;
//	}
//	system("pause");
//	return 0;
//}