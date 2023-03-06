/**
 * _putchar - writes the character c to stdout
 */
int _putchar(char c);

/**
 * *_memset - function that fills memory with a constant byte
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * *_memcpy - function that copies memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * *_strchr - function that locates a character in a string
 */
char *_strchr(char *s, char c);

/**
 * int _strspn - function that gets the length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept);

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 */
char *_strpbrk(char *s, char *accept);

/**
 * *_strstr - function that locates a substring
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - function that prints the chessboard
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers
 */
void print_diagsums(int *a, int size);
