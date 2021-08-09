#include <stdio.h>
#include <fcntl.h>

int main()
{
	printf("O_RDWR %d\n", O_RDWR);

	printf("%d\n", O_RDONLY);
	printf("%d\n", 1);
	printf("%d\n", 2);
	printf("%d\n", 3);
	printf("%d\n", 1 << 1);
	printf("%d\n", 3 & 2);
	printf("%d\n", 3 | 2);
	printf("%d\n", O_WRONLY);
	printf("%d\n", O_RDONLY + O_WRONLY);
	printf("%d\n", O_RDONLY | O_WRONLY);
	printf("%d\n", O_RDONLY & O_WRONLY);
	printf("%d\n", O_RDONLY && O_WRONLY);
	printf("%d\n", O_RDONLY << 1);
	printf("%d\n", O_WRONLY << 1);
	printf("%d\n", 0);
}
