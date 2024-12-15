#include <bits/stdc++.h>
using namespace std;

int findGCD(int num1, int num2){
    while (num1 > 0 && num2 > 0){
        if (num1 > num2)
            num1 = num1 % num2;
        else num2 = num2 % num1;
    }
    
    return (num1 == 0)? num2: num1;
}
/*
    That is a math algorithms which is called Euclidean Algorithm. Basically, it says us,
    gcd(a, b) = gcd(a-b, b) [if a >= b]. when a == 0, gcd = b, else b == 0, gcd = a;
    So, we can say:
    gcd(16, 12) = gcd(4, 0) -> gcd = 4
*/
int main(){
    int num1 = 12, num2 = 16;
    int result = findGCD(num1, num2);
    
    cout << result;
    
    return 0;
}
