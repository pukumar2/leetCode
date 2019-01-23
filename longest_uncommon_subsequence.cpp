/* First of all I haven't understood the question correctly. Still there is some doubts in my mind.
 * Although Leetcode has accepted my solution but I still think it is not unbreakable.
 * Run time 0ms and beats 100% CPP Submissions */
class Solution {
public:
    int findLUSlength(string a, string b) {
 
        int l1=a.size(),l2=b.size(),i;
        for(i=0;i<l1&&i<l2;i++){
            if(a[i]!=b[i]){
                cout << "a.i is " << a[i] << "\n";
                cout << "b.i is " << b[i] << "\n";
                return max(l1,l2);
            }
        }
        
        cout << i << "\n";
        
        if(i==l1&&i==l2){
            return -1;
        }
        if(i==l1){
            return l2;
        }
        if(i==l2){
            return l1;
        }
        
        return 0;
        /*
        int n = a.length();
        int m = b.length();
        
        if(n == 0){
            return m;
        }
        
        if(m == 0){
            return n;
        }
        
        map<char, int> m1;
        map<char, int> m2;
        
        for(int i = 0; i < n; i++){
            m1.emplace(a[i], 1);
        }
        
        int count  = 0;
        for(int i = 0; i < m; i++){
            auto it = m1.find(b[i]);
            if(it == m1.end()){
                count++;
            }
            
        }
        
        return 0;
        
        */
    }
};
