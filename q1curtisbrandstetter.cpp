#include <iostream>
#include <string>
// Include the library that will allow you to convert from string to integer
#include <sstream>


int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once
  int mynumb1;
  int mynumb2;
  int mynumb3;
  std::cout << "input three numbers" << std::endl;
  std::cin >> mynumb1 >> mynumb2 >> mynumb3;




  // Multiply the three integers
  double numb123;
  numb123 = mynumb1 * mynumb2 * mynumb3;




  // Output the result of the multiplication

std::cout << "your answer is:" << numb123;

  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

  std::string mystr;
  std::cin >> mystr;
  std::cout << "write a Haiku...";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  ;getline (std::cin,mystr)
  ;std::cout << "you wrote..." << mystr << std::endl;
  ;getline (std::cin,mystr)
  ;std::cout << "you wrote..." << mystr << std::endl;
  ;getline (std::cin,mystr)
  ;std::cout << "you wrote..." << mystr << std::endl;









  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
  
  int myint;
  std::stringstream(myNumber) >> myint;
  
  std::cout << myint << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}