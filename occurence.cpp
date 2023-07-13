//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        map<int,int>m;
        set<int>s;
        
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            
            
            m[arr[i]]++;
        }
        
        for(auto i=m.begin();i!=m.end();i++)
        {
            
         if(s.find(i->second)!=s.end())
         {
             return false;
             
         }
            
            else
            
            
            s.insert(i->second);
            
            
            
            
            
        }
      
      return true;
      
      
        
        
        
        
        
        
    }
};