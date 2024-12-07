int linearSearch(int *arr, int lenght, int x)
{
        if (lenght == 1)
                return 0;
        for (int i = 0; i < lenght; i++){
                if (arr[i] == x)
                        return i;
        }
        return -1;
}
