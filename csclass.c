#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int arr[n]; //Array declaration
	
	//Taking input at array
	printf("Enter elements: ");
	for(int i=0;i<=n-1;i++)
		scanf("%d",&arr[i]);
	
	//Display array
	printf("Enter elements are: \n");
	for(int i=0;i<=n-1;i++)
		printf("%u %d \n", &arr[i], arr[i]); //u for unsigned, to display address
	
	
	printf("%d\n",sizeof(arr)); //Total array size
	
	printf("%d\n",sizeof(arr[n-1])); //A particular size
printf("%d",sizeof(arr)/sizeof(arr[n-1]));
    return 0;
}