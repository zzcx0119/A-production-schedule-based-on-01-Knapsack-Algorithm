#include"planning.h"

void paichan::getprice(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i>0 && bricks[i].rl == "R" && bricks[i].left_number <= 0)
        {
            bricks[i - 1].flag = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        bricks[i].price = bricks[i].left_number * bricks[i].flag;
    }
}
void paichan::clear(int n)
{
    for (int i = 0; i < n; i++)
    {
        bricks[i].chosen_time = 0;
    }
}

void paichan::initialize()
{
    for (int i = 0; i < dnum; i++)
    {
        bricks[i].type = "D";
        int t = i;
        bricks[i].order = t;
    }
    for (int i = dnum; i < dnum+bnum; i++)
    {
        bricks[i].type = "B";
        int t = i - dnum;
        bricks[i].order = t;
        //if (i < dnum + bnum && bricks[i].left_number == bricks[i + 1].left_number)
        //{
        //    bricks[i].rl = "R";
        //}
        //if (i > dnum && bricks[i].left_number == bricks[i - 1].left_number)
        //{
        //    bricks[i].rl = "L";
        //}
    }
    for (int i = dnum + bnum; i < sum; i++)
    {
        bricks[i].type = "F";
        int t = i- (dnum + bnum);
        bricks[i].order = t;
    }
    for (int i = 0; i < sum; i++)
    {
        bricks[i].num = i;
    }
    for (int i = 0; i < sum; i++)
    {
        if (bricks[i].rl == "L")
        {
            bricks[i].flag = 0;
        }
    }
}