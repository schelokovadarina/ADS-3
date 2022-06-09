// Copyright 2021 NNTU-CS
int cbinsearch(int* arr, int size, int value) {
  int count = 0, i = 0, j = size - 1;
  int mid = i + (j - i) / 2;
  for (int i = 0; i < mid; i++) {
    if (arr[i] == value)
    count++;
  }
  for (int j = size; j >= mid; j--) {
    if (arr[j] == value)
   count++;
  }
  return count;
}
