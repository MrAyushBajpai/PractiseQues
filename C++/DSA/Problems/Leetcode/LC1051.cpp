#include <iostream>
#include <algorithm>
#include <limits.h>
#include <vector>
using namespace std;

int heightCheckerSort(vector<int>& heights) {
    int count = 0;

    vector<int> OriginalHeights = heights;
    sort(heights.begin(), heights.end());

    for(int i = 0; i < heights.size(); i++){
        if(OriginalHeights[i] != heights[i]){
            count++;
        }   
    }
    return count;
}

 
int main(){
    vector<int> heights = {1,2,3,4,5};
    cout << heightCheckerSort(heights);
}