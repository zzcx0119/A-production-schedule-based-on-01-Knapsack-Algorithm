#include"planning.h"

void paichan::input()
{
	cout << "请输入项目编号：" << endl;
	cin >> project;
	cout << "请输入杯底砖的种数：" << endl;
	cin >> dnum;
	cout << "请输入杯壁砖的种数：" << endl;
	cin >> bnum;
	cout << "请输入封底砖的种数：" << endl;
	cin >> fnum;
	sum = dnum + bnum + fnum;
	cout << "请输入每个砖的数量（按前面的顺序，R,L型砖分开输入）" << endl;
	for (int i = 0; i < sum; i++)
	{
		cin >> bricks[i].left_number;
	}
	cout << "请输入每个砖的重量（按前面的顺序，R,L型砖分开输入）" << endl;
	for (int i = 0; i < sum; i++)
	{
		cin >> bricks[i].weight;
	}
	cout << "请输入每个道次的最大生产总量：" << endl;
	cin >> MAX_WEIGHT;
	cout << "请输入生产周期：" << endl;
	cin >> day;
}