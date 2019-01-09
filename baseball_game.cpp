/* Run time 4ms
 * Beats 97% of CPP Submission 
 */

class Solution {
public:
    
    int string_to_int(string val){
        stringstream geek(val);
        int x = 0; 
        geek >> x;
        return x;
    }
    
    int calPoints(vector<string>& ops) {
        
        stack<int> s;
        int sum = 0;
        
        for(int i = 0; i < ops.size(); i++){
            if(is_op(ops[i])){
                switch(ops[i][0]){
                        
                    case 'C':
                        sum -= s.top();
                        s.pop();
                        break; 
                    case 'D':{
                        int t =  s.top();
                        sum += t *2;
                        s.push(t*2);
                        break;
                    }   
                    default:{
                        int a = s.top();
                        s.pop();
                        int b = s.top();
                        //s.pop();
                        
                        sum += a+b;
                        s.push(a);
                        s.push(a+b);
                        //break;
                    }     
                }
            } else {
                
                int t= stoi(ops[i]);
                sum += t;
                s.push(t);
            }
        }
        
        return sum;
       
    }
    bool is_op (string w){
        return (w.length()==1 && (w[0]<'0' || w[0]>'9') );
    }
};
