#ifndef SORTCHECKER_H
#define SORTCHECKER_H

#include "SortAlgorithm/baseSort.h"
#include "SortAlgorithm/bubbleSort.h"
#include "random"
#include <vector>
#include <chrono>
#include <iostream>
using namespace std;

class SortChecker
{
public:
    SortChecker(int checkTime, int checkVecSize = 10, int minRange = 0,int maxRange = 1000);
    ~SortChecker();

    bool check(BaseSort *subSort);

private:
    int m_checkTime = 1;
    int m_checkVecSize = 10;
    int m_minRange = 0;
    int m_maxRange = 1000;
    
    vector<int> getRandomVec();
    bool compareVec(const std::vector<int>& v1, const std::vector<int>& v2);
};

#endif