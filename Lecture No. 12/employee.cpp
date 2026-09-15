# include <iostream>

using namespace std;
class Employee{
    private:
    string name;
    int empID;
    float salary;

    public:

    void setName(string employeeName){
            name = employeeName;
        }

        void setEmpID(int id){
            if(id > 0){
                empID = id;
            }else{
                cout << "Invalid Employee ID!" << endl;
            }
        }

        void setSalary(float employeeSalary){
            if(employeeSalary >= 0){
                salary = employeeSalary;
            }else{
                cout << "Invalid Salary!" << endl;
            }
        }

        string getName(){
            return name;
        }
        int getEmpID(){
            return empID;
        }
        float getSalary(){
            return salary;
        }
        void display(){
            cout << "\nEMPLOYEE INFORMATION" << endl;
            cout << "Name: " << name << endl;
            cout << "Employee ID: " << empID << endl;
            cout << "Salary: " << salary << endl;
        }

};
int main(){
    Employee emp;
    emp.setName("Ali");
        emp.display();
        //emp.name = "Ahmed"; // This line will cause a compilation error because 'name' is private
    return 0;
}