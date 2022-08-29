#include <iostream>
#include <vector>
#include "book.h"
#include "library.h"
using namespace std; 

int main (void) {
    book wizardOfOz = book ("Wizard Of Oz", "L. Frank Baum", 1940);
    book harryPotter = book ("Harry Potter and the Philosphers Stone", "J.K. Rowling", 2001);
    book lordOfTheRing = book ("Lord Of The Rings", "J. R. R. Tolkien", 1998);
    book GOT = book ("A Song of Ice and fire", "George R R Martin", 1998);
    // wizardOfOz.printBook();
    //harryPotter.printBook();
    //lordOfTheRings.printnBook();
    // GOT.printBook();

    library AdelaideUni;
    AdelaideUni.addBook(wizardOfOz);
    AdelaideUni.addBook(harryPotter);
    AdelaideUni.addBook(lordOfTheRing);
    Adelaude.Uni.addBook(GOT);

    AdelaideUni.borrowBook(wizardOfOz);
    AdelaideUni.borrowBook(harryPotter);
    AdelaideUni.returnwBook(wizardOfOz);

    AdelaideUni.printLibrary();
    return 0;
    

}
