
/*->Abstract Base Class (Book):
Store common attributes: title, author, and price.
 Maintain a static counter to track the total number of book objects created.
 Include a pure virtual function displayinfo() to enforce a contract for derived classes.
 ->Derived Class (EBook):
 Inherit from Book.
 Add a specific attribute: fileSize (in MB).
 Override displayinfo() to show all details including file size.
 ->Derived Class (PrintedBook):
 Inherit from Book.
 Add a specific attribute: pageCount.
 Override displayinfo() to show all details including page count. */


#include <bits/stdc++.h>
using namespace std;
class Book
{
private:
    string title;
    string author;
    double price;
    static int count;

public:
    Book() { title = author = "none", price = 0; }
    virtual void displayinfo() = 0;

    Book(string title, string author, double price)
    {
        this->title = title;
        this->author = author;
        this->price = price;
        count++;
    }
    string getTitle()
    {
        return title;
    }
    string getAuthor()
    {
        return author;
    }

    double getPrice()
    {
        return (double)price;
    }

    static void Count()
    {
        cout << count << endl;
        
    }
    // declered as virtual as to call destructor of derived class
    virtual ~Book()
    {
        cout << "Book Destructor " << endl;
    }
};
int Book::count = 0;

class EBook : public Book
{
private:
    float fileSize;

public:
    EBook() { fileSize = 0; }
    // to access private member after inheritance must pass construtor to access the attributes
    EBook(string title, string author, double price, float fileSize) : Book(title, author, price) { this->fileSize = fileSize; }
    ~EBook() { cout << " EBook Destructor" << endl; }
    void displayinfo()
    {
        string a = getTitle();
        string b = getAuthor();
        double y = getPrice();
        cout << a << " " << b << " " << y << " " << fileSize << endl;
    }
};

class PrintedBook : public Book
{
private:
    int pageCount;

public:
    PrintedBook() { pageCount = 0; }
    PrintedBook(string title, string author, double price, int pageCount) : Book(title, author, price) { this->pageCount = pageCount; }
    ~PrintedBook() { cout << " PrintedBook Destructor" << endl; }
    void displayinfo()
    {
        string a = getTitle();
        string b = getAuthor();
        double y = getPrice();
        cout << a << " " << b << " " << y << " " << pageCount << endl;
    }
};

int main()
{
    Book *b;
    cout << "1.Ebook  " << endl;
    cout << "2.Printed Book  " << endl;
    int choice;
    cout << "Enter your choice : " << endl;
    cin >> choice;
    string t, a;
    double p;

    cout << "Enter title: ";
    cin >> t;
    cout << "Enter author: ";
    cin >> a;
    cout << "Enter price: ";
    cin >> p;

    if (choice == 1)
    {
        float f;
        cout << "Enter file size (MB): ";
        cin >> f;

        b = new EBook(t, a, p, f);
    }
    else if (choice == 2)
    {
        int pc;
        cout << "Enter page count: ";
        cin >> pc;

        b = new PrintedBook(t, a, p, pc);
    }
    else
    {
        cout << " Invalid choice !!" << endl;
    }

    b->displayinfo();
    b->Count();
    delete b;
    return 0;
}