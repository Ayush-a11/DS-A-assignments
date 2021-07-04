class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        vector<pair<int,int> > p;    
        for(int i=0;i<arr.size();i++){
            
            int n=arr[i];
            int count=0;
            while(n!=0){
                if(n%2==1)
                    count++;
                n=n/2;
            }
            p.push_back(make_pair(count,arr[i]));   
        }    
        
        sort(p.begin(),p.end());
        for(int i=0;i<p.size();i++)
            arr[i]=p[i].second;
        return arr;
    }
    
    
    
};