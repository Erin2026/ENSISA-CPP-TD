#include "Complex2D.h"

int main(){
    Complex2D a = Complex2D();
    Complex2D b = Complex2D(1,2);
    Complex2D c = Complex2D(5);
    printf("(%.2f+%.2fi)\n",a.getRe(),a.getImg());
    printf("(%.2f+%.2fi)\n",b.getRe(),b.getImg());
    printf("(%.2f+%.2fi)",c.getRe(),c.getImg());
    printf("%f",module(b*c));
}
