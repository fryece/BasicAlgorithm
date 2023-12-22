#include <iostream>
#include <vector>

using namespace std;

#include "mergeSort.h"

int main()
{
    vector<int> testVec = {2,1,3,4,6,5,9,8,7};
    MergeSort s;
    s.printVec(testVec);
    s.sort(testVec);
    s.printVec(testVec);

    
    return 0;
}