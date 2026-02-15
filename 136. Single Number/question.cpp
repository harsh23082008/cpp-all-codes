class solution{
    public:
    int singleNumber(vector<int>& num){
        int ans =0 ;
        for(int i =0 ;i<num.size();i++){
            ans = ans ^ num[i];
        }
        return ans;
    }
}