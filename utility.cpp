template <class T>
void swap(T*a,int m,int n)
{
	T t=a[m];
	a[m]=a[n];
	a[n]=t;
}

template <class T>
void output(T*a,int n)
{
	for(int i=0;i<n;i++)
		std::cout<<a[i]<<" ";
	std::cout<<std::endl;
}


