#include "../../Searching/BinarySearch/bs.c"

void insertionSortBinarySearch(int *arr, int lenght)
{
        if (lenght <= 1)
                return;

        int buffer;
        int j;
        int position;
        for (int i = 1; i < lenght; i++) {
                buffer = arr[i];
                j = i;
                position = binarySearch(arr, buffer, 0, i); 
                while (j > position) {
                        arr[j] = arr[j-1]; 
                        j--;
                }
                arr[j] = buffer;
        }
}
