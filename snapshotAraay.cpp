class SnapshotArray {
public:

    vector<map<int,int>>mp;
    
    int s_id = 0;

    SnapshotArray(int length) {
        
       
        mp.resize(length);

       
        for(int i = 0; i < length; i++)
            mp[i][0] = 0;
        
    }
    
    void set(int index, int val) {

     
        mp[index][s_id] = val;
    }
    
    int snap() {
        s_id++;
        return  s_id - 1;
    }
    
    int get(int index, int snap_id) {

    

        if(mp[index].find(snap_id) == mp[index].end())
        {
            auto it = --mp[index].lower_bound(snap_id);
            return it->second;
        }
        return mp[index][snap_id];
    }
};
