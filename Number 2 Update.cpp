#include<bits/stdc++.h>
using namespace std;
class Writer
{
    string writer_name;
    public:
        void setWriter(string name)
        {
            writer_name = name;
        }
        string getWriter()
        {
            return writer_name;
        }
};


class Book{
    string Title,Edition_number;
    Writer writer;
    double Price;
    long Quantity;
    public:
        string getTitle() { return Title; }
        string getWriters_name() { return writer.getWriter(); }
        string getEdition_number() { return Edition_number; }
        double getPrice() { return Price; }
        long getQuantity() { return Quantity; }

        void setTitle(string temp) { Title = temp; }
        void setWriters_name(string temp) { writer.setWriter(temp); }
        void setEdition_number(string temp) { Edition_number = temp; }
        void setPrice(double temp) { Price = temp; }
        void setQuantity(long temp) { Quantity = temp; }
};
class FictionCatagory : public Book{
    string Catagory_name;
    public:
            string getCatagory_name(){ return Catagory_name; }
            void setCatagory_name(string temp){ Catagory_name = temp; }

};
class nonFictionCatagory : public Book{
    string Catagory_name;
    public:
            string getCatagory_name(){ return Catagory_name; }
            void setCatagory_name(string temp){ Catagory_name = temp; }

};
class ComicCatagory : public Book{
    string Catagory_name;
    public:
            string getCatagory_name(){ return Catagory_name; }
            void setCatagory_name(string temp){ Catagory_name = temp; }

};
class Person{
    string Person_name,Phone_number,Address;
    int Book_purchase_number;
public:
    string getPerson_name(){return Person_name;}
    string getPhone_number(){return Phone_number;}
    string getAddress(){return Address;}
    int getBook_purchase_number(){return Book_purchase_number;}

    void setPerson_name(string temp){Person_name=temp;}
    void setPhone_number(string temp){Phone_number=temp;}
    void setAddress(string temp){Address=temp;}
    void setBook_purchase_number(int temp){Book_purchase_number=temp;}


};
int main()
{
    nonFictionCatagory a[3];
    for(int i=0; i<3; i++){
        string s,s1;
        cout << "Enter Title name: ";
        getline(cin,s);
        a[i].setTitle(s);
        cout << "Enter Writers name: ";
        getline(cin,s);
        a[i].setWriters_name(s);
        cout << "Enter Book Edition: ";
        getline(cin,s);
        a[i].setEdition_number(s);
        cout<<"Enter Cost of the Book: ";
        double x;
        cin>>x;
        a[i].setPrice(x);
        cout<<"Enter the numbers of books availabel: ";
        int p;
        cin>>p;
        a[i].setQuantity(p);
        getchar();
    }
    FictionCatagory b[3];
    for(int i=0; i<3; i++){
        string s;
        cout << "Enter Title name: ";
        getline(cin,s);
        b[i].setTitle(s);
        cout << "Enter Writers name: ";
        getline(cin,s);
        b[i].setWriters_name(s);
        cout << "Enter Book Edition: ";
        getline(cin,s);
        b[i].setEdition_number(s);
        cout<<"Enter Cost of the Book: ";
        double x;
        cin>>x;
        b[i].setPrice(x);
        cout<<"Enter the numbers of books availabel: ";
        int p;
        cin>>p;
        b[i].setQuantity(p);
        getchar();
    }
    ComicCatagory c[3];
    for(int i=0; i<3; i++){
        string s;
        cout << "Enter Title name: ";
        getline(cin,s);
        c[i].setTitle(s);
        cout << "Enter Writers name: ";
        getline(cin,s);
        c[i].setWriters_name(s);
        cout << "Enter Book Edition: ";
        getline(cin,s);
        c[i].setEdition_number(s);
        cout<<"Enter Cost of the Book: ";
        double x;
        cin>>x;
        c[i].setPrice(x);
        cout<<"Enter the numbers of books availabel: ";
        int p;
        cin>>p;
        c[i].setQuantity(p);
        getchar();
    }
    Person Customers[3];
    for(int i=0; i<3; i++){
        string s;
        cout << "Enter Name: ";
        getline(cin,s);
        Customers[i].setPerson_name(s);
        cout << "Enter Phone Number: ";
        getline(cin,s);
        Customers[i].setPhone_number(s);
        cout << "Enter Address: ";
        getline(cin,s);
        Customers[i].setAddress(s);
        cout<<"How many books he/she buy : ";
        int f;
        cin>>f;
        Customers[i].setBook_purchase_number(f);
        getchar();
    }
    cout<<"LIST OF THE BOOKS IN THE LIBRERY"<<endl;
    cout<<"Books Catagory : NonFictinoal"<<endl;
    for(int i=0; i<3; i++){
        cout << "Title name: ";
        cout<<a[i].getTitle()<<endl;
        cout << "Writers name: ";
        cout<<a[i].getWriters_name()<<endl;
        cout << "Book Edition: ";
        cout<<a[i].getEdition_number()<<endl;
        cout<<"Cost of the Book: ";
        cout<<a[i].getPrice()<<endl;
        cout<<"Number of books available: ";
        cout<<a[i].getQuantity()<<endl;
    }
    cout<<endl<<endl;
    cout<<"Books Catagory : Fictinoal"<<endl;
    for(int i=0; i<3; i++){
        cout << "Title name: ";
        cout<<b[i].getTitle()<<endl;
        cout << "Writers name: ";
        cout<<b[i].getWriters_name()<<endl;
        cout << "Book Edition: ";
        cout<<b[i].getEdition_number()<<endl;
        cout<<"Cost of the Book: ";
        cout<<b[i].getPrice()<<endl;
        cout<<"Number of books available: ";
        cout<<b[i].getQuantity()<<endl;
    }
    cout<<endl<<endl;
    cout<<"Books Catagory : Comic"<<endl;
    for(int i=0; i<3; i++){
        cout << "Title name: ";
        cout<<c[i].getTitle()<<endl;
        cout << "Writers name: ";
        cout<<c[i].getWriters_name()<<endl;
        cout << "Book Edition: ";
        cout<<c[i].getEdition_number()<<endl;
        cout<<"Cost of the Book: ";
        cout<<c[i].getPrice()<<endl;
        cout<<"Number of books available: ";
        cout<<c[i].getQuantity()<<endl;
    }
    cout<<endl<<endl;
    cout<<"LIST OF PLAYER WHO HAVE DISCOUNT OFFER"<<endl;
    for(int i=0;i<3;i++){
        if(Customers[i].getBook_purchase_number()>=3){
        cout << "Name: ";
        cout<<Customers[i].getPerson_name()<<endl;
        cout << "Phone Number: ";
        cout<<Customers[i].getPhone_number()<<endl;
        cout << "Address: ";
        cout<<Customers[i].getAddress()<<endl;
        cout<<"Amount of books he/she buy : ";
        cout<<Customers[i].getBook_purchase_number()<<endl;
        }
    }
    return 0;
}
