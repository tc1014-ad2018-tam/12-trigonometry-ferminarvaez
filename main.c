// Fermín Narváez Reyes A01411229
#include <stdio.h>
#include <math.h>

//Establecer variables de angulos
double radian = 0;
double angulo = 0;

//Operación de seno
void sine (double angulo){
    double s = 0;
    s = sin(angulo);
    printf ("\n Seno: %lf \n",s);
}
//Operación de secante
void secant (double angulo) {
    double sc = 0;
    sc = (1/cos(angulo));
    printf ("\n Secante: %lf \n", sc);
}
//Operación de tangente
void tangent (double angulo) {
    double t = 0;
    t = tan(angulo);
    printf ("\n Tangente: %lf \n", t);
}
//Operación de cotangente
void cotangent (double angulo) {
    double cot = 0;
    cot = (1/tan(angulo));
    printf ("\n Cotangente: %lf \n", cot);
}
//Operación de coseno
void cosine (double angulo) {
    double c = 0;
    c = (cos(angulo));
    printf ("\n Coseno: %lf \n", c);
}
//Operación de cosecante
void cosecant (double angulo) {
    double csc = 0;
    csc = (1/sin(angulo));
    printf ("\n Cosecante: %lf \n", csc);
}
//Funcion principal
int main() {
    //Se le pide al usuario los datos
    printf("Valor del angulo (en grados/degrees): \n");
    scanf ("%lf", &angulo);
    //Se convierten los grados a radianes
    radian = (angulo*0.0174533);
//Todas las funciones en radianes
    sine (radian);
    cosine (radian);
    tangent (radian);
    cosecant (radian);
    cotangent (radian);
    secant (radian);

    return 0;
}