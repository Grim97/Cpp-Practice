#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    // gets two variable and calculate the sum and print
    int var_a, var_b, output_c;
    std::cout << "Enter two inputs - " << endl;
    std::cin >> var_a >> var_b;
    std::cout << "Inputs entered are: " << var_a << " And " << var_b<<endl;
    output_c = var_a + var_b;
    std::cout << "Final output is " << output_c<<endl;

    //below code takes user name and print
    string name;
    std::cout << "What's your name ?" << endl;
    std::cin.clear();
    std::cin.sync();
    // to ignore the enter given during start. that enter bypasses the ctrl of getline.
    // To pause in getline this is needed
    getline(cin, name);
    // std::cin >> name;
    std::cout << "Welcome " << name;
    return 0;
}