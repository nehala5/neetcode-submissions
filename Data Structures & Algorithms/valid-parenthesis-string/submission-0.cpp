class Solution {
public:
    bool checkValidString(string s) {
        int mini =0, maxi =0;
        for(char ch:s){
            if(ch == '('){
                mini++;
                maxi ++;
            }
            else if(ch == '*'){
                mini --;
                mini = max(mini, 0);
                maxi++;
            }
            else if(ch == ')'){
                mini --;
                mini = max(mini, 0);
                maxi --;
                if(maxi <0) return false;
            }

        }
        
        return mini == 0;
    }
};