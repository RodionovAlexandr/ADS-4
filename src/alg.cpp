// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        count++;
      }
    }
  }
  return count;
}
int countPairs2(int *arr, int len, int value) {
  int how = 0;
  for (int i = 0; i < len; i++) {
    if (arr[i] <= value) {
      for (int j = i + 1; j < len; j++) {
        if (arr[i] + arr[j] == value) {
          how++;
        }
      }
    }
  }
  return how;
}
int countPairs3(int *arr, int len, int value) {
    int how = 0;
    int half = value / 2;
    int searchelement;
    int end = len;
    int beg = 0;
    int middle;
    while (beg < end) {
        middle = (beg + end) / 2;
        if (arr[middle] > value) {
            end = middle;
        } else {
            beg = middle + 1;
        }
    }
    for (int i=0; arr[i] <= half; i++) {
        beg = i + 1;
        searchelement = value - arr[i];
        while (beg < end) {
            middle = (beg + end) / 2;
            if (arr[middle] < searchelement) {
                beg = middle + 1;
            } else {
                end = middle;
            }
        }
        while (arr[beg] == searchelement) {
            how++;
            beg++;
        }
    }
    return how;
}
