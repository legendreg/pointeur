#include<stdio.h>
int main (void)
{
	char* str = strdup("fghfghfgh");
	mystrreplacechar(&str,'f','g');
	printf("%s\n",str);
	return(0);


}
