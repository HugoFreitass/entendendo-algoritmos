#include <stdio.h>
#define TARGET 68

int main(){
    int array[] = {5, 10, 25, 53, 68, 72, 76, 81, 89, 97};
    int n = sizeof(array);
    int low = 0;
    int high = n-1;
    int target = TARGET;
    while(low <= high){
        int middle = (low + high)/2;
        int guess = array[middle];
        if(guess == target){
            printf("%d\n", middle);
            printf("%d \n", guess);
            return 0;
        }
        if(guess > target){
            high = middle;
        } else {
            low = middle;
        }
    }
    return 0;
}