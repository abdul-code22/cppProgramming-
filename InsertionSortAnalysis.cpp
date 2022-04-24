#include <stdio.h>
#include <time.h>
void insertionSort(int arr[], int n){
int key, j;
for (int i = 1; i < n; ++i){
key = arr[i];
j = i - 1;
while(arr[j] > key && j >= 0){
arr[j+1] = arr[j];
j--;
}
arr[j+1] = key;
}
return;
}
int main(void){
int n;
printf("Number of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter the %d elements: \n", n);
for (int i = 0; i < n; ++i){
scanf("%d",&arr[i]);
}
clock_t begin = clock();
insertionSort(arr, n);
clock_t end = clock();
printf("\nSorted Array: ");
for (int i = 0; i < n; ++i){
printf("%d ",arr[i]);
}
double runningTime = ((double)(end - begin))/CLOCKS_PER_SEC;
printf("\nRunning Time: %lf sec", runningTime);
return 0;
}