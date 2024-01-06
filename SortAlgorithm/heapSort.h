#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "baseSort.h"

#include <random>
using namespace std;
class HeapSort : public BaseSort
{
public:
    void sort(vector<int>& vec)override
    {
        if(vec.size()<2)return;
        for (size_t i = 0; i < vec.size(); i++)
        {
            heapInser(vec,i);
        }
        int heapSize = vec.size();
        swap(vec,0,--heapSize);
        while(heapSize>0)
        {
            heapDelete(vec,0,heapSize);
            swap(vec,0,--heapSize);
        }
        
    }

    void heapInser(vector<int>& vec,int index)
    {
        while(vec[index] > vec[(index-1)/2])
        {
            swap(vec,index,(index-1)/2);
            index = (index-1)/2;
        }
    }

    void heapDelete(vector<int>& vec,int index,int heapSize)
    {
        int leftIndex = index*2+1;
        while(leftIndex < heapSize)
        {
            int maxIndex = (leftIndex+1<heapSize && vec[leftIndex]<vec[leftIndex+1]) ? leftIndex+1 : leftIndex;
            if(vec[index] < vec[maxIndex])
            {
                swap(vec,index,maxIndex);
                index = maxIndex;
                leftIndex = index*2+1;
            }
            else
            {
                break;
            }
        }
    }

};
#endif