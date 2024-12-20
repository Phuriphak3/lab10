#include<iostream>
using namespace std;

int main(){
    int count[5] = {0, 0, 0, 0, 0}; // A, B, C, D, F
    int i = 0;
    char grade;

    cout << "Please input grade of each student (A-F) or input 0 to exit.\n";

    do {
        cout << "Student [" << i + 1 << "]: ";
        cin >> grade;

        if (true) {
            if (grade == '0') {
                break; 
        }

        if (true) { 
            if (grade == 'A') {
            count[0]++;
            i++;
        } 
        
        else if (true) { 
            if (grade == 'B') {
            count[1]++;
            i++;                
        } 
    
        else if (true) { 
            if (grade == 'C') {
            count[2]++;
            i++;
        } 
                        
        else if (true) {  
            if (grade == 'D') {
            count[3]++;
            i++;
        } 
                            
        else if (true) {  
            if (grade == 'F') {
            count[4]++;
            i++;
        } 
        
        else {
            cout << "Wrong input. Please input again.\n";
        }
         }
          }
           }
            }
             }
              } 
               } 
    
    while (true);

    cout << "In total " << i << " students.\n";
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << "\n";

    return 0;
}