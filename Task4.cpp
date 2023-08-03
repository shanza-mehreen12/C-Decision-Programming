#include <iostream>

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
        
        std::string sign = "Unknown";
        std::string bMonth = "Unknown";
        int month = 0;
        int day = 0;
        // Create the input statements:
        std::cout<< ("Enter your birth month as an integer (1 for January, 6 for June, ):");
        std::cin >> month ;
        std::cout<<("Enter your birth day as an integer (1 to 31 ):");
        std:: cin >> day;
        switch(month){
        case (1) :{ // we know now it is January
            // Aquarius: January 21 to February 20
            // Capricorn: December 21 to January 20
            bMonth = "January";
            if (day >= 21) {
                sign = "Aquarius";
            } else {
                sign = "Capricorn";
            }
            break;

        } case (2): {
            // Aquarius: January 21 to February 20
            // Pisces: February 21 to March 20
            bMonth = "February";
            if (day < 21) {
                sign = "Aquarius";
            } else {
                sign = "Pisces";
            }
            break;

        } case (3): {
            // Pisces: February 21 to March 20
            // Airies: March 21 to April 20
            bMonth = "March";
            if (day < 21) {
                sign = "Pisces";
            } else {
                sign = "Aries";
            }
            break;
        }case (4): {
            // Aries: March 21 to April 20
            // Taurus: April 21 to May 20
            bMonth = "April";
            if (day < 21) {
                sign = "Aries";
            } else {
                sign = "Taurus";
            }
            break;
        }case (5) :{
            // Taurus: April 21 to May 20
            // Gemini: May 21 to June 20
            bMonth = "May";
            if (day < 21) {
                sign = "Taurus";
            } else {
                sign = "Gemini";
            }
            break;
        }case (6): {
            // Gemini: May 21 to June 20
            // Cancer: June 21 to July 20
            bMonth = "June";
            if (day < 21) {
                sign = "Gemini";
            } else {
                sign = "Cancer";
            }
            break;
        } case (7): {
            // Cancer: June 21 to July 20
            // Leo: July 21 to August 20
            bMonth = "July";
            if (day < 21) {
                sign = "Cancer";
            } else {
                sign = "Leo";
            }
            break;
        } case (8): {
            // Leo: July 21 to August 20
            // Virgo: August 21 to September 20
            bMonth = "August";
            if (day < 21) {
                sign = "Leo";
            } else {
                sign = "Virgo";
            }
            break;
        } case (9): {
            // Virgo: August 21 to September 20
            // Libra: September 21 to October 20
            bMonth = "September";
            if (day < 21) {
                sign = "Virgo";
            } else {
                sign = "Libra";
            }
            break;
        } case (10) :{
            // Libra: September 21 to October 20
            // Scorpio: October 21 to November 21
            bMonth = "October";
            if (day < 21) {
                sign = "Libra";
            } else {
                sign = "Scorpio";
            }
            break;
        } case(11): {
            // Scorpio: October 21 to November 20
            // Sagittarius: November 21 to December 20
            bMonth = "November";
            if (day < 21) {
                sign = " Scorpio";
            } else {
                sign = "Sagittarius";
            }
            break;
        } case (12): {
            // Sagittarius: November 21 to December 20
            // Capricorn: December 21 to January 20
            bMonth = "December";
            if (day < 21) {
                sign = "Sagittarius";
            } else {
                sign = "Capricorn";
            }
            break;
            // ...
        }default: { // if none of the other statements are true, the month is invalid
            std::cout<<("You entered an invalid month, it must be between 1 and 12");
        }
        }
        std::cout<<"Your birthday is " << bMonth <<" " << day << "." << std::endl;
        std::cout<<"Your sign is " << sign << "."<<std::endl;

        
    }
