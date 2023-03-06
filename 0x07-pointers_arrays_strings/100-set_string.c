#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: the pointer to change.
 * @t: the value to change the pointer to.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
