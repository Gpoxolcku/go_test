#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {

    if (argc != 2) {
        cout << "Invalid arguments passed." << endl;
        return -1;
    }

    ifstream file_stream(argv[1]);
    if(!file_stream.is_open()) {
        cout << "No such file exists." << endl;
        return -1;
    }

    unsigned string_counter = 0;
    string dummy;
    while(getline(file_stream, dummy, '\n')) {
        ++string_counter;
    }
    cout << string_counter << endl;
    file_stream.close();
    return 0;
}