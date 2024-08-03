#include<iostream>
#include<vector>
using namespace std;

double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        vector<double> ans;
        while(i<j){
            double avg=(double(nums[i])+double(nums[j]))/2;
            ans.push_back(avg);
            i++;
            j--;
        }
        sort(ans.begin(),ans.end());
        return ans[0];
}
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
