/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        Employee* Leader = findLeader(employees, id);
        return getimportance(employees, Leader);
    }
    
    Employee* findLeader(vector<Employee*> employees, int id) {
        for (auto emp : employees) {
            if(emp->id == id) {
                return emp;
            }
        }
        return nullptr;
    }
    
    int getimportance(vector<Employee*> emps, Employee* leader) {
        queue<Employee*> store;
        unordered_set<int> visited;
        
        store.push(leader);
        int iSum = 0; // importance Sum
        Employee* emp;
        
        while(store.size()){
            emp = store.front();
            store.pop();
            visited.insert(emp->id);
            
            iSum += emp->importance;
            
            for(int id : emp->subordinates){
                 if(visited.find(id) != visited.end()) continue;
                
                Employee* subLeader = findLeader(emps, id);
                store.push(subLeader);
    }
            }
        
        return iSum;
    }
};
