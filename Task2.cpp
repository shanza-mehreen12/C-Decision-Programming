
#include <iostream>
using namespace std;
/**
 * Task2: Use the Else statement when the if condition is false.
 * 
 */


    int main() {
        
        std::string bMonth;
        int month = 0;
        // Create the input statements:
        std::cout << ("Enter your birth month as an integer (1 for January, 6 for June, ):");
        std::cin >>month; 
        if (month == 1) {
            bMonth = "January";

        } 
        else if (month==2){
            bMonth="Feburary";
            
        }
         else if (month==3){
            bMonth="March";
            
        }
          
         else if (month==4){
            bMonth="April";
            
        }
          
         else if (month==5){
            bMonth="May";
            
        }  
         else if (month==6){
            bMonth="June";
            
        }  
         else if (month==7){
            bMonth="July";
            
        }
          
         else if (month==8){
            bMonth="August";
            
        }  
         else if (month==9){
            bMonth="September";
            
        }
          
         else if (month==10){
            bMonth="October";
            
        }  
         else if (month==11){
            bMonth="November";
            
        }  
         else if (month==12){
            bMonth="December";
            
        } 

        else
        {
            cout<<"you entered invalid number"<<endl;
        }
       
       cout <<"Your Birthday month is in "<<bMonth<<"."<<endl;

        
    }