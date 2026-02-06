#include <iostream>
using namespace std;

class Card {
    string title;
    string author;
    int number_on_hand;

public:
    void store(string t,string a,int num) {
        title = t;
        author = a;
        number_on_hand = num;
    }

    void display() {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Number On-Hand: "<<number_on_hand<<endl;
        cout<<"------------------------"<<endl;
    }


};
int main() {
    Card book1, book2;
    book1.store("Uttom kumar","uzzol",1);
    book2.store("Uzzol Mia","uttom",2);
    book1.display();
    book2.display();
    return 0;
}