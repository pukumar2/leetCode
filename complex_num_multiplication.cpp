/* Run time 4ms and beats 100% CPP Submissions */

/* This question becomes tricky as input can be in any form. For instance I can give input 1+-1i In this case it is equivalent to 1-1i
 * I can give -1i, 1, 1-+1i. So basically we have to deduct numbers. So there are total 4 numbers, a,b,c,d and can represent two numbers
 * a+bi and c+di. And then we can apply a*c + i(b*c + a*d) - b*d. *
 * I track if the imaginary number is present or not by flag_img and i can only be situated in the very end of the string.
 * I track real number present or not. Reason is because I should get 1i -> 0,1 as real number is zero.
 * Finally after calculating a,b,c,d I apply formula.
 */
class Solution {
public:
    
    int string_to_int(string val){
        stringstream geek(val);
        int x = 0;
        geek >> x;
        return x;
    }
    
    void print_vec(vector<int> v){
        int n = v.size();
        
        for(int i = 0; i < n; i++){
            cout << v[i] << "\t";
        }
        cout << "\n";
    }
    
    vector<int> complext_to_Var(string str){
        
        int n = str.size();
        vector<int> num;
        string temp; 
        int flag_img = 0;
        int flag_real = 0;
        int index = -1;
        int i = 0;
        
        if(str[n-1] == 'i'){
            flag_img = 1;
        }
        
        while(i < n){
              if(i > 0 && (str[i] == '+' || str[i] == '-')){
                  
                  if(str[i] == '-'){
                      // cout << "test" << i << "\n";
                      index = i;
                  }
                  
                  if(temp.size() > 0){
                    num.push_back(string_to_int(temp));  
                    flag_real = 1;
                    temp.clear();
                  }    
              }
              else 
              {
                  temp += str[i];
              }
            i++;
        }
        
        if(flag_real == 0 && flag_img == 1){
           num.push_back(0); 
        }
        
        if(temp.size() > 0){
           if(index != -1 && str[index] == '-'){
                num.push_back(-1 * string_to_int(temp.substr(0,temp.size())));   
           } else {
               
                
                num.push_back(string_to_int(temp.substr(0,temp.size())));
           }    
        }
        
        if(flag_img == 0){
            num.push_back(0); 
        }
        
        return num;
    }
    
    string complexNumberMultiply(string str1, string str2) {
        
        int a=0,b=0,c=0,d=0;
        string res;
        
        int n = str1.size();
        int m = str2.size();
        
        vector<int> first = complext_to_Var(str1);
        print_vec(first);
        vector<int> second = complext_to_Var(str2);
        print_vec(second);
        int ans_real = first[0] * second[0] +  (first[1] * second[1] * -1);
        int ans_img =  first[0] * second[1] +  first[1] * second[0];
        
        // make negative
        res = to_string(ans_real) + "+" + to_string(ans_img) + "i";
        
        //print_vec(first);
        return res;
    }
};
