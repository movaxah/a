void selectionSort(int *arr, int lenght)
{
        if (lenght <= 1)
                return;

        int buffer;
        int j;
        int min;
        int minIndex;

        for (int i = 0; i < (lenght - 1); i++) {
                buffer = a[i]; 
                j = i + 1;
                min = a[j];
                minIndex = j;
                while (j < lenght) {
                        if (a[j] < min) {
                                min = a[j];
                                minIndex = j;
                        }
                        j++;
                }
                a[i] = min;
                a[minIndex] = buffer;
        }
}
