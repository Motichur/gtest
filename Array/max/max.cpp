int maximum(int *ar,int n)
{
	int max;
	max = *(ar+0);
	for(int i=0;i<n;i++)
	{
		if(max<*(ar+i))
		{
			max = *(ar+i);
		}
	}
	return max;
}
