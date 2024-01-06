#include "baseSort.h"

class InsertionSort : public BaseSort
{
public:
    void sort(vector<int>& vec)override
    {
        if(vec.size()<2)return;
        for (size_t i = 1; i < vec.size(); i++)
        {
            for (size_t j = i; j > 0; j--)
            {
                if(vec[j]<vec[j-1])
                {
                    swap(vec,j,j-1);
                }
                else
                {
                    break;
                }
            }
            
        }
        
    }
};