#include <iostream>
#include <vector>

#include "baseSort.h"

using namespace std;

class MergeSort : public BaseSort
{
public:
    void sort(vector<int>& vec)override
    {
        if(vec.size()<2)return;
        sort2(vec,0,vec.size()-1);
    }
    void sort2(vector<int>& vec, int indexL,int indexR)
    {
        if(indexL == indexR)return;
        int indexM = indexL + ((indexR - indexL) >> 1);
        sort2(vec, indexL, indexM);
        sort2(vec, indexM+1, indexR);
        merge(vec,indexL,indexM,indexR);
    }
    void merge(vector<int>& vec, int indexL, int indexM, int indexR)
    {
        vector<int> temp(indexR - indexL + 1,0);
        int i = 0;
        int p = indexL;
        int q = indexM+1;
        while(p<=indexM && q<=indexR)
        {
            temp[i++] = vec[p]<=vec[q]? vec[p++] : vec[q++];
        }
        while(p<=indexM)
        {
            temp[i++] = vec[p++];
        }
        while(q<=indexR)
        {
            temp[i++] = vec[q++];
        }
        for(int j = 0;j<temp.size();j++)
        {
            vec[indexL+j] = temp[j];
        }
        
    }
};
