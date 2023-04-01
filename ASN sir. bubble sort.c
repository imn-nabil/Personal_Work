// Bubble sort in C

#include <stdio.h>

// perform the bubble sort
void bubbleSort(int array[], int size) {

    // loop to access each array element
    for (int step = 1; step < size ; ++step) {

        // loop to compare array elements
        for (int i = 1; i <= size - step; ++i) {

            // compare two adjacent elements
            // change > to < to sort in descending order
            if (array[i-1] > array[i]) {

                // swapping occurs if elements
                // are not in the intended order
                int temp = array[i-1];
                array[i-1] = array[i];
                array[i] = temp;
            }
        }
    }
}

// print array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {-2, 45, 0, 11, -9};

    // find the array's length
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    printf("Sorted Array in Ascending Order:\n");
    printArray(data, size);
}
