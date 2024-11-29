#include<iostream>
#include<cmath>
using namespace std;

void getInput(double& x, double& y);
float addition(float num1, float num2);
float subtraction(float num1, float num2);
double multiplication(double num1, double num2);
double division(double num1, double num2);
int mod(int num1, int num2);
double power(double num1, double num2);
double squareRoot(double num1);

char choice;

int main()
{
  const char options = '8';
  char endChoice;
  double x, y;

  cout<<"Calculator"<<endl;

  // Main loop, continues until user quits
  do
  {
    cout<<"\nSelect an operation: "<<endl;
    cout<<"[1] Addition"<<endl;
    cout<<"[2] Subtraction"<<endl;
    cout<<"[3] Multiply"<<endl;
    cout<<"[4] Division"<<endl;
    cout<<"[5] Modulus"<<endl;
    cout<<"[6] Power"<<endl;
    cout<<"[7] Square Root"<<endl;
    cout<<"[8] Quit"<<endl;
    
    // Validation loop: Allowing only '1' to '5'
    do 
    {
      cout<<"Enter your choice: ";
      cin>>choice;

      if (choice < '1' || choice > options)
      {
        cout<<"Invalid Choice!"<<endl;
      }
      // Using char to handle cases where input is non-numeric characters
      // Problems arise if there's more than one char. Eg: '-1'
    } while (choice < '1' || choice > options); 
    
    // Requesting for input only if user does hasn't chosen to quit
    if (choice != options)
    {
      getInput(x,y);
    }

    switch (choice)
    {
      case '1':
      cout<<x<<" + "<<y<<" = "<<addition(x,y);
      break;

      case '2':
      cout<<x<<" - "<<y<<" = "<<subtraction(x,y);
      break;
        
      case '3':
      cout<<x<<" * "<<y<<" = "<<multiplication(x,y);
      break;
      
      case '4':
      cout<<x<<" / "<<y<<" = "<<division(x,y);
      break;

      case '5':
      cout<<x<<" % "<<y<<" = "<<mod(x,y);
      break;

      case '6':
      cout<<x<<" ^ "<<y<<" = "<<power(x,y);
      break;
      
      case '7':
      cout<<"The square root of "<<x<<" is "<<squareRoot(x);
      break;

      case '8':
      exit(0); // Exit the program
      break;
      
      default:
      break;
    }

    cout<<"\nDo you want to return to the menu? [y/n]: ";
    cin>>endChoice;

  } while (endChoice == 'y');
  
  return 0;
}

void getInput(double& x, double& y) //passing by reference with the reference operator '&'
{
  if (choice == '7')
  {
    cout<<"\nEnter a number: ";
    cin>>x;
  } else {
    cout<<"\nEnter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
  }
}

float addition(float num1, float num2)
{
  return num1+num2;
}

float subtraction(float num1, float num2)
{
  return num1-num2;
}

double multiplication(double num1, double num2)
{
  return num1*num2;
}

double division(double num1, double num2)
{
  if (num2 == 0)
  {
    cout<<"Cannot divide by zero!"<<endl;
    return 1;
  }
  return num1/num2;
}

int mod(int num1, int num2)
{
  if (num2 == 0)
  {
    cout<<"Cannot perform modulus operation while divisor is zero!"<<endl;
    return 1;
  }
  return num1%num2;
}

double power(double num1, double num2)
{
  return pow(num1,num2);
}

double squareRoot(double num1)
{
  return sqrt(num1);
}