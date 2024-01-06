#ifndef BASESORT_H
#define BASESORT_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BaseSort
{
private:
    /* data */
public:
    BaseSort(/* args */)
    {

    }
    virtual ~BaseSort()
    {
        
    }

    virtual void sort(vector<int>& vec) = 0;
    virtual void swap(vector<int>& vec, int i, int j)
    {
        int temp = vec[i];
        vec[i]= vec[j];
        vec[j]= temp;
    }
    virtual void printVec(const vector<int>& vec)
    {
        cout<<"curVec = ";
        for (auto &&i : vec)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    
};
#endif