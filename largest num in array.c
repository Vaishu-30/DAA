#include<stdio.h>
int main()
{
	int array[5]={1,2,8,9,6};
	int loop,largest;
	largest=array[0];
	for(loop=1;loop<5;loop++)
	{
		if(largest<array[loop])
		largest=array[loop];
	}
	printf("largest element of array is %d",largest);
	return 0;
}
