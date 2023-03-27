#include <stdio.h>

void preencherBaseAltura(float *base, float *altura);
void calcularAreaTriangulo(float base, float altura, float *areaTriangulo);
int main(){
    float base, altura, areaTriangulo;
    printf("Digite a base e a altura do triângulo: ");
    preencherBaseAltura(&base, &altura);
    calcularAreaTriangulo(base, altura, &areaTriangulo);
    printf("Área do triângulo: %g\n",areaTriangulo);    
}
void preencherBaseAltura(float *base, float *altura){
    scanf("%f %f",base, altura);
    //scanf("%f %f",&*base, &*altura);
}
void calcularAreaTriangulo(float base, float altura, float *areaTriangulo){
    *areaTriangulo = base*altura/2;
}
