#include <iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
        int numberOne = 0;
        int numberTwo = 0;

        for (int  i = 0; i < numbers.size() - 1; i++) {
            for (int j = i + 1; j < numbers.size(); j++) {
                if (numbers[i] + numbers[j] == target) {
                    numberOne = i;
                    numberTwo = j;
                }
            }
        }
        return {numberOne, numberTwo};
}

int main() {
    int array[] = {3,2,4};
    vector<int> arrayToVactor(begin(array), end(array));
    vector<int> twoSumResult = twoSum(arrayToVactor, 6);

    if (twoSumResult.empty()) {
        cout << "[]";
    } else {
        cout << "[";
        for (int i = 0; i < twoSumResult.size(); i++) {
            if (i < twoSumResult.size() - 1) {
                cout << twoSumResult[i] << ",";
            } else {
                 cout << twoSumResult[i];
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
