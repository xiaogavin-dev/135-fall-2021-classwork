#include <iostream> 

int main() {
    int arr[] = { 95, 1, 16, 25, 46, 100, 105, 140, 64, 2, 40, 10 }; 
    int temp; 

    for(int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)  { 
        for(int j = i; j >= 0; j--) { 
            if(arr[j] < arr[j - 1]) { 
                temp = arr[j];
                arr[j] = arr[j - 1]; 
                arr[j - 1] = temp;  
            }
        }
    }

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) { 
        std::cout << arr[i] << std::endl;
    }
}