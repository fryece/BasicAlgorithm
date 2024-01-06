#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "baseSort.h"

class BubbleSort : public BaseSort
{
public:
    void sort(vector<int>& vec)override
    {
        if(vec.size()<2)return;
        for (size_t i = vec.size()-1; i > 0; i--)
        {
            for (size_t j = 0; j < i; j++)
            {
                if (vec[j] > vec[j+1]) swap(vec,j,j+1);
            }
        }
    }
};
#endif