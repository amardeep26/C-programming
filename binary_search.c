#include<stdio.h>
int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

int main
{    int num,x;
 do{
 
      printf("enter how many no. you want:- ");
      scanf("%d",&num);
    int arr[num];
    printf("enter element in sorted form\n");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
  printf("enter element to search");
   scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x);
   if(result == -1) printf("Element is not present in array");
   else printf("Element is present at index %d\n",result);
     printf("\nenter '0' to exit OR '1' to contineus :- ");
     scanf("%d",&x);
 }while(x);   
  return 0;
}
