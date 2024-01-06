#include <iostream>
#include <vector>

using namespace std;

#include "SortAlgorithm/mergeSort.h"
#include "SortAlgorithm/quickSort.h"
#include "SortAlgorithm/heapSort.h"

int main()
{
    vector<int> testVec = {2,1,3,4,6,5,9,8,7};
    HeapSort s;
    s.printVec(testVec);
    s.sort(testVec);
    s.printVec(testVec);

    

    return 0;
}