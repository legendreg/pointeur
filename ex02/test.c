int main (void)
{
	int n = 1;
	int **p = &&n;
	printf("%d",**p);	
	return(0);
}
