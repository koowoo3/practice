#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<int> v;
int arr[21];

int main()
{
    int cnt=0, check=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }     
    
    stack<int> s;
    int index=1;
    s.push(v[0]);
    arr[v[0]]++;
    while(index<n && s.size()!=0){
        if(index==n){ index--; check=1;}
        if(!check){
            if(s.top()==v[index]){  //동일 값이 들어온다. 
                index++;
                continue;
            }
            if(arr[v[index]]){ //이전에 들어온 값인데 또 들어왔다.
                arr[v[index]]--;
                s.pop();
                cnt++;
                continue;
            }
            s.push(v[index]); // 그 이외라면 값을 넣어준다. 
            arr[v[index]]++;
            index++; 
        }
        else{
        
        }
    } 
    cout<<cnt;
}
