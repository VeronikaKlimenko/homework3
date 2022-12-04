#include <iostream>
int main(){
    int k,suma,kilk=0;
    std::cout<<"Vvedite n kotoroe <100" << std::endl;
    std::cin >> k;
    if (k<0 or k >= 100){
        std::cout<<"pomilka, try again" << std::endl;
    }else {
        for (int gr1=0;gr1<100;gr1++){
            for (int gr2=0;gr2<=50;gr2++){
                for (int gr5=0;gr5<=20;gr5++){
                    for(int gr10=0;gr10<=10;gr10++){
                        suma=10*gr10+5*gr5+2*gr2+1*gr1;
                        if (suma==k){
                            std::cout<<gr10 << " kypyr nominalom desat " << 
                            gr5 << " kypyr nominalom piat " << 
                            gr2 <<" kypyr nominalom dva "<<
                            gr1 <<" kypyr nominalom odin" << std::endl;
                            kilk++;
                        }
                    }
                }
            }
        }
        std::cout <<"Kilkist variantov: " << kilk << std::endl;
    }
    return 0;
}