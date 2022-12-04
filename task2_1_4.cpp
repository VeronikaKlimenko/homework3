#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "n:=";
    cin >> n;
    if (n<1){
        cout <<"wrong value, try again";
    } else{
        int array[n];
        //заповнити масив
        for(int i=0; i<n; i++){
        cin >> array[i];
        }

        // знайти мін за модулем та номер 0
        int min=abs(array[0]),k=0;
        bool first=true;
        for (int i = 0; i < n; i++){
            if (abs(array[i])<min){
                min=array[i];
            }
            if  (array[i]==0 && first){
                k=i;
                first= !first;
            }
        }
        //suma pislya k, якщо ми знайшли k
        int suma=0;
        if (!first){
            for(int i=k; i<n; i++){
                suma=suma+abs(array[i]);
            }
        }
        cout <<"min:="<< min << "; suma after first 0:=" << suma;
        int array2[n], b=0, a=n/2;
        if (n%2==1){a++;}//для непарних
        //b- перша половина 2-гого масиву, а 2-га половина 20гого пасиву
        for(int i=0; i<n;i++){
            if (i % 2==0){
                array2[b]=array[i];
                b++;
            }else{
                array2[a]=array[i];
                a++;
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