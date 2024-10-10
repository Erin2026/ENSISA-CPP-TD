#ifndef COMPLEX2D_H
#define COMPLEX2D_H

#include <iostream>
#include <string>
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
    Complex2D operator +(const Complex2D &c) 
};



#endif