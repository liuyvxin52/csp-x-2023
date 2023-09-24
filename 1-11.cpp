/*
11. 下列代码执行后，s 的值是（ ）。
#include<iostream>

using namespace std;

int main(){
*/
    int s=0;
    for(int i=1;i<=100;i++)
    for(int j=1;j<=i;j++) s++;
    cout<<s<<endl;
    /*
}
A. 100 
B. 10000 
C. 200 
D. 5050