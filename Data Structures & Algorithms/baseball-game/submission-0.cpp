class Solution {
public:
    int calPoints(vector<string>& operations) {

        int n=operations.size();
        int sum=0;
        stack<int> st;
        for(int i=0;i<n;i++){
            if(operations[i]=="+"){
                int top1=st.top();
                st.pop();
                int top2=st.top();

                st.push(top1);
                st.push(top1+top2);
            }

          else if(operations[i]=="C"){
                st.pop();           
                
            }
          else if(operations[i]=="D"){
            st.push(2*st.top());
          }
          else{
            st.push(stoi(operations[i]));
          }

        }
        while(st.empty()!=true){
            int top=st.top();
            sum=sum+top;
            st.pop();
        }
        return sum;

        
        
    }
};