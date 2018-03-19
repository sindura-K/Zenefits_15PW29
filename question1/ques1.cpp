#include<iostream>
#include<string>
using namespace std;
class btree{
    int value;
    btree *left;
    btree *right;
    public:
        btree(){
            left=null;
            right=null;
        }
}*head;
static int i =2;
btree constructTree(string s){
    btree *b;
    if(s[i]!='{'&&s[i]!='}'&&s[i]!=','){
          b->value=s[i];
        }
        i++;
    if(s[i+2]!='}'){
        i++;
        b->left=constructTree(s);
    }
    else{
        i++;
        b->right=constructTree(s);
    }
    return b;
}

void inorder(string s){
    btree *fnode;
    fnode = constructTree(s);
}

int main(){
    int n ;
    cin>>n;
    string s[n];
    for(int i = 0 ;i<n;i++){
        cin>>s[i];
    }
    for(int i = 0 ;i<n;i++){
        inorder(s[i]);
    }
}
