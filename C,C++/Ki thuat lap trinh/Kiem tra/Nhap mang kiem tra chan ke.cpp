int KTraChanLe(int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]%2==0&&a[i+1]%2==0||a[i]%2!=0&&a[i+1]%2!=0)
		{
			
			return 0;
		}
	}
	return 1;
}
