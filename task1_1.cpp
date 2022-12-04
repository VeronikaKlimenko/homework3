#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"yakim sposobom vykonati zavdanna 1 - switch, 2 - if"<< endl;
    cin >> a;

    if (a!=1 && a!=2){ 
    cout<< "Nepravilne znachenna, sprobyi znovy" << endl;
    } else if (a==1){
        cout<< "Na scladi tovari pid nomerami: 101, 102, 103, 104, 105, 106. Vvedit nomer i zmozete diznatis informaziy" << endl;
        int n;
        cin >> n;
    switch (n){
        case 101:
        cout << "zina: 10$, kilkist: 60 "<< endl;
        break;
        case 102:
        cout << "zina: 15$, kilkist: 50"<< endl;
        break;
        case 103:
        cout << "zina: 20$, kilkist: 40"<< endl;
        break;
        case 104:
        cout << "zina: 25$, kilkist: 30"<< endl;
        break;
        case 105:
        cout << "zina: 30$, kilkist: 20"<< endl;
        break;
        case 106:
        cout << "zina: 35$, kilkist: 10"<< endl;
        break;
        default: cout << "tovary z takim nomerom nema"<< endl;
    }
    } else if (a==2){
        cout<< "Na scladi tovari pid nomerami: 101, 102, 103, 104, 105, 106. Vvedit nomer i zmozete diznatis informaziy" << endl;
        int n;
        cin >> n;
        if(n==101) cout << "zina: 10$, kilkist: 60 "<< endl;
        else if (n==102) cout << "zina: 15$, kilkist: 50 "<< endl;
        else if (n==103) cout << "zina: 20$, kilkist: 40 "<< endl;
        else if (n==104) cout << "zina: 25$, kilkist: 30 "<< endl;
        else if (n==105) cout << "zina: 30$, kilkist: 20 "<< endl;
        else if (n==106) cout << "zina: 35$, kilkist: 10 "<< endl;
        else cout << "tovary z takim nomerom nema"<< endl;
    }
    system ("pause>>void");
    return 0;
}