#include<bits/stdc++.h>
using namespace std;
int main(){
int p,s,t,h,x;
cin >> p >> s >> t >> h >> x;
int cost = p*x;
int extra = (s-x)-t;
if(extra<0)
cost += abs(extra)*(h-p);
cout << cost;
}