#include"planning.h"


bool paichan::is_success()
{
	for (int i = 0; i < sum; i++)
	{
		if (bricks[i].left_number != 0)
		{
			return false;
		}
	}
	return true;
}