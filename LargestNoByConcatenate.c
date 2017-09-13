#include <stdio.h>

int concatenate(int a, int b) 
{
    int pow = 10;
    while(b >= pow)
        pow *= 10;
    return a * pow + b;        
}

int findMax(int x,int y)
{
    return (x>y ? 1:2);
}

void swap(int *a, int *b)
{
    int temp1;
    temp1 = *a;
    *a = *b;
    *b = temp1;
}

void printArray(int no_array[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d",no_array[i]);
}

int main()
{
    int no_array[] = {59,58,5,1,2};
    int size = sizeof(no_array)/sizeof(no_array[0]);
    int x,y,max_idx,temp;
    
    for(int i=0;i<size-1;i++)
    {
        max_idx = i;
       for(int j=i+1;j<size;j++)
       {
           x = concatenate(no_array[i],no_array[j]);
           y = concatenate(no_array[j],no_array[i]);
           
           temp = findMax(x,y);
           if(no_array[max_idx] < no_array[j])
           {
               if(temp == 1)
                    max_idx = i;
               else
                    max_idx = j;
           }
       }
       swap(&no_array[i],&no_array[max_idx]);
    }
    printArray(no_array,size);
    return 0;
}