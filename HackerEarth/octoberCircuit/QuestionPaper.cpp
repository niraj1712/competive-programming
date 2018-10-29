#include<bits/stdc++.h>
using namespace std;
int marks(int total,int correct,int a,int b){
    int incorrect = total- correct;
    return (correct*a - incorrect*b); 
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        map<int,bool> myMap;
        int arr[1000000];
        for(int j=0;j<1000000;j++)
        arr[j]=0;
        set<int> mySet;
        long long res=0;
        for(int i=n;i>=0;i--){
            for(int k=i;k>=i/2;k--){
                int mark = marks(i,k,a,b);
                int mark1= marks(i,i-k,a,b);
                if(arr[abs(mark)]==0)
                {
                    if(mark<0)
                    arr[abs(mark)]=2;
                    else
                    arr[abs(mark)]=1;
                    res++;
                }
                if(arr[abs(mark)]==1){
                    if(mark<0){
                        arr[abs(mark)]=3;
                        res++;
                    }
                }
                if(arr[abs(mark)]==2){
                    if(mark>0){
                        arr[abs(mark)]=3;
                        res++;
                    }
                }
                
                
                
                
                if(arr[abs(mark1)]==0)
                {
                    if(mark1<0)
                    arr[abs(mark1)]=2;
                    else
                    arr[abs(mark1)]=1;
                    res++;
                }
                if(arr[abs(mark1)]==1){
                    if(mark1<0){
                        arr[abs(mark1)]=3;
                        res++;
                    }
                }
                if(arr[abs(mark1)]==2){
                    if(mark1>0){
                        arr[abs(mark1)]=3;
                        res++;
                    }
                }
                
            }
        }
        cout << res << endl;
    }
}