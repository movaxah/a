#include "../../Sorting/MergeSort/ms.c"

int SumSearch(int *arr, int lenght, int x)
{
        mergeSort(arr, 0, lenght-1); 
        
        int head = 0;
        int tail = lenght - 1;
        int sum;
        while (head != tail) {
               sum = arr[head] + arr[tail];
               if (sum == x) {
                       return 1;
               } else if (sum > x) {
                       tail--;
               } else {
                       head++;
               }
        }
        return 0;
}
