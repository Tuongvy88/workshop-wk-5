#include <string>
#include <iostream>
#include "book.h"

using namespace std; 
int book::count =1; 
//constructors
book::book()
{
    id = count;
    count++;
          title = btitle;
    author = "Unknown";
    year= 1900;
}
book::book(std::string btitle, std::string bauthor, int byear)
{
    id = count;
    count++;
           title = btitle;
    author = bauthor;
    year =  byear;
}
//getters
std::string book::getName()
{
    return title;
}
std::string book::getAuthor()
{
    return author;
}
int book::getYear()
{
    return year;
}
int book::getID()
{
    return id;
}
void book::printBook()
{
    cout << "TITLE: " << title ,, "," << "AUTHOR: " << author << "," << "YEAR: " << year << endl;
}

book::~book()
{

}