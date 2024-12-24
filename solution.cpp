#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution
{
public:
vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>result;
        int minsum=(list1.size()-1)+(list2.size()-1);
        for(int i=0;i<list1.size();i++){
            auto it=find(list2.begin(),list2.end(),list1[i]);
            if(it!=list2.end()){
                int j=distance(list2.begin(),it);
                if(minsum>i+j){
                    result.clear();
                    result.push_back(list1[i]);
                    minsum=i+j;
                }else if(minsum==i+j){
                    result.push_back(list1[i]);
                }
            }
        }
        return result;
    }
};

