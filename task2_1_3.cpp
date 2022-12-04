#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "n:=";
    cin >> n;
    if (n<1){
        cout <<"wrong value, try again";
    } else{
    float array[n];
    //заповнити масив
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    //min ta max
    float min=array[0],max=array[0],maxi=0,mini=0;

    for (int i = 0; i < n; i++){
        if (array[i]> max){
            max = array[i];
            maxi=i;
        }
        if (array[i]< min){
            min=array[i];
            mini=i;
        }
    }
    float sumaVid=0,dobutok=1;
    //сума мінімальних
    for(int i=0; i<n; i++){
        if (array[i]<0) sumaVid=sumaVid+array[i];
    }
    //добуток між макс та мін (НЕ ВКЛЮЧНО)
    int startfrom=0,endat=0;

    if (maxi>mini){ startfrom=mini; endat=maxi;}
    else{ startfrom=maxi; endat=mini;}

    for(int i=startfrom + 1; i<endat; i++){
        dobutok=dobutok*array[i];
    }

    cout <<"sumaVid:=" << sumaVid << " dobutok miz min ta max:=" << dobutok;

    //за зростанням бульбашкою
    int temp; 
    for (int i=0;i<n-1; i++) {
        for (int j=0;j<n-i-1;j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j + 1] = temp;
            }
        }
    }
    //вивід масиву
    cout <<'\n'<< "masiv: ";
    for (int i=0;i<n; i++) {
        cout << array[i] << " ";
    }
    }
return 0;
}