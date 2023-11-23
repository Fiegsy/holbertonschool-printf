#include <unistd.h>

/**
<<<<<<< HEAD
 * _putchar - writes the character c to stdout
=======
 * _myputchar - writes the character c to stdout
>>>>>>> e2635f849d4367ef722098b188fee63443fd8292
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
<<<<<<< HEAD
int _putchar(char c)
=======
int _myputchar(char c)
>>>>>>> e2635f849d4367ef722098b188fee63443fd8292
{
	return (write(1, &c, 1));
}
