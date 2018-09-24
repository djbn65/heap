#ifndef MY_IS_SORTED
#define MY_IS_SORTED

template <typename T>
bool my_is_sorted(T arr[], const int size)
{
  int current = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (current < arr[i])
      return false;
    current = arr[i];
  }
  return true;
}

#endif