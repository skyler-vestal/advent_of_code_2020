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
            for (size_t k = j + 1; k < nums.size(); k++) {
                if (i != j && j != k && i != k && nums[i] + nums[j] + nums[k] == 2020) {
                    cout << nums[i] * nums[j] * nums[k];
                    txt_file.close();
                    return 0;
                }
            }
        }
    }
    txt_file.close();
    return 0;
}