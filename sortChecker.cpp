#include "sortChecker.h"

SortChecker::SortChecker(int checkTime, int checkVecSize, int minRange,int maxRange)
    :m_checkTime(checkTime),m_checkVecSize(checkVecSize),m_minRange(minRange),m_maxRange(maxRange)
{
    try
    {
        if(checkTime<1)
        {
            throw invalid_argument("SortChecker参数:\"测试次数\"至少为1次,已修改为1");
            m_checkTime = 1;
        }
    }
    catch(const exception& e)
    {
        cerr <<"参数错误 -- "<< e.what() <<endl;
        //terminate();//中断程序
    }

    try
    {
        if(checkVecSize<2)
        {
            throw invalid_argument("SortChecker参数:\"测试数组长度\"至少为2,已修改为默认值10");
            m_checkVecSize = 10;
        }
    }
    catch(const exception& e)
    {
        cerr <<"参数错误 -- "<< e.what() <<endl;
    }

    try
    {
        if(maxRange-minRange < 1)
        {
            throw invalid_argument("SortChecker参数:\"范围\"至少为10,已修改为默认值[0,1000]");
            m_minRange = 0;
            m_maxRange = 1000;
        }
    }
    catch(const exception& e)
    {
        cerr <<"参数错误 -- "<< e.what() <<endl;
    }
}
SortChecker::~SortChecker()
{

}
bool SortChecker::check(BaseSort *subSort)
{
    int t = m_checkTime;
    while(t>0)
    {
        vector<int> defaultVec = getRandomVec();
        vector<int> copyVec = defaultVec;
        subSort->sort(defaultVec);
        BubbleSort *m_bubSort = new BubbleSort;//对比组算法
        m_bubSort->sort(copyVec);
        bool isEqual = compareVec(defaultVec,copyVec);
        delete m_bubSort;
        if(!isEqual)return false;
        --t;
    }
    return true;
}

vector<int> SortChecker::getRandomVec()
{
    default_random_engine e(chrono::system_clock::now().time_since_epoch().count());//种子
    vector<int> resultVec(m_checkVecSize);
    for (int i = 0; i < m_checkVecSize; i++)
    {
        uniform_int_distribution<int> uid(m_minRange,m_maxRange);
        resultVec[i] = uid(e);
    }
    return resultVec;
}

bool SortChecker::compareVec(const vector<int>& v1, const vector<int>& v2) 
{
    if (v1.size() != v2.size())return false;
    return equal(v1.begin(), v1.end(), v2.begin());
}