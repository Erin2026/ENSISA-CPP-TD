#include <vector> // librarie de vector
#include <algorithm> // librairie des fonctions sur le vector
#include <iostream>
using namespace std ;

int main ( ) {
    // D e cl a r a t i o n d ’ un v e c t o r de t y p e i n t
    vector<int> v1 ;
    // D e c l a t a t i o n e t i n i t i a l i z a t i o n d ’ un v e c t o r de t y p e d o u bl e
    vector<double> v2 ( 5 , 10.5 ) ; // 5 el em e n t s de v a l e u r 1 0 . 5
    vector<double> v3 = { 1.2 , 2.1 , 3.2 , 4.3 } ;
    // Vec tor 2D de 4 l i g n e s e t 2 c ol onne s , el em e n t s = 0
    vector<vector<int>> v2D (4, vector<int>(2,0) ) ;
    // A j o u te r un elemen t a l a f i n
    v1.push back (10) ;
    v1.push back (1) ;
    v1.push back (2) ;
    v1.push back (4) ;
    cout << v1[0] << endl ;
    // T a i l l e de v e c t o r
    int v1size = v1.size() ;
    cout<<v1size<<endl ;
    // I t e r a t i o n s u r v e c t o r
    // Avec de s i n d i c e s
    for ( int i = 0 ; i <v1size ; i ++){
        cout << v1[i] << endl ;
    }
    // Avec de s p o i n t e u r s
    for ( auto it = v1.begin() ; it != v1.end() ; it++){
        cout << ∗it << e n dl ;
    }
    // Avec de Range−Based b o u c l e f o r
    for ( int value : v1 ){
        cout << value << endl ;
    }
    // E nleve r l e de rne r elemen t
    v1.popback() ;
    // A j o u te r un elemen t s u r un i n d i c e s p e c i f i q u e
    v1.insert(v1.begin()+1 , 7 ) ;
    // E nleve r un elemen t s u r un i n d i c e
    v1.erase(v1.begin()+ 1 );
    // Ordonner l e s el em e n t s
    sort(v1.begin(), v1.end ( ) ) ;
}