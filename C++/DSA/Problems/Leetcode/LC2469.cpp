// https://www.leetcode.com/problems/convert-the-temperature/

#include <iostream>
#include <vector>
using namespace std;

vector<double> convertTemperature(double celsius){
    double kelvinTemp = celsius + 273.15;
    double fahrenheitTemp = celsius * 1.80 + 32;

    return {kelvinTemp, fahrenheitTemp};
}

int main(){
    double celsiusTemp;
    cin >> celsiusTemp;

    vector<double> res = convertTemperature(122.11);
    for (auto it: res){
        cout << it << endl;
    }
}