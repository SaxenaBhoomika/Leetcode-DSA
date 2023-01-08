class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
         vector<long long> freq(k);
        for(int i=0; i<n; i++) freq[arr[i]%k]++;
        
        long long ans = 0;
        for(int i=0; i<k; i++)
        {
            ans+=(freq[i]*(freq[i]-1) / 2);
        }
        
        return ans;
    }
};
