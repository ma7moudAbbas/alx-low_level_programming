#include <stdio.h>
int _isupper(int c)
{
	if(c >= 'A' && c <= 'B')
		return 1;
	else
		return 0;
}

int main()
{
	char c;
    	c = 'A';
    	printf("%c: %d\n", c, _isupper(c));
    	c = 'a';
    	printf("%c: %d\n", c, _isupper(c));
    	return (0);
}

