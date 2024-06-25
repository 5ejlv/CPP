#include <iostream>

#include "ex2.h"

using namespace std;

int getSimilarRowsCount(int** array, int N, int M)
{
	int count = 0;
	bool skip = false;
	for (int i = 0; i < M - 1; i++)
	{
		for (int c = 0; c < N; c++)
		{
			if (array[c][i] == array[i][M - 1])
				continue;
			skip = true;
			break;
		}
		if (skip)
		{
			skip = false;
			continue;
		}
		count++;
	}

	return count;
}