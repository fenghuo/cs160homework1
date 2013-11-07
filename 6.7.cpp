int f67(int * arr,int n)
{
	int L=1;
	int last=0;
	while(last<n)
	{
		int r=last+L;
		int j;
		for(j=r;j>last;j--)
		{
			if(arr[j]<arr[j-1])
				break;
			
		}
		if(j==last)
		{
			while(r<n)	//if r++ first, will lead to over array
			{
				if(arr[r]<arr[r-1])
					break;
				r++;
			}
			L=r-last;
			last=r;
		}
		else
		{
			last=j;	
		}
		
		std::cout<<r<<std::endl;
	}
	return L;
}
