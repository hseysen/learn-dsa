#include<bits/stdc++.h>
#include"array_adt.hpp"

using namespace std;

int main(){
    // Create new array.
    Array* arr1 = new Array(20);
    int index;

    // Populate array.
    for(int i = 1; i < 16; i+=2) arr1->Append(i);
    cout << endl << "Initial array:" << endl;
    arr1->Display();

    // Insert element
    cout << endl << "Inserting 4:" << endl;
    arr1->Insert(2, 4);
    arr1->Display();

    // Delete element
    cout << endl << "Deleting index 4:" << endl;
    arr1->Delete(4);
    arr1->Display();

    // Linear search
    cout << endl << "Linearly searching for 3" << endl;
    index = arr1->LinearSearch(3);
    if(index == -1) cout << "Element does not exist." << endl;
    else cout << "Element found at index " << index << "." << endl;

    // Binary search
    cout << endl << "Binary searching for 11" << endl;
    index = arr1->BinarySearch(11);
    if(index == -1) cout << "Element does not exist." << endl;
    else cout << "Element found at index " << index << "." << endl;

    // Get and Set
    cout << endl << "Getting element at index 7: " << arr1->Get(7) << "." << endl;
    cout << endl << "Setting element at index 7 to 14:" << endl;
    arr1->Set(7, 14);
    arr1->Display();

    // Statistics
    cout << endl << "Maximum value in array: " << arr1->Max() << "." << endl;
    cout << "Minimum value in array: " << arr1->Min() << "." << endl;
    cout << "Average value in array: " << arr1->Avg() << "." << endl;
    cout << "Sum of elements in array: " << arr1->Sum() << "." << endl;

    // Reversing
    cout << endl << "Reversing array:" << endl;
    arr1->Reverse();
    arr1->Display();
    cout << "Reversing array:" << endl;
    arr1->Reverse();
    arr1->Display();

    // Insert sort
    cout << endl << "Using InsertSort function with value 10:" << endl;
    arr1->InsertSort(10);
    arr1->Display();

    // Check array sorted or not
    cout << endl;
    if(arr1->isSorted()) cout << "Array is sorted." << endl;
    else cout << "Array is not sorted." << endl;

    // Second array for testing functionalities
    Array* arr2 = new Array(20);
    for(int i = 2; i < 20; i+=3) arr2->Append(i);
    cout << endl << "Our array:" << endl;
    arr1->Display();
    cout << "Secondary array:" << endl;
    arr2->Display();

    // Merge
    Array* arr3 = arr1->Merge(arr2);
    cout << endl << "Merged arrays:" << endl;
    arr3->Display();

    // Union
    Array* arr4 = arr1->Union(arr2);
    cout << endl << "Union of arrays:" << endl;
    arr4->Display();

    // Intersection
    Array* arr5 = arr1->Intersection(arr2);
    cout << endl << "Intersection of arrays:" << endl;
    arr5->Display();

    // Difference
    Array* arr6 = arr1->Difference(arr2);
    cout << endl << "Difference of array1 to array2:" << endl;
    arr6->Display();
    
    return 0;
}