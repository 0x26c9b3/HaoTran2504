float tong(int n)
{
	if (n==1)
	return 0;
	return tong(n-1)+(float)(n-1)/n;

}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%f",tong(n));
	return 0;
}
