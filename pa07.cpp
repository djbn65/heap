#include "my_sort.h"
#include "my_is_sorted.h"

// This file is merely a rough guideline,
// and you should make your own for testing.
int main()
{
    // Heap
    MyHeap<int> q;

    cout << q.size() << endl;

    for(int k = 0; k < 1000; k++)
        q.push(std::rand());

    cout << q.size() << endl;
    int arr[1000];

    int j = q.size();
    for (int i = 0; i < j-500; i++)
    {
      arr[i] = q.top();
      q.pop();
    }

    cout << q.size() << endl;

    cout << my_is_sorted(arr, 500) << endl;

    /*cout << q.size() << endl;

    /*while(!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }

    /*int my_array[6] = {4, 6, 9, 12, 124, 4};
    MyHeap<int> q2(my_array, 6);    // parameterized constructor

    MyHeap<int> q3(q2);             // copy constructor
    MyHeap<int> q4 = q2;            // copy constructor
    MyHeap<int> q5;                 // default constructor
    q5 = q4;                        // operator=

    while(!q4.empty())
    {
        cout << q4.top() << endl;
        q4.pop();
    }

    // Sort
    int my_array2[6] = {4, 6, 9, 12, 124, 4};

    cout << my_is_sorted(my_array2, 6) << endl;
    my_sort(my_array2, 6);
    cout << my_is_sorted(my_array2, 6) << endl;

    for(int k = 0; k < 6; k++)
    {
        cout << my_array2[k] << endl;
    }*/

    return 0;
}

