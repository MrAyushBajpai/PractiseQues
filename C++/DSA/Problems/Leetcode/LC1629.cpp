#include <iostream>
#include <vector>
using namespace std;

char slowestKey(vector<int>& releaseTimes, string keysPressed) {
    int maxDuration = releaseTimes[0];
    char key = keysPressed[0];
    
    for(int i = 1; i < releaseTimes.size(); i++){
        int duration = releaseTimes[i] - releaseTimes[i-1];
        if (duration > maxDuration){
            maxDuration = duration;
            key = keysPressed[i];
        }
        else if(duration == maxDuration){
            key = max(key, keysPressed[i]);
        }
    }
    return key;
}

int main(){
    vector<int> arr = {1,2};
    string keysPressed = "ba";

    cout << slowestKey(arr, keysPressed);
}