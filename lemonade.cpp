/* Run time 8ms and beats 98% of CPP Submissions */
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        stack<int> m_5;
        stack<int> m_10;
        stack<int> m_20;

        int n = bills.size();

        if(n == 0){
            return true;
        }
        if(n == 1 && bills[0] == 5){
            return true;
        }

        if(n == 1){
            return false;
        }

        for(int i = 0; i < n; i++){
            if(bills[i] == 5){
                m_5.push(bills[i]);
            }
            else if(bills[i] == 10){
                m_10.push(bills[i]);
                if(!m_5.empty()){
                    m_5.pop();
                } else {
                    return false;
                }
            }

            else if(bills[i] == 20){
                m_20.push(bills[i]);
                if(!m_10.empty()){
                    m_10.pop();
                        if(!m_5.empty()){
                            m_5.pop();
                        }
                        else {
                            return false;
                        }
                }
                else
                {
                    int i = 0;
                    if(m_5.size() < 3){
                        return false;
                    }

                    while(i < 3 && !m_20.empty()){
                        m_5.pop();
                        i++;
                    }
                }
            }
        }

        return true;

        // for(int i )
        return 1;
    }
};
