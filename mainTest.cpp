#include <iostream>
#include <vector>

using namespace std;

// #include "SortAlgorithm/mergeSort.h"
// #include "SortAlgorithm/quickSort.h"
#include "SortAlgorithm/heapSort.h"
#include "sortChecker.h"

int main()
{
    HeapSort *testSort = new HeapSort;

    //自定义打印测试
    // vector<int> testVec = {2,1,3,4,6,5,9,8,7};
    // testSort->printVec(testVec);
    // testSort->sort(testVec);
    // testSort->printVec(testVec);

    //测试器测试
    SortChecker checker(100,100,0,10000);
    bool testbl = checker.check(testSort);
    cout<<(testbl?"算法正确":"算法错误")<<endl;
    delete testSort;

    return 0;
}