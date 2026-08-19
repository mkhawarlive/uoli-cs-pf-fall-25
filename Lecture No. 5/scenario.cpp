# include <iostream>

using namespace std;

string uniName = "\nUniversity of Loralai";

void inputMarks(int &m1, int &m2, int &m3){
    cout << "Enter marks of 3 subjects:";
    cin >> m1 >> m2 >> m3;
}

int totalMarks(int mr1, int mr2, int mr3){
    int total = mr1+mr2+mr3;
    return total;
}
float percent(float t){
    float p = (t/300)*100;
    return p;
}

void graceMarks(float &total, float &percent){
        if(percent >=45 && percent < 50){
            total = total +5;
            percent = (total/300)*100;

            cout << "\nThe student is awarded 5 grace marks";
        }
}

void checkScholarship(float percent){
    if(percent >=80 && percent <= 100){
        cout << "\nMerit Scholarship";
        if(percent >= 90){
            cout << "\nYou are awarded with gold medal";
        }
    }
    else if(percent >= 70){
        cout << "\nPartial Scholarship";
    }
    else{
        cout << "\nNo scholarship";
    }

}

void displayResult(
    string name,
    int total,
    float percent
){
    cout << "\n\n********** Complete Result **********" << endl;
    cout << "University: " << uniName << endl;
    cout << "Student Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percent << endl;
    cout << "**************************************" << endl;
}
int main(){
string stdName;
int marks1, marks2, marks3;
float total;
float percentage;
cout << "\nEnter Student Name: ";
getline(cin, stdName);

inputMarks(marks1, marks2, marks3 );
total = totalMarks(marks1, marks2, marks3);
percentage = percent(total);
graceMarks(total, percentage);
displayResult(stdName, total, percentage);
checkScholarship(percentage);
return 0;
}