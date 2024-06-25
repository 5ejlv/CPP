#include "ex3.h"

using namespace std;
void gammaCrypt(char* text, uint8_t gamma)
{
	int i = 0;
	while (true)
	{
		if (text[i] == '\0')
			return;
		text[i] ^= gamma;
		i++;
	}
}