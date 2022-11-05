#include <stdio.h>
int reverse(int a, int reversed){
//Lengkapi Function ini
    while(a!=0){
        reversed = reversed * 10;
        reversed = reversed + a % 10;
        a = a / 10;}
    return reversed;}
int reverse2(int b, int reversed){
    while(b!=0){
        reversed = reversed * 10;
        reversed = reversed + b % 10;
        b = b / 10;}
    return reversed;}
int reverse3(int c, int reversed){
    while(c!=0){
        reversed = reversed * 10;
        reversed = reversed + c % 10;
        c = c / 10;}
    return reversed;}
int main(){
    int A, B, reversed = 0;
    scanf("%d %d", &A, &B);
    A = reverse(A, reversed);
    B = reverse2(B, reversed);
    int C = A + B;
    printf("%d", reverse3(C, reversed));
}