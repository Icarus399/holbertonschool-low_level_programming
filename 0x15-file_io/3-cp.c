
#include "main.h"
/**
 * main - copies the content of a file into another
 * @argc: fisrst argument
 * @argv: 2nd argument
 * Return: cont of file
 */
int main(int argc, char *argv[])
{
	int from, to, _read, _write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file from file to\n"), exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);

	do {
		_read = read(from, buffer, 1024);
		if (_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
				exit(98);
		_write = write(to, buffer, _read);
		if (_write == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
				exit(99);
	} while (_read >= 1024 && _read >= 0);

	if (close(from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]),
			exit(100);
	if (close(to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]),
			exit(100);
	return (0);
}
