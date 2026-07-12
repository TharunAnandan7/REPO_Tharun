# include <iostream>
# include <iomanip>
std :: ostream & indent( std :: ostream & output){
    std :: cout.setf(std :: ios :: showpoint);                          //trailing zeroes shown...
    std :: cout.width(10);                                              //field width
    std :: cout.precision(2);                                           //precision of output
    std :: cout.setf(std:: ios :: right, std :: ios :: adjustfield);    //Right-justification...
    std :: cout.fill('*');                                              //filling unused places with '*'
    return output;
}
int main (){
    std :: string UserName;
    UserName = "Tharun Anandan";
    std :: cout << indent <<"Testing the code of User Defined Manipulator... "  
                <<UserName<< indent;
    
    return 0;
}