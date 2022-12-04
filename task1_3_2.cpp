#include <iostream>
int main(){
    for (int i = 100, cnt = 0; i < 1000; i++){
            bool simple=true;

            for (int j=2; j<i;j++){
                if(i%j==0)
                    simple=false;  
            }
            if (simple){std::cout<< i << std::endl;}
    }
    return 0;
}