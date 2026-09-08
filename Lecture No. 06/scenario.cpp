# include <iostream>

using namespace std;

int totalCalls = 0;

int previewMarks(int m){

    return m = m+5;

}

int updateMarks(int &m){
    return m = m + 5;

} 
int activityCounter(){
    static int callNumber = 0;
    int temporary = 100;
    callNumber++;
    
    totalCalls++;
   return callNumber;
}
int main(){
    int marks = 70;
     int pr =previewMarks(marks);
     string name = "Ali";
    
     cout << "Before byValue: " << marks << endl;
     cout << "Inside byValue: " << pr << endl;
     cout << "After byValue:" << marks << endl;
     int um = updateMarks(marks);
     cout << "Inside byReference: " << um << endl;
     cout << "After byReference: " << marks << endl;
     int ac = activityCounter();
     ac = activityCounter();
     ac = activityCounter();

     cout << "Function called: "  << ac << endl;
     cout << "Total Calls: "  << totalCalls;
}