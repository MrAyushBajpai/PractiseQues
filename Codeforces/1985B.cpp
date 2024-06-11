#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t){
        int n, maxsum = 0, maxvalue = 0;
        cin >> n;

        for(int i = 2; i <= n; i++){
            int sum = 0;
            for(int j = 1;;j++){
                if(j * i > n) break;

                sum += j * i;
            }
            if (sum > maxsum){
                maxsum = sum;
                maxvalue = i;
            }
        }
        cout << maxvalue << endl;
        t--;
    }
}