#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;

// Vector of int to store the records
typedef vector<int> Records;

class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}

    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (!_file.is_open()) {
            cerr << "Error: Unable to open file: " << _filename << endl;
            return;
        }
        string line;
        while (getline(_file, line)) {
            try {
                int number = stoi(line);
                records.push_back(number);
            } catch (const invalid_argument &e) {
                cerr << "Wrong argument when reading the file: " << _filename << ". Line: " << line << endl;
            } catch (const out_of_range &e) {
                cerr << "Out of range when reading the file: " << _filename << ". Line: " << line << endl;
            }
        }
        _file.close();
    }
};

int main() {
    RecordsManager recordM("test_clean.txt");
    // RecordsManager recordM("test_corrupt1.txt");
    // RecordsManager recordM("test_corrupt2.txt");
    Records myRecords;

    // Reads records
    recordM.read(myRecords);

    // Calculate and print out the sum
    int sum = 0;
    for (int i = 0; i < myRecords.size(); i++) {
        sum += myRecords[i];
    }
    cout << sum << endl;
    return 0;
}
