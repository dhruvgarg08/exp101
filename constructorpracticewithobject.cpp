 #include<iostream>
 using namespace std;
class book{
    public:
    string Title;
    string Author;
    int Pages;
    int Yearsold; 
    void abcd(){
        if(Pages>400){
            cout<<Title;
        }else{
            cout<<"not found";
        }
    }
 
    book(string title,string author,int pages,int yearsold){
        Title=title;
        Author=author;
        Pages=pages;
        Yearsold=yearsold;

    }


};
int main(){
    book book1("harry porter","abc",100,100);
    book1.abcd();
    book book2("abcd","abcc",200,10);
    cout<< book1.Title;
}