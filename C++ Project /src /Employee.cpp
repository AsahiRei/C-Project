#include <iostream>
using namespace std;
class Auxiliary {
    private:
        string name;
    public:
        void setName(string name) {
            this -> name = name;
        }
    public:
        string getName() {
            return name;
        }
    private:
        double MonthlySalary;
    public:
        void setMonthlySalary(double MonthlySalary) {
            this -> MonthlySalary = MonthlySalary;
        }
    public:
        double getMonthlySalary() {
            return MonthlySalary;
        }
    private:
        double ratePerHour;
        int hoursWorked;
        double wage;
    public:
        void setWage(double ratePerHour, int hoursWorked) {
            this -> ratePerHour = ratePerHour;
            this -> hoursWorked = hoursWorked;
        }
    public:
        double getWage() {
            wage = (ratePerHour * hoursWorked);
            return wage;
        }
};
int main() {
    Auxiliary aux;
    string name, sel;
    cout << "Enter your name: ";
    cin >> name;
    aux.setName(name);
    cout << "Type F if it is Full Time or P if it is Part Time: ";
    cin >> sel;
    if (sel == "F") {
        double salary;
        cout << "Enter Monthly Salary: ";
        cin >> salary;
        aux.setMonthlySalary(salary);
        cout << "Name: " << aux.getName() << "\n";
        cout << "Monthly Salary: " << aux.getMonthlySalary();
    }
    else if (sel == "P") {
        double rph;
        int rw;
        cout << "Enter Rate Per Hour: ";
        cin >> rph;
        cout << "Enter Hours Worked: ";
        cin >> rw;
        aux.setWage(rph, rw);
        cout << "Name: " << aux.getName() << "\n";
        cout << "Monthly Salary: " << aux.getWage();
    }
    return 0;
}
