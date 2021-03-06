//
// Created by alberto on 15/09/20.
//

#ifndef UNTITLED_FILM_H
#define UNTITLED_FILM_H
#include<iostream>
#include <list>

using namespace std;
class Film {
public:
    Film(string T, int Y, string R) : title(T), year(Y), Rname(R){};
    void addType(string T);

    const string &getTitle() const {
        return title;
    }

    const string &getRname() const {
        return Rname;
    }

    int getYear() const {
        return year;
    }

    void setDownloaded(bool downloaded) {
        Film::downloaded = downloaded;
    }

    bool isDownloaded() const {
        return downloaded;
    }

    const list<string> &getType() const {
        return type;
    }

private:
    string title;
    string Rname;
    int year;
    bool downloaded;
    list<string> type;
};


#endif //UNTITLED_FILM_H
