#include <iostream>
#include <vector>

#include "baseSort.h"

using namespace std;

class MargeSort : public BaseSort
{
private:
    /* data */
public:
    MargeSort(/* args */);
    ~MargeSort();

    void sort(vector<int>& vec) override
    {
        int left = 0;
        int right = vec.size()-1;
        int mid = left + (right - left) >> 1;
    }
};

MargeSort::MargeSort(/* args */)
{
}

MargeSort::~MargeSort()
{
}
