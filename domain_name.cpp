class Solution {
public:
   vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string, int> M;
        int i;
        for (auto s: cpdomains){
        	istringstream iss(s);
        	int num;
        	string name;
        	iss >> num >> name;
            //cout << "Name is " << name << "\n";
        	M[name] += num;
        	i = name.find_first_of(".");
        	while(i > 0){
               // cout << "i is " << i << "\n";
        		name = name.substr(i+1, name.length());
        		M[name] += num;
        		i = name.find_first_of(".");
        	}
        }
        vector<string> ans;
        for (auto t: M){
        	string s;
        	s+= to_string(t.second);
        	s += " " + t.first;
        	ans.push_back(s);
        }
        return ans;
    }
};
