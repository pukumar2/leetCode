/* Run time 0ms and beats 100% of CPP Submissions */

class Solution {
public:
    vector<int> constructRectangle(int area) {
        
        vector<int> res;
        
        if(area == 0){
           return res; 
        }
        
        if(area == 1){
            res.push_back(1);
            res.push_back(1);
            return res;
        }
        
        int n = (int)sqrt(area);
        int i;
        if(n * n == area){
           res.push_back(n);
           res.push_back(n); 
        }
        else {
              for(i = n+1; i >= 0; i--){
                  if(area%i == 0){
                      break;
                  }
              }
            
              if(area/i > i){
                res.push_back(area/i);
                if(i > 0)
                    res.push_back(i);
                else 
                    res.push_back(1);   
              } else {
                res.push_back(i);
                    if(i > 0)
                        res.push_back(area/i);
                    else 
                        res.push_back(1);    
              }
        }
        
        
        
        return res;
        
    }
};
