class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> s;

        int n=tokens.size();

        for(int i=0;i<n;i++){

            if(tokens[i]=="+"){
                int top1=s.top();
                s.pop();

                int top2=s.top();
                s.pop();

                
                s.push(top1+top2);
            }

        else if(tokens[i]=="*"){
                int x=s.top();
                s.pop();

                int y=s.top();
                s.pop();

                s.push(x*y);
        }
        else if(tokens[i]=="-"){
                int x1=s.top();
                s.pop();

                int y1=s.top();
                s.pop();

                s.push(y1-x1);

        }

        else if(tokens[i]=="/"){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();

            s.push(b/a);
        }
        else{
            s.push(stoi(tokens[i]));
        }
        
    }
    return s.top();
}
};
