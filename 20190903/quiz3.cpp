#include <iostream>

#include <string>

using namespace std;

int main()

{

    string input_a;

    int num_a;

    string input_b;

    int num_b;

    cout << "enter a number" << endl;

    cin >> input_a;

    cout << "enter another number << endl;

    cin >> input_b;

    num_a = atoi(input_a);

    num_b = atoi(input_b);

    cout << "answer=" << num_a * num_b << endl;

}
