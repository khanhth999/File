#include <stdio.h>
#include "windows.h"
 
#pragma comment(lib, "winmm.lib")
 
void main()
{
	bool isPlay = PlaySound(L"STDIO_SOUND_LOGO.wav", NULL, SND_FILENAME);
 
	if (isPlay)
	{
		printf("This sound can be played");
	}
}
