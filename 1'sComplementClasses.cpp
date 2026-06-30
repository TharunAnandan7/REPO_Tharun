//                          PROGRAM TO DEMONSTRATE ONE'S COMPLEMENT BY CLASSES
# include <iostream>
# include <string>

class binary{

    private :
    std :: string s;

    public :
    void GetData (void);                   //function
    void CheckData(void);
    void ComplementData(void);             //declaration
    void PutData(void);

};

//function definitions :
void binary :: GetData (void){

    std :: cout << "Enter a binary number :";
    std :: cin >> s;

}
void binary :: CheckData(void){

    for (int i = 0; i < s.length(); i++){

        if (s.at(i) != '0' && s.at(i) != '1'){

            std :: cout << std :: endl << "The entered number is non-binary, the code exits..."; 
            exit (0);

        }
    
    }
    std :: cout << std :: endl << "The entered number is binary...";

}
void binary :: ComplementData(void){

    CheckData(); // Member function nesting

    for (int  i = 0; i < s.length(); i++){

        if (s.at(i) == '0')

            s.at(i) = '1';
        
            
        else

            s.at(i) = '0';
    
        }

}
void binary :: PutData(void){

    ComplementData(); // Member function nesting
    std :: cout << std :: endl << "The one's complement of the entered binary number is " << s;

}

int main (){

    binary b;
    b.GetData();
    b.PutData();
    
    return 0;

}
