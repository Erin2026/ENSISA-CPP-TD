#include "Complex2D.h"

Complex2D::Complex2D(double _re, double _img):re(_re),img(_img)
{}

Complex2D::Complex2D(double _nbr):re(_nbr),img(_nbr)
{}

Complex2D::Complex2D(Complex2D &complex):re(complex.re),img(complex.img)
{}

void Complex2D::setRe(const double newRe){
    re=newRe;
}
    
void Complex2D::setImg(double newImg){
    img=newImg;
}

double Complex2D::getRe()const{
    return re;
}
    
double Complex2D::getImg()const{
    return img;
}

double module(const Complex2D &c){
    return sqrt(c.re*c.re + c.img*c.img);
}

Complex2D conjug(const Complex2D &c){
    Complex2D conjComplex = Complex2D(c.getRe(),-c.getImg());
    return conjComplex;
}

Complex2D Complex2D::symetric(const Complex2D &c)const{
    Complex2D symComplex = Complex2D(-c.getRe(),-c.getImg());
    return symComplex;
}

Complex2D Complex2D::inverse(const Complex2D &c)const{
    Complex2D conjComplex = conjug(c);
    double norm = module(c); 
    Complex2D invComplex = Complex2D(conjComplex.getRe()/(norm*norm),conjComplex.getImg()/(norm*norm));
    return invComplex;
}

Complex2D Complex2D::operator +(const Complex2D &c)const{
    Complex2D newComplex = Complex2D(re + c.getRe(), img + c.getImg());
    return newComplex;
}

Complex2D Complex2D::operator -(const Complex2D &c) const{
    Complex2D newComplex = Complex2D(re - c.getRe(), img - c.getImg());
    return newComplex;
}

Complex2D Complex2D::operator *(const Complex2D &c) const{
    Complex2D newComplex = Complex2D(re * c.getRe() - img * c.getImg(), re * c.getImg() + img * c.getRe());
    return newComplex;
}

Complex2D Complex2D::operator /(const Complex2D &c) const{
    Complex2D newComplex = Complex2D(re / c.getRe(), img / c.getImg());
    return newComplex;
}

bool Complex2D::operator < (const Complex2D &c)const{
    return module(*this) < module(c);
}

bool Complex2D::operator > (const Complex2D &c)const{
    return module(*this) > module(c);
}