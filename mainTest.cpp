#include <iostream>
#include <vector>

using namespace std;

#include "selectSort.h"

int main()
{
    vector<int> testVec = {2,1,3,4,6,5,9,8,7};
    SelectSort s;
    s.printVec(testVec);
    s.sort(testVec);
    s.printVec(testVec);

    
    return 0;
}