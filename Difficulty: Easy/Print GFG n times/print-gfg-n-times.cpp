#include <iostream>
using namespace std;

void printname(int n, int i, string name){
    if(i==n)return;
    cout<<name<<" ";
    printname(n,i+1,name);
}

int main() {
    int n;
    cin >> n;
    
    printname(n,0,"GFG");
    return 0;
}
