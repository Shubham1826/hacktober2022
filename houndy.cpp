#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>N>>M;
        int arr[N];
        int arr1[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        int ct=0;
        for(int i=0;i<N;i++){
            
                int r=arr[i]+arr1[i+1];
                
                int s=(arr[i]-arr[i+1])%M;
arr1[ct]=r+s;
ct++;
          //#include<bits/stdc++.h>         //iterators point to elements of containers
// using namespace std;
// int main(){
//     vector<int> v={2,3,4,5,6};
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     vector<pair<int,int>> v_p={{1,2},{2,4}};
//     vector<pair<int,int>> :: iterator it;
//     for(it=v_p.begin();it!=v_p.end();it++){
//         cout<<(*it).first<<" "<<(*it).second<<endl;
//         cout<<it->first<<" "<<it->second<<endl;
//     }
   
}
            }
        
            cout<<*max_element(arr1,arr1+(N));
    }
        }
    

