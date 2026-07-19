# include <iostream>

class CVector {
  public:
    int x,y;
    CVector () {}
    CVector (int a, int b) : x(a), y(b) {}  // Member Initializer list | used for time management 
    /*same as the code: 
    Cvector(int a , int b){
        a = x;
        b = y;
    }*/
};


CVector operator+ (const CVector& Init, const CVector& Fin) {
  CVector temp;
  temp.x = Init.x + Fin.x;
  temp.y = Init.y + Fin.y;
  return temp;
}

int main () {

    float InitX = 0,FinX = 0,InitY = 0,FinY = 0;

    std :: cout <<"Enter the Two-D co-ordinates of any two points: " << std :: endl;
    std :: cout <<"co-ordinates of the first point : ";
    std :: cout <<"Enter x co-ordinate: ";
    std :: cin >> InitX;
    std :: cout <<"\nEnter y co-ordinate: " << std :: endl;
    std :: cin >> InitY;
    
    std :: cout <<"co-ordinates of the second point : " << std :: endl;
    std :: cout <<"Enter x co-ordinate: ";
    std :: cin >> FinX;
    std :: cout <<"\nEnter y co-ordinate: ";
    std :: cin >> FinY;
    



  CVector Xproduct (InitX,InitY);
  CVector Yproduct (FinX,FinY);
  CVector result;


  result = Xproduct + Yproduct;
  std :: cout << "The Vector addition is: " <<  result.x << ',' << result.y << '\n';
  return 0;
}