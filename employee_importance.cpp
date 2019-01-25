/* Run time 56ms and beats 9% of CPP Submissions */

/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:

    int get_importance(int id, map<int, Employee*> m){

        auto it  = m.find(id);
        int sum = it->second->importance;

        for(int i = 0; i < it->second->subordinates.size(); i++){
            sum += get_importance(it->second->subordinates[i], m);
        }

        return sum;
    }

    int getImportance(vector<Employee*> employees, int id) {

        int n = employees.size();

        if(n == 0){
           return 0;
        }

        if(n == 1 && id == employees[0]->id){
            return employees[0]->importance;
        }
        if(n == 1 && id != employees[0]->id){
            return 0;
        }

        map<int, Employee*> m;

        for(int i = 0; i < n; i++){
            m.emplace(employees[i]->id, employees[i]);
        }

         int i;
         for(i = 0; i < n; i++){
            if(id == employees[i]->id){
                break;
            }
         }

         int sum = employees[i]->importance;
         for(int j = 0; j < employees[i]->subordinates.size(); j++){
             sum += get_importance(employees[i]->subordinates[j], m);
         }

         cout << sum << "\n";
         return sum;
    }
};

/* Run time 12ms and beats 99% CPP Submissions */
/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
       unordered_map<int,int> id_Map;

        for(int i = 0; i < employees.size(); i++)
            id_Map[employees[i]->id] = i;

        vector<Employee*> root;
        root.push_back(employees[id_Map[id]]);
        int val = 0;
        while(root.size())
        {
            Employee* tempEntry = root.back();
            root.pop_back();
            val += tempEntry->importance;
            for(auto entry:tempEntry->subordinates)
                root.push_back(employees[id_Map[entry]]);

        }
        return val;
    }
};

