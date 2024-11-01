#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int findMinDifference(vector<string>& timePoints) {
    vector<int> minutes;

    for (auto it: timePoints){
        int hours = stoi(it.substr(0,2));
        int min = stoi(it.substr(3,2));
        int totalMinutes = hours*60 + min;
        cout << totalMinutes << endl;
        minutes.push_back(totalMinutes);
    }
    
    sort(minutes.begin(), minutes.end());
    int minimum = INT_MAX;
    for(int i = 0; i < minutes.size() - 1; i++){
        if((minutes[i+1] - minutes[i]) < minimum){
            minimum = minutes[i+1] - minutes[i];
        }
    }

    if((minutes[0] + 1440 - minutes[minutes.size() - 1]) < minimum){
        minimum = minutes[0] + 1440 - minutes[minutes.size() - 1];
    } 
    return minimum;   
}

int main(){
    vector<string> timePoints = {"02:39","10:26","21:43"};
    cout << findMinDifference(timePoints);
}