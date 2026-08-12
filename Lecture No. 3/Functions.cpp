# include <iostream>

using namespace std;

float add(float a, float b, float c){

    return (a+b+c);
}

float calculatePercent(float d){
    return (d/300)*100;
}

void checkResult(float e){

    if (e >=50){
        cout << "\nPass";
    }
    else{
        cout << "\nFail";
    }
}

void checkGrades(float f){

     if(f >= 85){
        cout << "\nGrade: A";
    }
    else if(f >= 75){
        cout << "\nGrade: B";
    }
    else if(f >= 65){
        cout << "\nGrade: C";
    }
    else if(f >= 55){
        cout << "\nGrade: D";
    }
    else if(f >= 50){
        cout << "\nGrade: E";
    }
    else{
        cout << "\nGrade: F\n";
    }
}

void showResult(string n, float o, float p){
    cout << "\nComplete Result " << n;
    cout << "\nStudent Name: " << n;
    cout << "\nObtained Marks: " << o;
    cout << "\nPercentage: " << p << "%";
}
int main()
{
    string stdName;
    float sub1, sub2,sub3;
    float total, percent;

    cout << "Enter Student Name: ";
    cin >> stdName;

    cout << "Enter marks of Sub1: ";
    cin >> sub1;

    cout << "Enter marks of Sub2: ";
    cin >> sub2;

    cout << "Enter marks of Sub3: ";
    cin >> sub3;
    
    total = add(sub1, sub2, sub3);

    //Function calling
    
    percent = calculatePercent(total);
    checkResult(percent);

    checkGrades(percent);

    showResult(stdName, total, percent);

    return 0;
}
