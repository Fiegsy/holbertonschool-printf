#include "main.h"

/** 
 * print_num - print decimale
 * @arg: arguments
 * Return: sucess
 */
int print_num(va_list args)
{
	int decimal = 1;
	int cmp = 0;
	long int num = va_arg(args, int);
	long int digit;

	if (num < 0)
	{
		cmp += _myputchar('-');
		num *= -1;
	}
	if (num < 10)
		return (cmp += _myputchar(num + '0'));
	digit = num;
	while (digit > 9)
	{
		decimal *= 10;
		digit /= 10;
	}
	while (decimal >= 1)
	{
		cmp += _myputchar(((num / decimal) % 10) + '0');
		decimal /= 10;
	}
	return (cmp);
}
