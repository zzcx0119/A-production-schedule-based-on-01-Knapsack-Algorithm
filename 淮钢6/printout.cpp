#include"paichan.h"

void paichan::printout(int n, int max, ofstream& outFile)
{
    for (int i = 0; i < n; i++)
    {
        outFile << bricks[i].chosen_time << " ";
    }
    outFile << endl;
}