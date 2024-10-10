#include "Complex2D.h"

Complex2D::Complex2D(double _re, double _img):re(_re),img(_img)
{
}

Complex2D::Complex2D(double _nbr):re(_nbr),img(_nbr)
{
}

Complex2D::Complex2D(Complex2D &complex):re(complex.re),img(complex.img)
{
}

void setRe(const double newRe){
    re(newRe);
}
    

    
void setImg(const double newImg){
    img(newImg);
}



double getRe(){
    return this->re;
}
    
    
    
double getImg(){
    return this->img;
}

Complex2D Complex2D::operator +(const Complex2D &c) const;