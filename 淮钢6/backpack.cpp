#include"paichan.h"
void paichan::backpack(int n, int maxnum, ofstream& outFile1)
{
	int c = MAX_WEIGHT;
	vector<int> weight;
	vector<int> price;
	vector<string> name;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int x = bricks[i].weight;
		if (bricks[i].left_number == 0)
		{
			continue;
		}
		if (bricks[i].left_number < maxnum)
		{
			for (int j = 0; j < bricks[i].left_number; j++)
			{
				weight.push_back(x);
			}
			sum += bricks[i].left_number;
		}
		else
		{
			for (int j = 0; j < maxnum; j++)
			{
				weight.push_back(x);
			}
			sum += maxnum;
		}
	}
	for (int i = 0; i < n; i++)
	{
		int x = bricks[i].price;
		if (bricks[i].left_number == 0)
		{
			continue;
		}
		if (bricks[i].left_number < maxnum)
		{
			for (int j = 0; j < bricks[i].left_number; j++)
			{
				price.push_back(x);
			}
		}
		else
		{
			for (int j = 0; j < maxnum; j++)
			{
				price.push_back(x);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		string x = bricks[i].type;
		if (bricks[i].left_number == 0)
		{
			continue;
		}
		if (bricks[i].left_number < maxnum)
		{
			for (int j = 0; j < bricks[i].left_number; j++)
			{
				name.push_back(x);
			}
		}
		else
		{
			for (int j = 0; j < maxnum; j++)
			{
				name.push_back(x);
			}
		}
	}


	vector<vector<int>> dp(sum + 1, vector<int>(c + 1, 0));
	for (int time = 0; time < 10; time++)
	{
		int total_weight = 0;
		getprice(n);
		outFile1 << "第" << time + 1 << "次道次选择:";
		for (int i = 0; i <= sum; i++)
		{
			dp[i][0] = 0;
		}
		for (int i = 0; i <= c; i++)
		{
			dp[0][i] = 0;
		}
		for (int i = 1; i <= sum; i++)
		{
			for (int j = 1; j <= c; j++)
			{
				int m = dp[i - 1][j];
				int l = 0;
				if (weight[i - 1] > j)
				{
					l = m;
				}
				else
				{
					int remain = j - weight[i - 1];
					l = dp[i - 1][remain] + price[i - 1];
				}
				dp[i][j] = max(m, l);
			}
		}
		//cout << "最大价值为：" << dp[sum][c] << endl;
		//cout << "所选编号为：";
		int t_n = sum, t_c = c;
		while (t_n > 0 && t_c > 0)
		{
			if (dp[t_n][t_c] != dp[t_n - 1][t_c])
			{
				t_c = t_c - weight[t_n - 1];
				outFile1 << name[t_n - 1] << " ";
				sum--;
				for (int j = 0; j < n; j++)
				{
					if (bricks[j].type == name[t_n - 1])
					{
						if (time < 5)
						{
							if (bricks[j].left_number >= 2)
							{
								bricks[j].left_number -= 2;
								bricks[j].chosen_time += 2;
							}
							else
							{
								bricks[j].chosen_time += bricks[j].left_number;
								bricks[j].left_number = 0;							
							}							
						}
						else
						{
							if (bricks[j].left_number >= 1)
							{
								bricks[j].left_number -= 1;
								bricks[j].chosen_time += 1;
							}
							else
							{
								bricks[j].chosen_time += bricks[j].left_number;
								bricks[j].left_number = 0;							
							}
						}
						total_weight += bricks[j].weight;
					}
				}

				name.erase(name.begin() + t_n - 1);
				weight.erase(weight.begin() + t_n - 1);
				price.erase(price.begin() + t_n - 1);

				t_n--;
			}
			else
			{
				t_n--;
			}
		}
		outFile1 << "      " << "总重(kg)：" << total_weight;
		outFile1 << endl;
	}
}