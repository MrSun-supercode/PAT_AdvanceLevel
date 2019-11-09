//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<map>
//#include<vector>
//using namespace std;
//struct node {//学校结构体
//	int Ascore=0;//记录所有A级的得分
//	int Bscore = 0;//记录所有B级的得分
//	int Tscore = 0;//记录所有T级的得分
//	int Xscore;//总分
//	string name;
//	int num = 0;//参加考试的人数
//};
//map<string, node>P;
//vector<node>V;
//bool cmp(node a, node b)
//{
//	if (a.Xscore!=b.Xscore)
//	{
//		return a.Xscore > b.Xscore;
//	}
//	else if (a.num!=b.num)
//	{
//		return a.num < b.num;
//	}
//	else return a.name < b.name;
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		string id,name;
//		int score;
//		cin >> id >> score >> name;
//		transform(name.begin(), name.end(), name.begin(), ::tolower);//转换成小写   
//		P[name].name = name;
//		if (id[0]=='A')
//		{
//			P[name].Ascore += score;
//			P[name].num++;			
//		}
//		else if (id[0] == 'B')
//		{
//			P[name].Bscore += score;
//			P[name].num++;
//		}
//		else {
//			P[name].Tscore += score;
//			P[name].num++;
//		}
//	}
//	for (auto it = P.begin(); it != P.end(); it++)
//	{
//		it->second.Xscore = int(it->second.Bscore / 1.5) + it->second.Ascore + int(it->second.Tscore*1.5);
//		node temp;
//		temp.Xscore = it->second.Xscore;
//		temp.Ascore = it->second.Ascore;
//		temp.Bscore = it->second.Bscore;
//		temp.Tscore = it->second.Tscore;
//		temp.name = it->second.name;
//		temp.num = it->second.num;
//		V.push_back(temp);
//	}
//	sort(V.begin(), V.end(), cmp);
//	int rank = 1,i;
//	int cnt = 1;
//	cout << V.size() << endl;
//	for (i = 0; i < V.size()-1; i++)
//	{
//		cout << rank << ' ' << V[i].name << ' ' << V[i].Xscore << ' ' << V[i].num << endl;
//		if (V[i].Xscore==V[i+1].Xscore)
//		{
//			cnt++;
//		}
//		else {
//			rank += cnt;//正确的rank排名，同名时rank一样，此时rank不增加，不同名次时rank+=cnt，cnt为同名的个数，初始是1
//			cnt = 1;
//		}
//	}
//	cout << rank << ' ' << V[i].name << ' ' << V[i].Xscore << ' ' << V[i].num << endl;
//	system("pause");
//	return 0;
//}