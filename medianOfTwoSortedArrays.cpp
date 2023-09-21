class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            res.push_back(nums1[i]);

        }
        for(int i=0;i<m;i++){
            res.push_back(nums2[i]);
        }
        int temp=res.size();
        sort(res.begin(),res.end());
        if(temp%2==1){
            return static_cast<double>(res[temp/2]);
        }
        else{
            int mid1=res[temp/2-1];
            int mid2=res[temp/2];
            return (static_cast<double>(mid1)+static_cast<double>(mid2))/2.0;
        }
    }
};
