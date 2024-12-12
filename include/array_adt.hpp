#ifndef ARRAY_ADT_HPP
#define ARRAY_ADT_HPP

class Array{
private:
    int *A;
    int size;
    int length;
    void swap(int *x, int *y);
public:
    Array(){
        size = 10;
        length = 0;
        A = new int[size];
    }
    Array(int sz){
        size = sz;
        length = 0;
        A = new int[size];
    }
    ~Array(){
        delete []A;
    }
    void Display();
    void Append(int x);
    void Insert(int index, int x);
    int Delete(int index);
    int LinearSearch(int key);
    int BinarySearch(int key);
    int Get(int index);
    void Set(int index, int x);
    int Max();
    int Min();
    int Sum();
    float Avg();
    void Reverse();
    void InsertSort(int x);
    bool isSorted();
    Array* Merge(Array* arr2);
    Array* Union(Array* arr2);
    Array* Intersection(Array* arr2);
    Array* Difference(Array* arr2);
};

#endif