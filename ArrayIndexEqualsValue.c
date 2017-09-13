#include <stdio.h>

void compute(int no_array[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(i == no_array[i])
            printf("The number %d equals to its index %d\n",no_array[i],i);
    }
}

int main()
{
    int size;
    scanf("%d",&size);
    
    int no_array[size];
    for(int i=0;i<size;i++)
        scanf("%d",&no_array[i]);
        
    compute(no_array,size);
    
    return 0;
}
