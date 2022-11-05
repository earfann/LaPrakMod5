#include <stdio.h>
#include <math.h>
int hitung(int nilai1, int nilai2){
//Lengkapi Function ini
    return (nilai1-nilai2);}
int hitung2(int nilai3, int nilai4){
    return (nilai3-nilai4);}
int mutlak(int angka){
//Lengkapi Function ini
    return abs (angka);}
int main(){
    int a,b,c,d,hasil;
    scanf("%d",&a);
    scanf("%d",&c);
    scanf("%d",&b);
    scanf("%d",&d);
    hasil = hitung(a,b) + hitung(c,d);
    printf("%d",mutlak(hasil));
    return 0;
}