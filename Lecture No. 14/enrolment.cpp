# include <iostream>

using namespace std;
class CourseEnrollment{
    private:
    string studentName;
    int registrationNumber;
    int creditHours;
    float feePerCreditHour;
    float paidAmount;
    bool validEnrollment;
public:
CourseEnrollment(){
    studentName = "Not Registered";
    registrationNumber = 0;
    creditHours = 0;
    feePerCreditHour = 0;
    paidAmount = 0;
    validEnrollment = false;
    cout << "Empty Enrollment record created" << endl;
}
 CourseEnrollment (string name, int rn, int ch, float fpch, float pa){
    studentName = name;
    
    if(ch >= 1 && rn > 0 && fpch > 0 && pa >= 0){
        paidAmount = pa;
    creditHours = ch;
    registrationNumber =rn;
    feePerCreditHour = fpch;
    validEnrollment = true;
    cout << "Enrollment successfully created." << endl;
    }
    else{
        validEnrollment = false;
        cout << "Enrollment rejected because of invalid enteries." << endl;
    }
 }
 float calculateTotalFee(){
    if (validEnrollment == false){
        return 0;
    }
    return creditHours * feePerCreditHour;
 }

 float remainingFee(){
    if(validEnrollment == false){
      
        return 0;
    }
    return calculateTotalFee() - paidAmount;
 }

 void payFee(float pa){
    cout << "You want to pay Rs. " << pa << endl;
    if(validEnrollment == false){
        cout << "Payment rejected because u r not enrolled" << endl;
    }
    else if(pa <= 0){
        cout << "Payment rejected because payment is less than or equal to ZERO" << endl;
    }
    else if (pa > remainingFee() ){
        cout << "Payment rejected because payement exceeds remaining fee" << endl;
        cout << "Your remaining fee is " << remainingFee() << endl;
    }
    else if( remainingFee() == pa){
        cout << "Full fee paid" << endl;
    }
    else{
        paidAmount = paidAmount+pa;
    }

 }
 void display(){
    cout << "Student Name: " << studentName << endl;
    cout << "Registration Number: " << registrationNumber << endl;
    cout << "Credit Hours: " << creditHours << endl;
    cout << "Fee Per Credit Hour: " << feePerCreditHour << endl;
    cout << "Total Fee: " << calculateTotalFee() << endl;
    cout << "Paid Amount: " << paidAmount << endl;
    cout  << "Remaining Fee: " << remainingFee() << endl;
    cout << "Enrollment status: "; 
    if(validEnrollment == false){
        cout << "invalid" << endl;
    }
    else{
        cout << "valid" << endl;
    }

 }
};
int main(){
    CourseEnrollment ce ("Ali", 90, 15, 2000, 10000);

    ce.display();
}