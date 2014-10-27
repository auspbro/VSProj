// blanks_tabs_lines.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int blanks, tabs, lines;
	int c;
	int done = 0;
	int lastchar = 0;

	blanks = 0;
	tabs = 0;
	lines = 0;
	while (done == 0)
	{
		c = getchar();

		if (c == ' ')
			++blanks;

		if (c == '\t')
			++tabs;

		if (c == '\n')
			++lines;

		if (c == EOF)
		{
			if (lastchar != '\n')
			{
				++lines;
			}
			done = 1;
		}
		lastchar = c;
	}
	printf("\nBlanks: %d\nTabs: %d\nLines: %d\n", blanks, tabs, lines);

	return 0;
}

