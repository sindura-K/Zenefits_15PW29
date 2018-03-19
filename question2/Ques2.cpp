#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
void dict(char s[]){
    int len = sizeof(s)/sizeof(s[0]);
    char g[len];
    strcpy(g,s+1);
    s = strcat(s,dict(sort(s,s+len)));
    cout<<s;
}
int fact(int n){
    if(n == 1)
        return n;
    n = n * fact(n-1);
}
int main(){
    int n;
    cin>>n;
    string s;
    char array[n],c[n];
    for(int i =0;i<n;i++){
        cin>>array[i];
        c[i]=array[i];
    }
    cin>>s;
    int fac = fact(n);
    string sarray[fac];
    sort(c,c+n);
    cout<<c;
    strcpy(c,c+1);
    cout<<c;
    dict(c);
}
