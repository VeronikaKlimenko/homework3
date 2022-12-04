#include <iostream>
#include <cmath>
using namespace std;
const int i=11;
int main(){
//якщо я правильно зрозуміла завдання, то для а я використовувала функцію 16(і+5) а для б 17(і+6), оскільки я 11 варіант
   float a=0,b=0,Z,temp;
   int k=i,x;
   for (k;k<=i+5;k++){
    x=k;
    temp=2*pow(log(abs(x-1.5)),6)/log10(abs(x-3.7)+8);
    a=a+temp;
   }
   for (k;k<=i+8;k++){
    x=k;
    temp=0.7*log(abs(6+x))+cos(4.6*x);
    b=b+temp;
   }
   Z=a-2*b;
   cout << "i:="<<i << " a:=" <<a << " b:="<< b << " Z:=" << Z;
   return 0;
}