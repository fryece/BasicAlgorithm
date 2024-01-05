#include "baseSort.h"

#include <random>
class QuickSort : public BaseSort
{
public:
    void sort(vector<int>& vec)override
    {
        if(vec.size()<2)return;
        sort2(vec,0,vec.size()-1);
    }
    void sort2(vector<int>& vec,int leftIndex,int rightIndex)
    {
        //创建随机数
        std::default_random_engine generator;
        std::uniform_int_distribution<int> distribution(leftIndex, rightIndex);
        int random_number = distribution(generator);

        int indexNum = vec[random_number];
        cout<<"随机数为："<<indexNum<<endl;
    }
};