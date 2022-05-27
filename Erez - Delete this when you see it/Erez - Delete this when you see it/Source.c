#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

void main()
{
	char str[] = "This is a sentence,with;delimiters\nand some junk\t";
	strtok(str, " \n\t,;");
	strtok(NULL, "\n\t,;");
	strtok(NULL, "\n\t,;");
	strtok(NULL, "\n\t,;");
	strtok(NULL, "\n\t,;");
	strtok(NULL, "\n\t,;");
	strtok(NULL, "\n\t,;");
}