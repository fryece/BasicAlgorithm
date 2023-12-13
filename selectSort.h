#include <iostream>
#include <vector>

#include "baseSort.h"

using namespace std;

class SelectSort :public BaseSort
{
private:
    /* data */
public:

    void sort(vector<int>& vec) override
    {
        if(vec.size()<2) return;
        
        for (size_t i = 0; i < vec.size()-1; i++)
        {
            size_t index = i;
            for (size_t j = i + 1; j < vec.size(); j++)
            {
                index = vec[index] > vec[j] ? j : index;
            }
            swap(vec,i,index);
        }
    }
};
