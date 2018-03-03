main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int num,limit;
		printf("\n");
		scanf("%d%d",&num,&limit);
		int a[50];
		int i;
		for(i=0;i<num;i++)
		{
		scanf("%d",&a[i]);
	   }
	   int j;
	   int temp;
	   for(i=0;i<num;i++)
	   {
	   	for(j=i+1;j<num;j++)
	   	{
	   		if(a[i]>a[j])
	   		{
	   			temp=a[i];
	   		a[i]=a[j];
	   		a[j]=temp;
			   }
		}
	   }
	   
	   for(i=num-1;i>limit;i--)
	   {
	   		printf("%d\t",a[i]);
	   }
 }
return 0;
}
