/*Contest problem*/
class Solution {
public:
    
    int binaryToDecimal(int n) 
{ 
    int num = n; 
    int dec_value = 0; 
      
    // Initializing base value to 1, i.e 2^0 
    int base = 1; 
      
    int temp = num; 
    while (temp) 
    { 
        int last_digit = temp % 10; 
        temp = temp/10; 
          
        dec_value += last_digit*base; 
          
        base = base*2; 
    } 
      
    return dec_value; 
} 
    
    void print_binary(int n){
        
        string res;
        
        while(n > 0){
            int temp = n % 2;
            
            if(temp){
                res = "1" + res;
            }
            else {
                res = "0" + res;
            }
            n /= 2;
        }
        
        cout << res << "\n";
    }
    
    int bitwiseComplement(int n) {
        
        string res;
        int i = 0;
        
        if(n == 0){
            return 1;
        }
        int ret = 0;
        while(n > 0){
            
            int temp = n % 2;
            if(temp){
                
                ret += pow(2, i) * 0;
            } else {
                ret += pow(2, i) * 1;
            }
            i++;
            n = n/2;
        }
        
        return ret;
       /* // print_binary(n);
        while(n > 0){
            
            int temp = n % 2;
            if(temp){
                
                res = "0" + res;
            } else {
                
                res = "1" + res;;
            }
            // cout << "i : " << i << " " <<  res << "\n";
            i++;
            n = n/2;
        }
        
        // cout << res << "\n";
        stringstream geek(res);
        
        int x = 0;
        geek >> x;
        //cout << x << "\n";
        return binaryToDecimal(x);
        return 1;*/
    }
};
