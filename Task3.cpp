#include <iostream>
using namespace std;

/**
 * Task3: Use Nested if-else statement to determine sign.
 * 
 */
// Zodiac Sign Approximations:
// Aquarius: January 21 to February 20
// Pisces: February 21 to March 20
// Aries: March 21 to April 20
// Taurus: April 21 to May 20
// Gemini: May 21 to June 20
// Cancer: June 21 to July 20
// Leo: July 21 to August 20
// Virgo: August 21 to September 20
// Libra: September 21 to October 20
// Scorpio: October 21 to November 20
// Sagittarius: November 21 to December 20
// Capricorn: December 21 to January 20

    int main() {
        
        std::string bMonth = "Unknown",sign;
        int month = 0;
        int day = 0;
        // Create the input statements:
        std::cout<< ("Enter your birth month as an integer (1 for January, 6 for June, ):");
        std::cin >> month ;
        cout<<"Enter your birthday as an integer"<<endl;
        cin>>day;
        if (month == 1) { // we know now it is January
            // Aquarius: January 21 to February 20
            // Capricorn: December 21 to January 20
            bMonth = "January";
            if(day>21)
            {
                sign="Aquarius";
            }
            else
            {
                sign="Capricorn";
            }

        } else if (month == 2) {
            // Aquarius: January 21 to February 20
            // Pisces: February 21 to March 20


            bMonth = "February";  
             if(day>21)
            {
                sign="Pices";
            }
            else
            {
                sign="Aquarius";
            }
        } else if (month == 3) {
            // Pisces: February 21 to March 20
            // Airies: March 21 to April 20
            bMonth = "March";   
            if(day>21)
            {
                sign="Airies";
            }
            else
            {
                sign="Pices";
            }

        } else if (month == 4) {
            // Aries: March 21 to April 20
            // Taurus: April 21 to May 20
            bMonth = "April";   
            if(day>21)
            {
                sign="Taurus";
            }
            else
            {
                sign="Aries";
            }

        } else if (month == 5) {
            // Taurus: April 21 to May 20
            // Gemini: May 21 to June 20
            bMonth = "May";   if(day>21)
            {
                sign="Gemini";
            }
            else
            {
                sign="Taurus";
            }

        } else if (month == 6) {
            // Gemini: May 21 to June 20
            // Cancer: June 21 to July 20
            bMonth = "June";
               if(day>21)
            {
                sign="Cancer";
            }
            else
            {
                sign="Gemini";
            }
        } else if (month == 7) {
            // Cancer: June 21 to July 20
            // Leo: July 21 to August 20
            bMonth = "July";   if(day>21)
            {
                sign="Leo";
            }
            else
            {
                sign="Cancer";
            }

        } else if (month == 8) {
            // Leo: July 21 to August 20
            // Virgo: August 21 to September 20
            bMonth = "August";
               if(day>21)
            {
                sign="Virgo";
            }
            else
            {
                sign="Leo";
            }
        } else if (month == 9) {
            // Virgo: August 21 to September 20
            // Libra: September 21 to October 20
            bMonth = "September";   if(day>21)
            {
                sign="Libra";
            }
            else
            {
                sign="Virgo";
            }

        } else if (month == 10) {
            // Libra: September 21 to October 20
            // Scorpio: October 21 to November 21
            bMonth = "October";   if(day>21)
            {
                sign="Scorpio";
            }
            else
            {
                sign="Libra";
            }

        } else if (month == 11) {
            // Scorpio: October 21 to November 20
            // Sagittarius: November 21 to December 20
            bMonth = "November";   if(day>21)
            {
                sign="Sagittarius";
            }
            else
            {
                sign="Scorpio";
            }

        } else if (month == 12) {
            // Sagittarius: November 21 to December 20
            // Capricorn: December 21 to January 20
            bMonth = "December";
               if(day>21)
            {
                sign="Capricorn";
            }
            else
            {
                sign="Sagittarius";
            }
            // ...
        } else { // if none of the other statements are true, the month is invalid
            std::cout<<"You entered an invalid month, it must be between 1 and 12" << std::endl;
        }
        std::cout<<"Your birthday is " << bMonth <<" " << day  <<"and your zodiac sign is "<<sign<<std::endl;

        
    }
