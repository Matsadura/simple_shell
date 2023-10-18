#include "main.h"

/**
 * error_cd - generates an error message
 * @BUF: the buffer that contains the message
 * @prg: the name of the program
 * @ncmd: number of consecutive commands
 * @dir: the path name of the directory
 */
void error_cd(char *BUF, char *prg, size_t ncmd, char *dir)
{
	char num[20], *delim = ": ", *err_cd = ": cd: can't cd to ";
	unsigned int l = 0, n = ncmd;

	while (n != 0)
	{
		num[l] = n % 10 + '0';
		n /= 10, l++;
	}
	num[l] = '\0';

	_strcpy(BUF, prg);
	_strcat(BUF, delim);
	_strcat(BUF, num);
	_strcat(BUF, err_cd);
	_strcat(BUF, dir);
	_strcat(BUF, "\n");

}
