#include <stdio.h>
#define TARGET 76

int binarySearch(int* array, int size, int target){
    int low = 0;
    int high = size-1;
    while(low <= high){
        int middle = (low + high)/2;
        int guess = array[middle];
        if(guess == target){
            return middle;
        }
        if(guess > target){
            high = middle-1;
        } else {
            low = middle+1;
        }
    }
    return -1;
}

int main(){
    int array[] = {5, 10, 25, 53, 68, 72, 76, 81, 89, 97};
    int size = sizeof(array)/sizeof(array[0]);
    printf("%d\n\n", binarySearch(array, size, TARGET));
    
    return 0;
}