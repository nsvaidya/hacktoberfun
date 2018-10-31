/*Sorting through merge sort algorithm*/
#include<stdio.h>
#include<conio.h>
void partition(int [],int,int);
void mergesort(int [], int, int, int);
void main()
{
	int a[100],i,size;
	clrscr();
	printf("\n Please Enter The Size of Array:	");
	scanf("%d",&size);
	printf("\n Enter Elements:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&a[i]);
	}
	partition(a,0,size-1);
	clrscr();
	printf("\n After Sorting:	");
	for(i=0; i<size; i++)
	{
		printf(" %d",a[i]);
	}
	getch();
}

void partition(int b[], int low, int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		partition(b,low,mid);
		partition(b,mid+1,high);
		mergesort(b,low,mid,high);
	}
}
void mergesort(int b[],int low,int mid,int high)
{
	int i, mi, k, lo, temp[50];
	lo=low;
	i=low;
	mi=mid+1;
	while ((lo<=mid)&&(mi<=high))
	{
		if(b[lo]<=b[mi])
		{
			temp[i]=b[lo];
			lo++;
		}
		else
		{
			temp[i]=b[mi];
			mi++;
		}
		i++;
	}
	if(lo>mid)
	{
		for (k=mi; k<=high; k++)
		{
			temp[i]=b[k];
			i++;
		}
	}
	else
	{
		for (k=lo; k<=mid; k++)
		{
			temp[i]=b[k];
			i++;
		}
	}
	for (k=low; k<=high; k++)
	{
		b[k]=temp[k];
	}
}