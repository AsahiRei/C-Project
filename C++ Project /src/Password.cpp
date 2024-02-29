//pincode password
//coded by Arn
#include <iostream>
using namespace std;
int main() {
    //
    cout << "< -- Two Dimensional Pin Code -->\n";
    
    //create an array numbers
    string tables[3][3] = {
        //col
        {"1", "2", "3"}, //row
        {"4", "5", "6"},
        {"7", "8", "9"}
    };
    //iterate the row and col
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << tables[row][col] + " ";
        }
        cout << "\n";
    }
    
    //creating while loop
    int intv = 0;
    //set flags
    bool flag1, flag2, flag3 = false;
    string insert;
    while (intv < 3) {
        cout << "Input the row and column number: \n";
        cin >> insert;
        //if 1 was declared
        if (insert == "1") {
            tables[0][0] = "x";
        }
        //if 2 was declared
        else if (insert == "2") {
            tables[0][1] = "x";
        }
        //if 3 was declared
        else if (insert == "3") {
            tables[0][2] = "x";
        }
        //if 4 was declared
        else if (insert == "4") {
            tables[1][0] = "x";
        }
        //if 5 was declared
        else if (insert == "5") {
            tables[1][1] = "x";
        }
        //if 6 was declared
        else if (insert == "6") {
            tables[1][2] = "x";
        }
        //if 7 was declared
        else if (insert == "7") {
            tables[2][0] = "x";
        }
        //if 8 was declared
        else if (insert == "8") {
            tables[2][1] = "x";
        }
        //if 9 was declared
        else if (insert == "9") {
            tables[2][2] = "x";
        }
        else {
            break;
        }
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << tables[row][col] + " ";
            }
            cout << "\n";
        }
        
        //when a number in its row and col
        //was modified into "x" the flags
        //will declare as true
        if (tables[0][0] == "x") {
           flag1 = true;
        }
        if (tables[0][1] == "x") {
           flag2 = true;
        }
        if (tables[0][2] == "x") {
           flag3 = true;
        }
        intv++;
    }
    if (flag1 && flag2 && flag3) {
        cout << "You open the treasure! \n";
    }
    else {
        cout << "Incorrect password! \n";
    }
    return 0;
}