void insertionSortRecursive(int *arr, int tail)
{
        if (tail == 0)
               return;

        insertionSortRecursive(arr, tail-1);

        int buffer = arr[tail];
        int j = tail;
        while ((j > 0) && (buffer < arr[j-1])) {
                j--;
                arr[j+1] = arr[j];
        }
        arr[j] = buffer;
}
