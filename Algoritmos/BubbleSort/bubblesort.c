#include <stdio.h>

void bubbleSort(int lengthOfArray, int array[]) {
    for (int i = 0; i < lengthOfArray - 1; i++) {
      for (int j = 0; j < lengthOfArray - i - 1; j++) {
        if (array[j] > array[j + 1]) {
          int temp = array[j];
          array[j] = array[j + 1];
          array[j + 1] = temp;
        }
      }
    }
}


void main(){

    int array[] = {5, 10, 95, 87, 100, 123, 1, 0 , -53 , -9874, (125 + 102)};
    
    int sizeOfArray = sizeof(array) / sizeof(int);

    bubbleSort(sizeOfArray, array);
    
    for(int i = 0; i < sizeOfArray; i++){
        printf("%d\n", array[i]);
    }
}