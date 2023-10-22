void heapify(int arr[], int n, int i){
    int left=2*i + 1, right=2*i + 2, large=i;
    if(left<n && arr[large]<arr[left])    large=left;
    if(right<n && arr[large]<arr[right])   large=right;
    if(arr[large] != arr[i]){
        swap(&arr[large], &arr[i]);
        heapify(arr, n, large);
    }
    return;
}

// Main function to do heap sort
void buildHeap(int arr[], int n) {
    for(auto i=(n/2)-1; i>=0; i--){
        heapify(arr, n, i);
    }
    for(auto last=n-1; last>=0; last--){
        swap(&arr[0], &arr[last]);
        heapify(arr, last, 0);
    }
    return;
}
