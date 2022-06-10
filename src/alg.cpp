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
  int end = len;
  int beg = 0;
  int elem1 = 0;
  int elem2 = 0;
  int how = 0;
  int middle = 0;
  int b = 0;
  while (beg < end) {
      elem1 = *(arr + beg);
      elem2 = *(arr + end);
      if (elem1 + elem2 < value) {
          beg += 1;
      }
       if (elem1 == elem2 && elem1 + elem2 == value) {
            middle = end;
            while (middle > beg) {
                middle -= 1;
                how += 1;
            }
            beg += 1;
       } else {
          if (elem1 + elem2 == value) {
              how += 1;
              b += 1;
                if (elem2 != *(arr + end - b)) {
                    beg += 1;
                    b = 0;
                }
          }
          }
          if (elem1 + elem2 > value) {
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
        mid = (beg + end) / 2;
        if (*(arr+middle) > value) {
            end = middle;
        }
        else {
            beg = middle + 1;
        }
    }
    for (int i; *(arr+i) <= half; i++) {
        beg = i + 1;
        searchelement = value - *(arr+i);
        while (beg < end) {
            int middle = (beg + end) / 2;
            if (*(arr+middle) < searchelement) {
                beg = middle + 1;
            } else {
                end = mid;
            }
        }
        while (*(arr+beg) == searchelement) {
            how++;
            beg++;
        }
    }
    return how;
}
