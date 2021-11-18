void execute(int arr[], int size) {
    int x = size; 

    for(int i = x / 2 - 1; i >= 0; i--) { 
        func(arr, x, i); 
    }

    for(int i = x - 1; i >= 0; i--) { 
        // Move current to last 
        int temp = arr[0]; 
        arr[0] = arr[i]; 
        arr[i] = temp; 

        func(arr, i, 0);
    }
}