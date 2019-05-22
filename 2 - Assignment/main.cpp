#include <iostream>
using namespace std;

// Global variables 
int a[5] = {0};
int menu = 0 ;
char continue_me = '0';

void getValues(){
    cout << "\n\n Enter Data in Array.\n"<<endl;
    for (int i=0; i<5; i++){
    cout << "> Enter Value: " ;
    cin >> a[i] ;
    }
    cout << "\n5 elements Entered \n\n";
}

void displayArray(){
   cout << "\n\n Read the Array elements  " << endl;
   for (int i=0; i<5; i++){
   cout << a[i] << endl ;
    }
}
void reverseArray(){
   cout <<"\n\n Show Array Elements in reverse order" << endl;
   for (int i=4; i>=0; i--){
   cout << a[i] << endl ;
   }
} 
void multipleOf3(){
    cout  << "\n Array elements Which are Multiple of 3 \n";
    for (int i=0; i<5; i++){
    a[i] ;
     if (a[i]%3 == 0){
        cout << a[i] << endl ;
     }
    }
}
void sumOfElements(){
   cout << " \n\n Show Sum of All the Elements " << endl ;
   int sum = 0;
   for  (int i=0; i<5; i++){
      sum = sum + a[i];
   }
   cout << "Sum =  " << sum << endl ;
}
void menufunc(){
cout << "\n\n";
cout << "Press 1 To Enter Values In Array." << endl;
cout << "Press 2 To Read Array Elements." << endl;
cout << "Press 3 To Show Array Elements In Reverse Order. "<< endl; 
cout << "Press 4 To Show Array Elements Which Are Multiples Of 3." << endl;
cout << "Press 5 To Show Sum Of All The Elements. "<< endl;
cout << "Press 6 To Exit. "<< endl;

cout << "\n > Enter your choice: " ;
cin >> menu;

}

int main() {


while (true) {
cout << "\n\n";
cout << "Press 1 To Enter Values In Array." << endl;
cout << "Press 2 To Read Array Elements." << endl;
cout << "Press 3 To Show Array Elements In Reverse Order. "<< endl; 
cout << "Press 4 To Show Array Elements Which Are Multiples Of 3." << endl;
cout << "Press 5 To Show Sum Of All The Elements. "<< endl;
cout << "Press 6 To Exit. "<< endl;

cout << "\n > Enter your choice: " ;
cin >> menu;

if (menu != 1){
    cout << "Array is empty , first Enter data in Array."<<endl;
    cout << "\033[2J\033[1;1H";
}
if (menu == 1){
   break;
}
} // while end

switch (menu) {  // Switch Start

case 1 :
getValues();
cout << "Do you want to continue ? press Y/y for yes:  ";
cin >> continue_me ;
if (continue_me = 'Y' || continue_me ==  'y'){
menufunc(); 
}

case 2 :
displayArray();
cout << "I am here"  ;
break ;

case 3 :
reverseArray();
break ;

case 4 :
multipleOf3();
break ;

case 5 :
sumOfElements();
break ;

} // Switch End

return 0;
}