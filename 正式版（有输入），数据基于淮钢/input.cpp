#include "paichan.h"

void paichan::input()
{
	cout << "请输入项目编号：" << endl;
	cin >> project;
	cout << "请输入每个砖的数量（按表格中的顺序，R,L型砖分开输入）：" << endl;
	for (int i = 0; i < 22; i++)
	{
		cin >> bricks[i].left_number;
	}
	cout << "请输入每个砖的重量（按表格中的顺序，R,L型砖分开输入）：" << endl;
	for (int i = 0; i < 22; i++)
	{
		cin >> bricks[i].weight;
	}
	cout << "请输入每个道次的最大生产量：" << endl;
	cin >> MAX_WEIGHT;
	cout << "请输入生产周期：" << endl;
	cin >> day;
}