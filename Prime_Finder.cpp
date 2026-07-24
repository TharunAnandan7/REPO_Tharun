#include <iostream>
#include <chrono>

bool Isprime(long long number) {

    if (number == 2) { 
        return true;
    }

    else if (number <= 1) {
        return false;
    }

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
        else {
            continue;
        }
    }

    return true;

}

void NoOfPrimes(int Initnum, int Finnum) {
    
    int PrimeTotal = 0;
    
    while (Initnum <= Finnum) {
        
        if (Isprime(Initnum)) {
            std :: cout << "Prime Found:" << "[" << Initnum << "]" << std :: endl;
            PrimeTotal++;
        }
        Initnum++;

    }
    std :: cout << "Total Primes Found: " << PrimeTotal << std :: endl;
    std :: cout << "---End---" << std :: endl;

}

int main() {
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;
    int StartPoint;
    int Endpoint;
    std :: cout<< "Enter Starting Number: ";
    std :: cin >> StartPoint;
    std :: cout << "Enter ending number: ";
    std :: cin >> Endpoint;
    auto t1 = high_resolution_clock::now();
    NoOfPrimes(StartPoint, Endpoint);
    auto t2 = high_resolution_clock::now();
    duration<double, std::milli> ms_double = t2 - t1;
    std :: cout << "\n[Execution Time: " << ms_double.count() << "ms]\n" << std :: endl;
    return 0;
}