#include <stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    scanf("%d",&size);
    
    if(size > 0)
    {
        int no_array[size];
        for(int i=0;i<size;i++)
            scanf("%d",&no_array[i]);
        
        for(int i=0;i<size;i++)    
        {
            if(no_array[abs(no_array[i])] >= 0)
                no_array[abs(no_array[i])] = -no_array[abs(no_array[i])];
            else
                printf("%d\t",abs(no_array[i]));
        }
    }
    else
        printf("Enter valid size for array");
    return 0;
}