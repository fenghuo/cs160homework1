void f61 (int*arr,int n)
{
	if(n>1)
	{
		int s=1;
		int e=n-1;
		for(int i=s;i<=e;i++)
		{
			if(arr[i]<arr[0])
				swap<int>(arr,s++,i);
			else if(arr[i]>arr[0])
				swap<int>(arr,e--,i--);//crucial to decreasement
		}
		swap(arr,0,s-1);
	}
}

void s61(int * arr,int n)
{
	int p=arr[0];
	int s=0;
	int m=0;
	int l=n-1;
	while(m<=l)
	{
		if(arr[m]<p)
			swap(arr,s++,m++);
		else if (arr[m]==p)
			m++;
		else
			swap(arr,l--,m);
	}

}
