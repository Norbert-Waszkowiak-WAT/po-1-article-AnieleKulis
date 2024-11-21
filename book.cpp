#ifndef UNTITLED1_BOOK_H
#define UNTITLED1_BOOK_H
#include <iostream>
#include <string>
#include "author.cpp"
#include "article.cpp"
#include "chapter.cpp"
class Book{
    private:
      std:: string title;
      Author author;
      int publicationYear;
      std::vector <Chapter> chapters;
    public:
    Book()
    :title(""),author(Author()),publicationYear(2023),chapters(){};

    Book(std::string bookTitle, Author bookAuthor,int year,std::vector <Chapter>bookChapters)
    :title(bookTitle),author(bookAuthor),publicationYear(year),chapters(bookChapters){};
    void addChapter(Chapter &chapters){
      chapters.push_back(chapter);
    }
    std:: string getTitle(){
        return title;
    }
    Author getAuthor(){
        return author;
    }
    int getPublicationYear(){
        return publicationYear;
    }
    vector <Chapter>Book::getChapters(){
      return chapters;
    }
    void displayInfo(){
  std::cout<<"mostek";
}
};

#endif