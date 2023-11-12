#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a,int b,int c,int d){
    if(a>b && a>c && a>d){
        return a;
    }
    else if(b>a && b>c && b>d){
        return b;
    }
    else if(c>b && c>a && c>d){
        return c;
    }
    else{
        return d;
    }
}

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int answer=max_of_four(a,b,c,d);
    cout<<answer<<endl;
    
    return 0;
}