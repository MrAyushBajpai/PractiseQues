#include <iostream>
#include <vector>
using namespace std;

#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int minMovesToSeat(vector<int>& seats, vector<int>& students) {
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());

    int totalMoves = 0;
    for (int i = 0; i < seats.size(); ++i) {
        totalMoves += abs(seats[i] - students[i]);
    }
    return totalMoves;
}

int main() {
    vector<int> seats = {3, 1, 5};
    vector<int> students = {2, 7, 4};

    int result = minMovesToSeat(seats, students);
    cout << "Minimum moves required: " << result << endl;

    return 0;
}
