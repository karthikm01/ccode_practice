#include<stdio.h>
#include<math.h>
#define SIZE 4
int binsearch(int *p,int k,int start,int stop)
{
int i;
int mid=((stop-start)/2);
//printf("%d",mid);
if(k>*(p+start+mid))
{
binsearch(p,k,start+mid+1,stop);
}
else if(k<*(p+start+mid))
{
binsearch(p,k,start,start+mid-1);
}
else
{
return(start+mid);
}








/*for (i=0;i<SIZE;i++)
{
printf("%d\t",*(p+i));
}*/

}

void main()
{
int arr[SIZE];
int i,key;
printf("Enter array elements :\n");
	for(i=0;i<SIZE;i++)
	{
	scanf("%d",&arr[i]);
	}
printf("Enter search key\t :");
scanf("%d",&key);	
printf("%d",binsearch(arr,key,0,SIZE-1));
printf("\n");



}
