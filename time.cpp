#include<iostream>
#define INF 1000000000
using namespace std;
int main(){
int n,i,j,k,s,t,m;
cin>>n>>m;
if (m) { int a[n][n];
for(i=0;i<n;++i)for(j=0;j<n;++j)
if(i==j)a[i][j]=0; else a[i][j]=INF;
for(k=0;k<m;++k){
cin>>i>>j;cin>>a[i-1][j-1];
a[j-1][i-1]=a[i-1][j-1];}
for(k=0;k<n;++k)
for(i=0;i<n;++i)
for(j=0;j<n;++j)
if(a[i][j]>a[i][k]+a[k][j])
a[i][j]=a[i][k]+a[k][j];
k=0;
for(i=0;i<n;++i)
for(j=0;j<n;++j)
if (a[i][j]<INF&&a[i][j]>k)k=a[i][j];
cout<<k; }
else cout<<0;
return 0;}