class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>v1;
        int count = 0;
        for(int i=0;i<arr.size();i++){
            count=1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                    if(arr[j] == arr[arr.size()-1] && j == arr.size()-1)
                    {
                        i = arr.size();
                        break;
                    }
                }
                else{
                    i=j-1;
                    break;
                }
            }
            v1.push_back(count);
        }
        sort(v1.begin(),v1.end());
        // for(int i=0;i<v1.size();i++){
        //     cout<<v1[i]<<" ";
        // }
        for(int i=0;i<v1.size()-1;i++){
            if(v1[i]==v1[i+1]){
               
                return false;
            }
           
        }
        return true;
    }
};