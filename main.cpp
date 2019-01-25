#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void ClearScreen() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}


int main() {
    int val;
    int flag;
    flag = 0;
    string stampName;
    ofstream outFile;
    ifstream inFile;
    do {
        //ClearScreen();
        cout << "Welcome to Ben's Program!\nSelect option from list (1-9)\n";
        cout << "1) Enter new Stampin Up! stamp\n";
        cout << "2) See all Stampin Up! stamps\n";
        cout << "9) Exit the Stamp Collector\n";
        cout << "Selection: ";
        cin >> val;
        switch (val) {
            case 1:
                cout << "Name of stamp: ";
                cin >> stampName;
                //check if file exists
                //if not create, otherwise append to end
                outFile.open("test.txt", ios::app);
                outFile << stampName << endl;
                outFile.close();
                break;
            case 2:
                cout << "Current Stamps" << endl;
                inFile.open("test.txt");
                if (inFile.is_open()) {
                    cout << "open" << endl;
                    while (!inFile.eof()) {
                        getline(inFile, stampName);
                        cout << stampName << endl;
                    }
                }
                inFile.close();
                //cout << "press enter to continue";
                break;
            case 3:
                cout << "case 3" << endl;
                break;
            case 9:
                cout << "exiting program\n";
                flag = 1;
                exit(0);
        }
    } while (flag == 0);

return 0;
}