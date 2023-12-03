#include <stdio.h>
#include <fcntl.h>


void error(void)
{
	printf("Error");
	exit(98);
}

/**
 * main -  displays the information contained in the ELF header
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
*/
int main(int argc, char *argv[])
{
	int fd;
	char buff[1024];

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error();
	if (!(buff[0] == 0x7f && buff[1] == 'E' && buff[2] == 'L' && buff[3] == 'F'))
		error();
        
}
