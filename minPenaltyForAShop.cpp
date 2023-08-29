class Solution {
public:
    int bestClosingTime(string customers) {
        int max_scr=0,score=0,best_hr=-1;
        for(int i=0;i<customers.size();i++){
            score+=(customers[i]=='Y') ? 1 : -1;
            if(score>max_scr){
                max_scr=score;
                best_hr=i;
            }
        }
        return best_hr+1;
    }
};
