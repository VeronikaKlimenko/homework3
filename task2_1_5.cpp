#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout << "n:=";
    cin >> n;
    if (n<1){
        cout <<"wrong value, try again";
    } else{
        double array[n];
        //заповнити масив
        for(int i=0; i<n; i++){
        cin >> array[i];
        }
        //менше А та на якій позиції  ост еле <0
        double a, suma=0;
        int k=0,j=0;
        bool check=false;
        cout << "A:=";
        cin >> a;

        for(int i=0; i<n; i++){
        if (array[i]<a) k++;

        if (array[i]<0){ j=i;check=true;}
        }
        //сума
        if (check){
            double temp,temp2;
            for(int i=j+1; i<n; i++){
                temp=array[i];
                modf(temp,&temp2);
                suma=suma+temp2;
            }
        }
        cout << "menshe A:=" << k <<" suma pisla last<0:=" <<  suma;
        //poshyk max
        double max=array[0];

        for (int i = 0; i < n; i++){
            if (array[i]> max){
                max = array[i];
            }
        }

        double array2[n],diff=max*0.2;;
        int b=0;

        //b- перша половина 2-гого масиву, а 2-га половина 2-гого пасиву
        for(int i=0; i<n;i++){

            if ((array[i]<=(max+diff)) && (array[i]>=(max-diff))){
                array2[b]=array[i];
                b++;
            }
        }

        for(int i=b-1; i<n;i++){
            if ((array[i]>=(max+diff)) || (array[i]<=(max-diff))){
                array2[b]=array[i];
                b++;
            }
        }
        //вивід масиву
        cout <<'\n'<< "masiv: ";
        for (int i=0;i<n; i++) {
        cout << array2[i] << " ";
    }
        
    }
    return 0;
}