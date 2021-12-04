//toggle case of each character of a string
#include <stdio.h>
#define MAX_SIZE 100

void toggleCase(char * str);

int main()
{
	char str[MAX_SIZE];
	printf("\nEnter the string : ");
	scanf("%s", &str);
	toggleCase(str);
	printf("\nReplaced string after toggling characters : ");
	printf("%s\n", str);
	return 0;
}

void toggleCase(char * str)
{
	while(*str)
		{
			if(*str >= 'a' && *str <= 'z')
				*str = *str - 32;
			else if(*str >= 'A' && *str <= 'Z')
				*str = *str + 32;
			str++;
		}
}