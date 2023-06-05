#include<stdio.h> 
#include<time.h>
void insertion_sort(int[],int); 
void Display(int[],int);
int main()
{
    clock_t now,later;

    int Array[] = {4,51,2,3,6,7,8,9,103,34,178,23,56,0,67};


    int length_Array = sizeof(Array)/sizeof(Array[0]); printf("Unsorted Array\n\n"); 
    Display(Array,length_Array);
    now = clock(); insertion_sort(Array,length_Array);
    later = clock() - now; printf("Sorted Arrray\n\n"); 
    Display(Array,length_Array);
    printf("\nTime Taken to Sort : %0.10f Seconds\n",(float)later/CLOCKS_PER_SEC); 
    return 0;
}

void insertion_sort(int Array[],int length)
{
    int i,index;
    long long int key;
    for(i = 1;i < length;i++)
    {
 
        key = Array[i]; index = i-1;
        while(key < Array[index] && index >= 0)
        {
            Array[index+1] = Array[index]; index--;
        }
    Array[index+1] = key;
    }
}

void Display(int Array[],int length)
{
    int i =0; for(;i<length;i++)
    {
        printf("%d\t",Array[i]);
    }
    printf("\n\n");
}
