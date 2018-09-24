#ifndef MY_SORT_H
#define MY_SORT_H

#include "MyHeap.h"

template <typename T>
void my_sort(T arr[], const int size)
{
  MyHeap<T> sort(arr, size);
  int counter = 0;

  while (sort.size() > 0)
  {
    arr[counter] = sort.top();
    sort.pop();
    counter++;
  }
}

#endif