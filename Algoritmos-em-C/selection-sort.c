#include <stdio.h>
#include <stdlib.h> //por causa do malloc

int searchMinor(int* array, int size){
    int minor = array[0];
    int index = 0;
    for(int i = 1; i < size; i++){
        if(array[i] < minor){
            minor = array[i];
            index = i;
        }
    }
    return index;
}

int* selectionSort(int* array, int size){
    int* sortedArray = (int*) malloc(size * sizeof(int)); // malloc retorna um ponteiro void sempre, (int*) faz o cast para inteiro
    int originalSize = size;

    for(int s = 0; s < originalSize; s++){
        int index = searchMinor(array, size);
        sortedArray[s] = array[index];

        for(int i = index; i < size; i++){ //retira o número buscado do array original, por meio do ponteiro
            array[i] = array[i+1]; 
        } 
        array[size-1] = 0;
        size--;
    } 
    return sortedArray;
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
    int unsortedSampleArray[] = {1, 15, 2, 1, 41, 524, 10, 12, 3, 4, 2, 7, 27, 18, 90, 0, 2, 115, 25, 32, 45, 50};
    int n = sizeof(unsortedSampleArray)/sizeof(unsortedSampleArray[0]);

    int* sortedArray = selectionSort(unsortedSampleArray, n);
    printArray(sortedArray, n);
    
    free(sortedArray); //libera a memória alocada por malloc
    sortedArray = NULL;
    return 0;
}