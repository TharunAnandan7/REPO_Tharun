# include <iostream>
# include <iomanip>


int main(){

    int n;int sum = 0;
    std :: string Bname[n];
    int code[n];
    float Bprice[n];


    std :: cout.precision(2); // Precision set to 2

   


    std :: cout << "Enter the number of books: ";
    std :: cin >> n; std :: cout << std :: endl;

    for (int i = 1; i < n; i++)
    {
        std :: cout << "\nEnter the Book number "<<  i << " 's name: ";
        std :: cin >> Bname[i];
       
        std :: cout << "\nEnter the Book number "<<  i << " 's code: ";
        std :: cin >> code[i];
        std :: cout << "\nEnter the Book number "<<  i << " 's price: ";
        std :: cin >> Bprice[i];
        sum = sum + Bprice[i];
    }
    
    std :: cout.width(20);  // field width initialized...
    std :: cout << "NAME";

    std :: cout.width(26);
    std :: cout << "CODE";

    std :: cout.width(32);
    std :: cout << "COST" << std :: endl;

    std :: cout.setf(std :: ios :: showpoint);      // display trailing zeroes...
    std :: cout.fill('-');                          // filling '-' in the empty spaces...

    for ( int j = 1; j <= n; j++)
    {
        
        
        std :: cout.setf(std::ios::left ,std::ios::adjustfield);// provided left justification...
        std :: cout.width(20);
        std :: cout << Bname[j];

        std :: cout.setf(std::ios::left ,std::ios::adjustfield);//provided left justification...
        std :: cout.width(26);
        std :: cout << code[j];

        std :: cout.setf(std::ios::right ,std::ios::adjustfield);//provided right justification...
        std :: cout.width(34);
        std :: cout << code[j];

    }

    std :: cout << std :: endl;
    std :: cout.width(20);

    std :: cout << "Total: ";

    std :: cout.width(34);
    std :: cout.setf(std::ios::right ,std::ios::adjustfield);
    std :: cout << sum;

    
    return 0;
}
/*
Expected outcome: 
NAME            CODE            COST
ANSI C           101            250.95
ALGORITHMS       105            618.80

*/