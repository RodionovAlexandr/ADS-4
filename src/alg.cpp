// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int elem = 0;
    int how = 0;
    for (int i = 0; i <= len; i++) {
        elem = *(arr + i);
        for (int id = i + 1; id <= len; id++) {
            if (elem + *(arr + id) == value)
                how += 1;
        }
    }
    return how;
  return 0;
}
int countPairs2(int *arr, int len, int value) {
  int how = 0;
  int end = len - 1;
  for (int i = len; i > 0; i--) {
    if (arr[end] > value) {
        end--;
    }
}
for (int beg = 0; beg < end; beg++) {
    for (int i = end; beg < i; i--) {
        if (arr[beg] + arr[i] == value) {
            how++;
        }
    }
    if (arr[beg] != arr[beg + 1]) {
       end--;
    }
}
return how;
return 0;
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
