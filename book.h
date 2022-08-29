#ifndef BOOK_H
#define BOOK_H

#include <string>
class book 
{
    static int count;
    int id;
    std:: string title;
    std:: string author;
    int year;

    public:
    //constructors
    book ();
    book (std::string btitle, std::string bauthor, int byear);
    //getters
    std::string getName ();
    std::string getAuthor();
    int getYear();
    int getID();
    //setters
    void printBook();
    //destructor
    ~book();

};
#endif