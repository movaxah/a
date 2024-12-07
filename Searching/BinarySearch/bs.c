int binarySearch(int *arr, int x, int head, int tail) 
{
        int mid;
        while (head != tail) {
                mid = (head + tail) / 2;
                if (x == arr[mid]) {
                        return mid;
                } else if (x > arr[mid]) {
                        head = mid + 1; 
                } else if (x < arr[mid]) {
                        tail = mid;
                }
        }
        return head;
}
