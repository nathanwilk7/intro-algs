#include <stdio.h>

void insertion_sort (int arr[], int len) {
  int j, key, i;
  // loop through unsorted part of array
  for (j = 1; j < len; j++) {
    // the key is what we're inserting
    key = arr[j];
    // i is the rightmost sorted element
    i = j - 1;
    // while we're not past the end of the array and the element we're looking at is bigger than the key
    while (i >= 0 && arr[i] > key) {
      // slide the element right and look at the next one
      arr[i + 1] = arr[i];
      i--;
    }
    // put the key in the right spot
    arr[i + 1] = key;
  }
}

int main (int argc, char** argv) {
  int arr[] = {6, 3, 7, 2, 1};
  int len = 5;
  insertion_sort(arr, len);
  
  int i;
  for (i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
