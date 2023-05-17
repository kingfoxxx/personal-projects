#include "shell.h"

/**
 * get_sigint - crtl + c call in prompt
 * @sig: Signal
 */
void get_sigint(int signals)

{
	(void)signals;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
