class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());  
        double avg_sal = 0;
        for(int i=1; i < salary.size()-1; i++) {
            avg_sal += salary[i];
        }
        return avg_sal / (salary.size()-2);
    }
};
