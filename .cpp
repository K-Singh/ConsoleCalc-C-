#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int op;
    int x;
    int mod;
  cout << " Welcome to Kirat's Calculator! \n Enter a number! \n";
  cin >> a;
  cout << " Press 1 for addition! \n Press 2 for subtraction! \n Press 3 for multiplication! \n Press 4 for division! \n";
  cin >> op;
  cout << "Enter another number! \n";
  cin >> b;
  if(op == 1){
    x = a + b;
    mod = 0;
    cout << "The sum of your 2 numbers is " << x << "!";
  } else if(op == 2){
  x = a - b;
  mod = 1;
  cout << "The difference of your 2 numbers is " << x << "!";
  } else if(op == 3){
    x = a * b;
    mod = 0;
  cout << "The product of your 2 numbers is " << x << "!";
  } else if (op == 4){
  x = a / b;
  mod = a % b;
        if(mod > 0){
        cout << "The quotient of your 2 numbers is " << x << " with a remainder of " << mod << "!";
                   }else{
        cout << "The quotient of your 2 numbers is " << x << "!";
        }
  } else {
  cout << "Uh oh! You didn't choose a valid operation!";
  }



    return 0;
}
