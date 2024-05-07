#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,3,2,1,4,2};
    vector<int> v;
    stack<int> s;
    for(int i=0;i<arr.size();i++){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if((s.size()>0) && s.top()>arr[i]){
            v.push_back(s.top());
        }
        else if((s.size()>0) && s.top()<=arr[i]){
            while((s.size()>0) && s.top()<=arr[i]){
            s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    // reverse(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    // return v;
}