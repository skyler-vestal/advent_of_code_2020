#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    ifstream txt_file("input.txt");
    size_t total = 0;
    string line;
    while (getline(txt_file, line)) {
        size_t min = stoi(line.substr(0, line.find('-'))) - 1;
        size_t max = stoi(line.substr(line.find('-') + 1, line.find(' '))) - 1;
        char let = line.substr(line.find(' '), line.find(':')).at(1);
        string pass = line.substr(line.find(": ") + 2);
        //cout << min << " " << max << " " << let << " " << pass << endl;
        //cout << (pass.at(min) == let) << " " << (pass.at(max) == let) << endl;
        if ((pass.at(min) == let) != (pass.at(max) == let)) {
            ++total;
        }
    }
    cout << "Total: " << total << endl;
    txt_file.close();
    return 0;
}