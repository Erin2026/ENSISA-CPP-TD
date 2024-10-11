#ifndef COMPLEX2D_H
#define COMPLEX2D_H

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Complex2D
{
private:
    double re, img;
public:
    Complex2D() = default;
    Complex2D(double _re, double _img);
    Complex2D(double _nbr);
    Complex2D(Complex2D &complex);
    void setRe(double newRe);
    void setImg(double newImg);
    double getRe()const;
    double getImg()const;
    friend Complex2D conjug(const Complex2D &c);
    friend double module(const Complex2D &c);
    Complex2D symetric(const Complex2D &c)const;
    Complex2D inverse(const Complex2D &c)const;
    Complex2D operator +(const Complex2D &c)const;
    Complex2D operator -(const Complex2D &c)const;
    Complex2D operator *(const Complex2D &c)const;
    Complex2D operator /(const Complex2D &c)const;
    bool operator <(const Complex2D &c)const;
    bool operator >(const Complex2D &c)const;
};



#endif