#include <iostream>
#include <cmath>

using namespace std;


float t = 1.0;
int D = 1;
float Nx = 30.0;
int a = 1;
float dx = 2.0/Nx;
float dt = (dx*dx)/(2*D);
float resultados[450+1][31];



int main(){
    
    int i;
    int j;
    float l = D*dt/(dx*dx);
    
    // iteraciones con el tiempo
    for(i=1; i<(451); i++){
        for(j=1; j< Nx+1; j++){
            resultados[i][j]= 0.0;
    
            }
    }
    
    
    
    // se llenan las condiciones iniciales
    for(i = 1; i < Nx ;i++) {
        resultados[0][i]= 0.0;
    }  
    
    // iteraciones con el tiempo
    for(i=1; i<(451); i++){
        
        for(j=1; j< Nx; j++){
            
            resultados[i][j]= l*(resultados[i-1][j-1]-2*resultados[i-1][j]+resultados[i-1][j+1])+resultados[i-1][j]+ dt;
        }
    }
    
    // Matriz impresion()
        
    for(i=0; i<(451); i++){
        for(j=0; j< Nx; j++){
            
            cout << resultados[i][j] << " " ;
        }
        
        cout <<"\n";
    }
        
    }
    
    
    
