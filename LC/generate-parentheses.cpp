class Solution {
      void generate(int n ,vector<string>& ans, string & s){
        if(s.size() >2* n){
            return ;
        }
        if(s.length() == 2*n){
            ans.push_back(s);
            return;
        }

        int st  = count(s.begin(),s.end(),'(');
        int en  = count(s.begin(),s.end(),')');
        if(st<n)
        {
            s+='(';
            generate(n, ans , s);
            s.pop_back();
        }
        if(en<st)
        {
            s+=')';
            generate(n, ans , s);
            s.pop_back();
        }

    }

public:
    vector<string> generateParenthesis(int n) {
        vector <string> ans;
        string s = "";
        generate(n, ans , s);
        return ans;
    }

};
