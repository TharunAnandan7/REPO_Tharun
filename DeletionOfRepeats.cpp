# include <iostream>

int GetArray(char [], int &);
void PopDuplicate(char[], int &);
void DisplayArray(char [], int );

const int array_size = 1024;


int main(){
    char array[array_size];
    char answer;
    int size;
    
     do {
        size = 0;

        GetArray(array, size);
        PopDuplicate(array, size);

        std :: cout << "\n\nThe array after delete repeats";
        DisplayArray(array, size);

        std :: cout << "\n\nRepeat? (y/n): ";
        std :: cin >> answer;

        
    
    } while (answer != 'n' && answer != 'N');








    return 0;
}

//              function definitions: 


int GetArray(char array[], int & size){
        std :: cout << "\nWhat is the size: ";
        std :: cin >> size;

    while (size > array_size || size < 0) {
        std :: cerr << "\nInvalid size. Please enter a size between 0 and " << array_size;

        std :: cout << "\n\nWhat is the size: ";
        std :: cin >> size;
    }

    std :: cout << "Enter the array (one character at a time): " << std :: endl;

    for (int i = 0; i < size; i++)
        std :: cin >> array[i];
}


void PopDuplicate(char array[], int &size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            while (array[i] == array[j]) {
                std :: cout << "\nFound duplicates at " << i + 1
                     << " and " << j + 1 << " : " << array[i]
                     << " and " << array[j] << std :: endl;

                for (int k = j + 1; k < size; k++)
                    array[k - 1] = array[k];

                array[--size] = 0;
                GetArray(array, size);
            }
        }
    }
}

void DisplayArray (char array[], int size) {
    std :: cout << "\nUpdated array: ";

    for (int i = 0; i < size; i++)
        std :: cout << array[i] << " ";
}
