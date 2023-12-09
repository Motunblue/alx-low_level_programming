#include "main.h"

void print_pos(int pos, int i);

/**
 * print_buffer - prints the content of a buffer
 * @size: size of the buffer
*/
void print_buffer(char *b, int size)
{
	int i, s = size;
	int buff[10];

	for (i = 0; i < size; i++)
	{
		if (i % 10 == 0)
			print_pos(i, 6);

		_putchar('\n');
	}
}

void print_pos(int pos, int i)
{
	int p;
	if (i < 0)
		return;
	
	if (pos <= 0)
	{
		_putchar('0');
		print_pos(0, i - 1);
	}
	else
	{
		print_pos((pos / 16), i - 1);
		p = pos % 16;
		if (p < 10)
			_putchar((pos % 10) + '0');
		else
			_putchar((pos % 10) - 10 + 'a');
	}

}

int main(void)
{
	print_pos(9, 5);
	return(0);
}