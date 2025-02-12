int binarySearchRecursive(int *arr, int x, int head, int tail) 
{

        if (head == tail) {
                return head;
        } else {
                int mid = (head + tail) / 2;
                if (x == arr[mid]) {
                        return mid;
                } else if (x > arr[mid]) {
                        head = mid + 1;
                        return binarySearchRecursive(arr, x, head, tail);
                } else if (x < arr[mid]) {
                        tail = mid;
                        return binarySearchRecursive(arr, x, head, tail);
                }
        }
}
