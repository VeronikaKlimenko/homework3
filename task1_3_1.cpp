#include <iostream>
int main(){
    int n=0;
    std::cout<<"Vvedite n" << std::endl;
    std::cin >> n;
    if (n<1){
        std::cout<<"pomilka, try again" << std::endl;
    } else {
        int k,a,kilk=0;
        for (int i=0;i<n;i++){
            std::cin >> a;
            if (a+k==0 && i>0){
                kilk=kilk+1;
            }
            k=a;
        }
        std::cout<<"kilkist par suma=0: " << kilk << std::endl;
    }
    return 0;
}