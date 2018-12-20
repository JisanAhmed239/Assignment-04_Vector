#include <iostream>
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "BubbleSort.h"
#include <vector>

using namespace std;

int main()
{
    int arr[8] = {14,33,27,10,35,19,48,44};
    SelectionSort jisan;
    vector<int> a;
    a.insert(a.begin(),arr,arr+8);
    int n = a.size();
    jisan.SelectionSorter(a,n);

     int arr1[8] = {14,33,27,10,35,19,48,44};
    InsertionSort jisan1;
    vector<int> b;
    b.insert(b.begin(),arr1,arr1+8);
    int n1 = b.size();
    jisan1.InsertionSorter(b,n1);

    cout<<"MergeSort:"<<endl;
    int arr2[8] = {14,33,27,10,35,19,48,44};
    MergeSort jisan2;
    vector<int> c;
    c.insert(c.begin(),arr2,arr2+8);
    int n3 = c.size();
    jisan2.merge_sort(c,0,n3-1);

    int arr3[8] = {14,33,27,10,35,19,48,44};
    BubbleSort jisan3;
    vector<int> d;
    d.insert(d.begin(),arr3,arr3+8);
    int n4 = d.size();
    jisan3.BubbleSorter(d,n4);

    return 0;
}
