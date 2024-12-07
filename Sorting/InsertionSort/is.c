void insertionSort(int *arr, int lenght)
{
        if (lenght <= 1)
                return;

        int buffer;
        int j;
        for (int i = 1; i < lenght; i++) {
                buffer = arr[i];
                j = i;
                while ((j > 0) && (buffer < arr[j-1])) {
                        j--;
                        arr[j+1] = arr[j];
                }
                arr[j] = buffer;
        }
}
