#include <iostream> // Includes the iostream library, //is comment need to have
#include <string> // library for string
using namespace std; //using standard namespace, need to have

//movie tickets

int main() {

  string name;
  int tickets; 
  int age; 
  double price; 
  string genre; 

  cout << "Enter your first name: "; 
  cin >> name; 
cout << "Enter the number of tickets you will be purchasing today: "; 
  cin >> tickets; 
//Ask user for their age
  cout << "How old are you? Enter a number: "; 
  cin >> age;
  
//Ask user for the price of the movie ticket

  cout << "What is the price of the movie ticket? Enter a number: ";
  cin >> price;

  if(age<18)
    {
      price = price-(price*.1);
      cout << "Your new price is: " << price << endl;
    }

    if(age>60){
    price = price-(price*.15);
      cout << "Your new price is: " << price << endl; 
    }
    //Age between 18 and 60 is not elligible for a discount
  if (age >= 18 && age <= 60)
    cout << "Sorry! You are not elligible for a discount." << endl;
  //Discounts for prices

   cout << "Enter the genre of the movie you will be watching: ";
  cin >> genre;
  
  //if else statement for movie genre
if (genre == "action"){
  cout << "Action movies include fighting scenes and weapons!";
}
 else if (genre == "comedy"){
    cout << "Comedy movies include funny elements that will make you laugh!";
  }
else if (genre == "drama"){
  cout << "Drama movies include more serious realistic tones of emotion! ";
}
 else if (genre == "horror"){
   cout << "Horror movies include blood , monsters, and scary elements!";
  
 }
 else if (genre == "romance"){
    cout << "Romance movies include love and relationships!";
  }
  else if (genre == "sci-fi"){
    cout << "Sci-fi movies include supernatural elements and futuristic technology!";
  }

    else {
      cout << "Sorry! We do not have that genre in our database!";
    }


  
  return 0; 
}










/*/
int main (){

string response; 
  cout << "Hi, Welcome to Replit! How are you doing today?" << endl;
  cin >> response; 
  
 string username; 

  cout << "Please enter your username:"; 
  cin >> username; 
  
  string password; 

  cout << "Enter your password:"; 
cin >> password; 

  if (password == "PassWord" || password =="password" || password == "p a s s w o r d" || password == "heilala"){

cout << "Access Granted, Welcome " << username << endl; 
  
  }
else {
    cout << "Access Denied, try again, " << username << endl; 
} 

  return 0; 
}

*/












/*/
int main (){

string forecast; 
  double percentage; 

  cout << "Enter the weather forecast:(sunny, windy, or rainy):"; 

  cin >> forecast; 
//first case if forecast is rainy
  if (forecast == "rainy"){
cout << "What is the percentage of chance of rain: "; 
    cin >> percentage; 
  }
  else { 
    percentage = 0;}
   
// if the user entered sunny
  if (forecast == "sunny"){

cout << "Remember to bring your sunglasses!" << endl; 
     }

//if the user entered windy 

  if (forecast == "windy"){

cout << "Don't forget your jacket!" << endl;

  }
    
if (forecast == "rainy"){

if (percentage > 50.0){

cout << "High chance of rain. Take an umbrella!" << endl;
if (percentage <= 50.0){
cout << "Low chance, still take umbrella just in case" << endl;   
}

  if (forecast != "sunny" && forecast != "windy" && forecast != "rainy"){
cout << "Invalid input, enter sunny, windy, or rainy" << endl; 
  }
    
  }



  





    
  return 0; 
}
*/








/*/int main () {

  string forecast; // variable for the forecast

  cout << "Enter the weather forecast: (sunny or rainy): "; 
  cin >> forecast; 
if (forecast == "sunny")
{
  cout << "Wear sunscreen and sunglasses";
}

  if (forecast == "rainy") 
  { 
    cout << "Don't forget to take an umbrella"; 
  
   
return 0; 
  
}
*/











//Information Input

/*/int main () {


  //name
  string name; 

  cout << "Enter your first name: "; 
  cin >> name; 

//last name initial
  char lastname;
  cout << "Enter your last name initial: "; 
  cin >> lastname; 
  
  //age
  int age; 
   cout << "Enter your age: ";
  cin >> age; 

string job; 
  cout << "Do you have a job? (yes or no):"; 
  cin >> job; 

  if (job == "no" or "No"){
    cout << "Thats crazy";
      }
  if (job == "yes" || "Yes"){

cout << "Enter your current occupation: "; 
cin >> job; 

  
  
  //salary
  double salary; 
  cout << "Enter your salary: "; 
  cin >> salary;   
    }
  int numbers; 
  cout << "Enter the 16 digit code on the front of your credit card "; 
  cin >> numbers; 

  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "Credit Card Number: " << numbers << endl;
  
  cout << "Your sharing of information has been much appreciated " << name << " " << lastname << ";)" << endl; 

  


  
  return 0; 
 */   






// sum code
// Example: Power
/*/int main() {
  int firstNumber, secondNumber, sum; //declaring 3 integer variables

  cout <<"Enter two integers:"; // ask user for two integers

  cin >> firstNumber >> secondNumber; 

  sum = firstNumber + secondNumber; // sum of two numbers stored in sum variable

  cout << sum; //give user the answer of the two numbers that we added

return 0; //ends the program
  
}
*/
