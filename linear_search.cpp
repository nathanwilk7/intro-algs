#include <iostream>

int linear_search (int A[], int len, int v) {
  for (int i = 0; i < len; i++)
    if (A[i] == v)
      return i;
  return -1;
}

int main (int argc, char** argv) {
  int arr[] = {8, 2, 9, 1, 10};
  int len = 5;
  int v = 10;
  std::cout << linear_search(arr, len, v) << std::endl;
}
