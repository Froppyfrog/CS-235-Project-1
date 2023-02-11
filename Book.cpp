// Dmitri Beddoe 
// Feb 3rd 2023
// Implementation of the Book class

#include "Book.hpp"
#include <iostream>
using std::string;



Book::Book() = default;

Book::Book(string title, string author, int pagecount, bool digital){
    Name = title;
    Author = author;
    PageCount = pagecount;
    Digital = digital;
     }



void Book::setName(const string& title){
    Name = title;
}
string Book::getName() const {
    return Name;
}

void Book::setAuthor(const string& author){
    Author = author;
}
string Book::getAuthor() const{
    return Author;
}

void Book::setPageCount(const int& pagecount){
    PageCount = pagecount;
}
int Book::getPageCount() const{
    return PageCount;
}

void Book::setDigital( bool digital){
    bool digital = 1;
     if (Digital == 1)
    {
         Digital == true;
         
    }
    else Digital == false;
    Digital = digital;

}
bool Book::isDigital(){
   
    return Digital;
    
}
