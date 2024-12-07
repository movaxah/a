void _combine(int *arr, int head, int mid, int tail)
{
        int llen = mid - head + 1;
        int rlen = tail - mid;

        int ltemp[llen]; 
        int rtemp[rlen];

        for (int i = 0; i < llen; i++)
                ltemp[i] = arr[head + i];
        for (int j = 0; j < rlen; j++) 
                rtemp[j] = arr[mid+j+1];

        int li = 0; 
        int ri = 0; 
        int oi = head; 
        while ((li < llen) && (ri < rlen)) {
                if (ltemp[li] <= rtemp[ri]) {
                        arr[oi] = ltemp[li];
                        li++;
                } else {
                        arr[oi] = rtemp[ri];
                        ri++;
                }
                oi++;
        }
        while (li < llen) {
                arr[oi] = ltemp[li];
                li++;
                oi++;
        }
        while (ri < rlen) {
                arr[oi] = rtemp[ri];
                ri++;
                oi++;
        }
}

void mergeSort(int *arr, int head, int tail)
{
        if (head >= tail) // if subarray is empty then head = 1, tail = 0 (cause mergeSort(arr,mid+1,tail))
               return;

        int mid = (head + tail) / 2 ;
        mergeSort(arr,head,mid);
        mergeSort(arr,mid+1,tail);
        _combine(arr,head,mid,tail);
}
