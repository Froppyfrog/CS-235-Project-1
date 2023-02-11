// Dmitri Beddoe 
// Feb 3rd 2023
// class Book interface with declarations to implement the class within the given code

#ifndef BOOK_HPP
#define BOOK_HPP
using std::string;


class Book {
private:
string Name;
string Author;
int PageCount;
bool Digital;

public:
Book() = default; //default constructor

Book(string title, string author, int pagecount, bool digital);// Parameterized constructor.


void setName(const string& title); // function declaration to set title of Book
string getName() const; // function to return the submitted title

void setAuthor(const string& author); //declaration to set the author's name
string getAuthor() const; // declaration to return the author's name

void setPageCount(const int& pagecount); // declaration to set the number of pages
int getPageCount() const; // declaration to return the page number

void setDigital( bool digital); //declaration to check if Book is avaiable digitally
bool isDigital(); // returns the true or false value








};

#endif