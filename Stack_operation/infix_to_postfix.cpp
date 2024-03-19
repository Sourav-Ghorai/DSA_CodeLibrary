#include<iostream>
#include<vector>
using namespace std;
int isoperand(char x){
    if(x=='('||x==')'||x=='+'||x=='-'||x=='*'||x=='/'||x=='^') return 0;
    else return 1;
}
int presidense(char x){
    if(x=='+' || x=='-') return 1;
    else if(x=='*'||x=='/') return 2;
    else if(x=='^') return 3;
}
string InfixToPostfix(string str){
    string ans;
    vector<char> vec;
    int i = 0;
    while(str[i]!='\0'){
        if(isoperand(str[i])){
            ans.push_back(str[i]);
            i++;
        }
        else{
            if(str[i]=='('){
                vec.push_back(str[i]);i++;
            } 
            else if(str[i]==')'){
                if(vec[vec.size()-1]=='('){
                    vec.pop_back();
                    i++;
                }
                else {
                    ans.push_back(vec[vec.size()-1]);
                    vec.pop_back();
                }
            }
            else if((str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/' || str[i]=='^') && (vec.size()=='\0' || vec[vec.size()-1]=='(')){
                vec.push_back(str[i]); i++;
            }
            else if(presidense(str[i])>presidense(vec[vec.size()-1])){
                vec.push_back(str[i]);
                i++;
            }
            else if(presidense(str[i])<=presidense(vec[vec.size()-1])){
                ans.push_back(vec[vec.size()-1]);
                vec.pop_back();
            }
        }

    }
    while(vec.size()!='\0'){
        ans.push_back(vec[vec.size()-1]);
        vec.pop_back();
    }
    ans.push_back('\0');
    return ans;

}
int Evaluation(string str){
    int x1=0,x2=0,r;
    vector<int> vec;
    for(int i = 0;str[i]!='\0';i++){
        if(isoperand(str[i])){
            vec.push_back(str[i]-'0');
        }
        else{
            x2 = vec[vec.size()-1];vec.pop_back();
            x1 = vec[vec.size()-1];vec.pop_back();
            switch(str[i]){
                case '+':
                    r=x1+x2;break;
                case '-':
                    r = x1-x2;break;
                case '*':
                    r= x1*x2;break;
                case '/':
                    r = x1/x2;break;
            }
            vec.push_back(r);

        }
    }
    return vec[vec.size()-1];
}
int main(){
    string str;
    cout<<"Enter the infix expression: ";
    cin>>str;
    string ans = InfixToPostfix(str);
    cout<<"The output is: "<<ans<<endl;
    int n = Evaluation(ans);
    cout<<"The value of the infix expression is: "<<n<<endl;
}