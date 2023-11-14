#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        double Hc, Dc, Hm, Dm;
        int c[3];
        bool state = false;
        cin >> Hc >> Dc >> Hm >> Dm;
        for (int z = 0; z < 3; z++){
            cin >> c[z];
        }
        if (ceil(Hm/Dc) <= ceil(Hc/Dm)){
            state = true;
        }else{
            if (c[0] > 0){
                for (int w = 0; w <= c[0]; w++){
                        if (ceil(Hm/(Dc+(w*c[1]))) <= ceil((Hc+(c[0]-w)*c[2])/Dm)){
                            state = true;
                            break;
                        }
                    }
                }
            }
        if (state){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}