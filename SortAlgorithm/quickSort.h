#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "baseSort.h"

#include <random>
using namespace std;
class QuickSort : public BaseSort
{
public:
    void sort(vector<int>& vec)override
    {
        if(vec.size()<2)return;
        sort2(vec,0,vec.size()-1);
    }
    void sort2(vector<int>& vec,int leftIndex,int rightIndex)
    {
        if(leftIndex >= rightIndex)return;
        //创建随机数
        default_random_engine generator;
        uniform_int_distribution<int> distribution(leftIndex, rightIndex);
        int randNum = distribution(generator);
        swap(vec,randNum,rightIndex);
        
        int i=leftIndex,j=leftIndex-1,k=rightIndex;
        while(i<k)
        {
            if(vec[i]>vec[rightIndex])
            {
                swap(vec,i,--k);
            }
            else if(vec[i]<vec[rightIndex])
            {
                swap(vec,i,++j);
                i++;
            }
            else
            {
                i++;
            }
        }
        swap(vec,rightIndex,k);

        sort2(vec,leftIndex,j);
        sort2(vec,k+1,rightIndex);
    }
};
#endif