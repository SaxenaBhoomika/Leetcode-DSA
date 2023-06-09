class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int h=letters.size()-1;
        if(letters[0]>target){
            return letters[0];
        }
        else if(letters[letters.size()-1]<=target){
            return letters[0];
        }
        char res;
        while(l<=h){
            int mid=(l+h)/2;
            if(letters[mid]>target){
                res=letters[mid];
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};
