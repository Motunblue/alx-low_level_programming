#include "main.h"
#include <stdio.h>

void print_pos(int pos, int i);
void print_buff(char *buff, int size);

/**
 * print_buffer - prints the content of a buffer
 * @size: size of the buffer
*/
void print_buffer(char *b, int size)
{
	int i, j = 0, s = size;
	char buff[10];

	for (i = 0; i < size - 1; i++, j++)
	{
		if (i % 11 == 0)
		{
			print_pos(i, 6);
			_putchar(':');
		}
		if (i % 2 == 0)
			_putchar(' ');
		
		print_pos(b[i], 2);
		buff[j] = b[i];
		if (i % 9 == 0 && i != 0)
		{
			_putchar(' ');
			print_buff(buff, j);
			j = -1;
			_putchar('\n');
		}
		
	}
}

void print_pos(int pos, int i)
{
	int p;
	if (i <= 0)
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
			_putchar(p + '0');
		else
			_putchar(p - 10 + 'a');
	}

}

void print_buff(char *buff, int size)
{
	int i;

	for (i = 0; i < size; i++)
		_putchar(buff[i]);
}


int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

    printf("%s\n", buffer);
    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return (0);
}