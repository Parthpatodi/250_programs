//string char case change 
#include <stdio.h>
#define MAX_SIZE 100

void charCase(char * str);

int main()
{
	char str[MAX_SIZE];
	printf("\nEnter the string : ");
	scanf("%s", &str);
	charCase(str);
	printf("\nReplaced string after toggling characters : ");
	printf("%s\n", str);
	return 0;
}

void charCase(char * str)
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