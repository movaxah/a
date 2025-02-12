void BubbleSort(int *arr, int lenght)
{
        int buffer;
        for (int i = 0; i < lenght; i++) {
                for (int j = lenght - 1; j > i; j--) {
                        if (arr[i] > arr[j]) {
                                buffer = arr[i];
                                arr[i] = arr[j];
                                arr[j] = buffer;
                        }
                }
        }
}
