class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>arr;
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
        mp[nums[i]]++;
    }
    
    for(auto x:mp){
        cout<<"hello"<<endl;
        cout<<x.first<<" "<<x.second<<" "<<endl;
        if(x.second > 1){
            arr.push_back(x.first);
            }
        // return arr;
    }
  return arr;
} 
  
};
