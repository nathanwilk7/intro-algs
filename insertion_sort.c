#include <stdio.h>

// insertion_sort sorts the given array in nondecreasing order
void insertion_sort(int arr[], int len) {
  // i searches the sorted part of the array
  // j keep track of the edge of the sorted part of the array
  // key holds the thing we're currently inserting
  int i, j, key;
  // loop through everything but the first element
  for (j = 1; j < len; j++) {
    // svae the jth element
    key = arr[j];
    // set i to the rightmost sorted element
    i = j - 1;
    // while we're not past the end of the array and the thing we're looking at is bigger than the key
    while (i >= 0 && arr[i] > key) {
      // push this element to the irght
      arr[i + 1] = arr[i];
      // look at the next element
      i--;
    }
    // save the key in it's correct spot
    arr[i+1] = key;
  }
}


int main(int argc, char** argv) {
  int arr[] = {3, 1, 2};
  int len = 3;
  insertion_sort(arr, len);

  int i;
  for (i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
