#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

int safe_close(int);
/**
 * main - main function to copy files
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	int bytes_read = 0, _EOF = 1, from_fd = -1, to_fd = -1, error = 0;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			       	argv[1]);
		exit(98);
	}
	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, permissions);
	if (to_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		safe_close(from_fd);
		exit(99);
	}

	while (_EOF)
	{
		_EOF = read(from_fd, buffer, BUFFER_SIZE);
		if (_EOF < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					argv[1]);
			safe_close(from_fd);
			safe_close(to_fd);
			exit(98);
		}
		else if (_EOF == 0)
			break;
		bytes_read += _EOF;
		error = write(to_fd, buffer, _EOF);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]);
			safe_close(from_fd);
			safe_close(to_fd);
			exit(99);
		}
	}
	error = safe_close(to_fd);
	if (error < 0)
	{
		safe_close(from_fd);
		exit(100);
	}
	error = safe_close(from_fd);
	if (error < 0)
		exit(100);
	return (0);
}

/**
 * safe_close - A function that closes a file and prints error
 * when closed file
 * @description: Description error for closed file
 * Return: 1 on success, -1 on failure
 */
int safe_close(int description)
{
	int error;

	error = close(description);
	if(error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);
	return (error);
}


