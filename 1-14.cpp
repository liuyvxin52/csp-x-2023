/* 
14. 以下函数的时间复杂度为（ ）。
#include<iostream>

using namedpace std;
*/
int f(int n){
if(n==0||n==1) return 1;
return f(n/2)+f(n/2)+f(n/2)+f(n/2);
}
/*
int main(){
    To use your f(x)
}
A. O(nlogn)
B. O(n^2)
C. O(n^2logn)
D. O(2^n)