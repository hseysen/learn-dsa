#include "array_adt.hpp"
#include<iostream>

void Array::Display(){
    std::cout << "Elements of the array: [ ";
    for(int i = 0; i < length; i++) std::cout << A[i] << " ";
    std::cout << "]" << std::endl;
}

void Array::Append(int x){
    if(length < size) A[length++] = x;
}

void Array::Insert(int index, int x){
    if(index >= 0 && index <= length){
        for(int i = length; i > index; i--) A[i] = A[i-1];
        A[index] = x;
        length++;
    }
}

int Array::Delete(int index){
    if(index >= 0 && index < length){
        int x = A[index];
        for(int i = index; i < length - 1; i++) A[i] = A[i+1];
        length--;
        return x;
    }
    return 0;
}

void Array::swap(int *x, int *y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int Array::LinearSearch(int key){
    for(int i = 0; i < length; i++){
        if(key == A[i]) return i;
    }
    return -1;
}

int Array::BinarySearch(int key){
    int l = 0;
    int r = length - 1;
    int m;
    while(l <= r){
        m = l + (r - l) / 2;
        if(key == A[m]) return m;
        else if(key < A[m]) r = m - 1;
        else if(key > A[m]) l = m + 1;
    }
    return -1;
}

int Array::Get(int index){
    if(index >= 0 && index < length) return A[index];
    return -1;
}

void Array::Set(int index, int x){
    if(index >= 0 && index < length) A[index] = x;
}

int Array::Max(){
    int current_max = A[0];
    for(int i = 1; i < length; i++){
        if(A[i] > current_max) current_max = A[i];
    }
    return current_max;
}

int Array::Min(){
    int current_min = A[0];
    for(int i = 1; i < length; i++){
        if(A[i] < current_min) current_min = A[i];
    }
    return current_min;
}

int Array::Sum(){
    int result = 0;
    for(int i = 0; i < length; i++) result += A[i];
    return result;
}

float Array::Avg(){
    return (float)Sum() / length;
}

void Array::Reverse(){
    for(int i = 0, j = length - 1; i < j; i++, j--){
        swap(&A[i], &A[j]);
    }
}

void Array::InsertSort(int x){
    if(length == size) return;
    int i = length - 1;
    while(i >= 0 && A[i] > x){
        A[i+1] = A[i];
        i--;
    }
    A[i+1] = x;
    length++;
}

bool Array::isSorted(){
    for(int i = 0; i < length - 1; i++){
        if(A[i] > A[i + 1]) return false;
    }
    return true;
}

Array* Array::Merge(Array* arr2){
    int i = 0, j = 0, k = 0;

    Array* arr3 = new Array(length + arr2->length);

    while(i < length && j < arr2->length){
        if(A[i] < arr2->A[j]) arr3->A[k++] = A[i++];
        else arr3->A[k++] = arr2->A[j++];
    }
    for(; i < length; i++) arr3->A[k++] = A[i];
    for(; j < arr2->length; j++) arr3->A[k++] = arr2->A[j];
    arr3->length = length + arr2->length;

    return arr3;
}

Array* Array::Union(Array* arr2){
    int i = 0, j = 0, k = 0;

    Array* arr3 = new Array(length + arr2->length);

    while(i < length && j < arr2->length){
        if(A[i] < arr2->A[j]) arr3->A[k++] = A[i++];
        else if(arr2->A[j] < A[i]) arr3->A[k++] = arr2->A[j++];
        else{
            arr3->A[k++] = A[i++];
            j++;
        }
    }
    for(; i < length; i++) arr3->A[k++] = A[i];
    for(; j < arr2->length; j++) arr3->A[k++] = arr2->A[j];
    arr3->length = k;
    
    return arr3;
}

Array* Array::Intersection(Array* arr2){
    int i = 0, j = 0, k = 0;

    Array* arr3 = new Array(length + arr2->length);

    while(i < length && j < arr2->length){
        if(A[i] < arr2->A[j]) i++;
        else if(arr2->A[j] < A[i]) j++;
        else{
            arr3->A[k++] = A[i++];
            j++;
        }
    }
    arr3->length = k;

    return arr3;
}

Array* Array::Difference(Array* arr2){
    int i = 0, j = 0, k = 0;

    Array* arr3 = new Array(length + arr2->length);
    
    while(i < length && j < arr2->length){
        if(A[i] < arr2->A[j]) arr3->A[k++] = A[i++];
        else if(arr2->A[j] < A[i]) j++;
        else{
            i++; j++;
        }
    }
    for(; i < length; i++) arr3->A[k++] = A[i];
    arr3->length = k;

    return arr3;
}