#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints.
 * @filename : file
 * @letters : is the number of letters
 * Return: the actual number of letters, read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t i = 0, j = 0;
int let;
char *buf;

buf = malloc(letters);
if (buf == NULL)
return (0);

if (filename == NULL)
return (0);
let = open(filename, O_RDONLY);

if (let == -1)
return (0);

i = read(let, buffer, letters);

if (i == -1)
return (0);

close(let);
j = write(STDOUT_FILENO, buf, i);
if (j == -1)
return (0);

return (j);
}
