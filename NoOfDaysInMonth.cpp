#include <iostream>
#include <string>

int main() {
    enum Months {
        invalid,
        January,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December
    };

    std::string English_Months[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    Months DaysinMonths;

    if (DaysinMonths == April || DaysinMonths == June || DaysinMonths == September || DaysinMonths == November) {
        std::cout << "The month of " << English_Months[DaysinMonths - 1] << " has 30 days.\n" ;
    }

    else if(DaysinMonths == January || DaysinMonths == March || DaysinMonths == May || DaysinMonths == July || 
            DaysinMonths == August || DaysinMonths == October || DaysinMonths == December){
        std :: cout << "The months of " << English_Months[DaysinMonths - 1] << "have 31 days.\n" ;
    }

    else if(DaysinMonths == February){
        std :: cout << "The months of " << English_Months[DaysinMonths - 1] << "have 28 or 29 days.\n" ;
    }

    return 0;
}