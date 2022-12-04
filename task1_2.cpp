#include <iostream>
using namespace std;
int main(){
    float R,x,y;
    cout<<"vvedit R ";
    cin >>R;
    cout<<"vvedit x ";
    cin >>x;
    cout<<"vvedit y ";
    cin >> y;
    if((x*x+y*y<=R) &&(((x>=y) && (x<=0))||((x>=0)&&(x<=y)))){
        cout<< "Tak, vhodit";
    }else {
    cout<< "Ni, ne vhodit";
    }
return 0;
}