#include<bits/stdc++.h>
using namespace std;

int n,k,cnt=0;
vector<int> v;
int arr[21];

vector<int> shrink(int bn){

    stack<int> s;
    int index=1;
    s.push(v[0]);
    arr[v[0]]++;
    while(index<bn && s.size()!=0){
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
    int temp[201];
    int num=s.size();
    for(int i=0;i<num;i++){
        temp[i]=s.top();
        s.pop();
    } 
    vector<int> vv;
    for(int i=num-1;i>=0;i--)
        vv.push_back(temp[i]);
    return vv;
        
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin>>n>>k; 
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    while(v.size()>1){  // stack의 사이즈가 1이될때까지 반복해준다.  
        int bn=v.size();
        memset(arr, 0, sizeof(arr));
        v=shrink(bn);
        if(v.size()==bn){
            cnt++;
            v.pop_back();
        }
    } 
    cout<<cnt;
}
//n이 1인경우는 따로생각.