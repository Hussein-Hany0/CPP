#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int>& nums , int val){

    int start = 0 , end = nums.size() - 1;

    while(start <= end){

        int mid = start + (end - start ) / 2;

        if(nums[mid] == val)
            return mid;

        else if(nums[mid] < val)
            start = mid + 1;

        else if(nums[mid] > val)
            end = mid - 1;
    }

    return -1;
}

int binary_search_v2(vector<int>& nums , int val){

    int start = 0 , end = nums.size() - 1;

    while(start < end){

        int mid = start + (end - start ) / 2;

        if(nums[mid] < val)
            start = mid + 1;

        else if(nums[mid] > val)
            end = mid - 1;

        else 
            end = mid;
    }

    if(start < 0 || start >= nums.size())
        return -1;

    return nums[start] == val ? start : - 1;        

}

int main(){

    vector<int> v;
    
    v.push_back(5);
    v.push_back(7);
    v.push_back(7);
    v.push_back(8);
    v.push_back(8);
    v.push_back(9);
    v.push_back(9);
    v.push_back(10);

    cout<<binary_search(v , 9);

    return 0;
}