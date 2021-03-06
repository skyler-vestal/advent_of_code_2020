#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    ifstream txt_file("input.txt");
    int num;
    while (txt_file >> num) {
        nums.push_back(num);
    }
    for (size_t i = 0; i < nums.size(); ++i) {
        for (size_t j = i + 1; j < nums.size(); j++) {
            if (i != j && nums[i] + nums[j] == 2020) {
                cout << nums[i] * nums[j];
                txt_file.close();
                return 0;
            }
        }
    }
    txt_file.close();
    return 0;
}