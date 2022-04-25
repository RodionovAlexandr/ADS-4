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
  while (beg < end) {
      elem1 = *(arr + beg);
      elem2 = *(arr + end);
      if (elem1 + elem2 < value) {
          beg += 1;
      }
          if (elem1 + elem2 == value) {
              how += 1;
              beg += 1;
          }
          if (elem1 + elem2 > value) {
              end--;
          }
  }
  return how;
  return 0;
}
int countPairs3(int *arr, int len, int value) {
  int elem1 = 0;
        int elem2 = 0;
        int elem3 = 0;
        int end = 0;
        int beg = 0;
        int c = 0;
        int leftp = 0;
        int rightp = len;
        int how = 0;
        for (int i = 0; i < len; i++) {
            elem1 = *(arr + i);
            elem2 = 0;
            elem3 = 0;
            rightp = len;
            end = 0;
            beg = 0;
            c = 0;
            while (elem2 + elem1 != value) {
                c += 1;
                if (*(arr + i) == -2147483648) break;
                if (c == len) break;
                if (value - elem1 > elem2) {
                    leftp = end;
                    end += (rightp - end) / 2;
                    elem2 = *(arr + end);
                    if (elem2 + elem1 == value) {
                        if (i == end) how -= 1;
                        *(arr + i) = -2147483648;
                        elem3 = elem2;
                        while (elem3 == elem2) {
                            how += 1;
                            beg += 1;
                            elem3 = *(arr + end + beg);
                        }
                        elem3 = elem2;
                        while (elem3 == elem2) {
                            beg += 1;
                            elem3 = *(arr + end - beg);
                            if (elem3 == elem2) {
                                how += 1;
                            }
                        }
                    }
                } else {
                    rightp = end;
                    if (end == 1) {
                        end = 0;
                    } else {
                        end -= (end - leftp) / 2;
                    }
                    elem2 = *(arr + end);
                    if (elem2 + elem1 == value) {
                        if (i == end) how -= 1;
                        *(arr + i) = -2147483648;
                        elem3 = elem2;
                        while (elem3 == elem2) {
                            how += 1;
                            beg += 1;
                            elem3 = *(arr + end + beg);
                        }
                        elem3 = elem2;
                        while (elem3 == elem2) {
                            beg += 1;
                            elem3 = *(arr + end - beg);
                            if (elem3 == elem2) {
                                how += 1;
                            }
                        }
                    }
                }
            }
        }
        return how;
  return 0;
}
