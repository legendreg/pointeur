void mystrreplacechar (char *str[],const char c1,const char c2)
{
	int i;
	i = 0;
	char a;
	char b;
	b = c1;
	a = c2;
	while ((*str)[i] != '\0')
	{
		if((*str)[i] == a)
		{
			(*str)[i] = b;
		}
		i = i+1;
	}
} 
