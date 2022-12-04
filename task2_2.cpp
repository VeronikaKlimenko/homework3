#include <iostream>
using namespace std;
int main(){

int array[100],max=0,k=0;
        //заповнити масив
        for(int i=0; i<100; i++){
         array[i]=((rand() % 101)-50 );
        }
        //вивід масиву

        cout <<'\n'<< "masiv: ";
        for (int i=0;i<100; i++) {
        cout << array[i] << " ";
        }
        int modul,tempk;
        for (int i = 0; i < 100; i++) {
        modul = abs(array[i]);
        tempk = 0;
            for (int j = 0; j < 100; j++) {
                if (abs(array[j]) == modul)
                    tempk++;
            }
                if (tempk > k) {
                    k = tempk;
                    max = modul;
                }
        }
    cout <<'\n'<< "naibilshe zystrich abs znach:=" <<max <<" kilkist raziv:=" <<k;
return 0;
}