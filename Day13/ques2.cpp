//Given two numbers as stings s1 and s2. Calculate their Product.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1="33";
    string s2="2";

    int num1 = stoi(s1);
    int num2 = stoi(s2);

    int num3=num1*num2;

    cout<<to_string(num3);
}