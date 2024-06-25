#include "ex3.h"

using namespace std;
void filterText(char* text)
{
	int i = 0;
	int ic = 0;
	unsigned char* newText = new unsigned char[4096];
	while (true)
	{
		if (text[i] == '\0')
			break;
		if ((unsigned char)text[i] >= 0xC0 || (unsigned char)text[i] == 0xA8 || (unsigned char)text[i] == 0xB8 || (unsigned char)text[i] == 0x00 || (unsigned char)text[i] == 0x20)
		{
			newText[ic] = text[i];
			ic++;
		}
		i++;
	}
	newText[ic] = '\0';
	memcpy(text, newText, 4096);

}