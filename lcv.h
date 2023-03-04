/*sofiamorales-2TM25*/

#include<iostream>
#define PI 3.1416
#include<cmath>
using namespace std;

int gradarad(float grad){ //sirve para pasar grados a radianes //
	float rad=0;
	rad= (grad*PI)/180; //formula//
	cout<<rad;
	
	return 0;
}

int radagrad(float rad){ //sirve para pasar  radianes a grados//
	float grad=0;
	grad=(rad*180/PI); //formula//
	cout<<grad;
	return 0;
}
	
 int recapol(float x=0, float y=0){ //en radianes//
 	float r=0;
 	float teta=0;
 	
 	r=sqrt((x*x)+(y*y));
 	teta= atan(y/x);
 	
 	cout<<r<<" "<<teta;
 	return 0;
 }
 
 
 int polarec(float r=0, float teta=0){
 	float x=0;
 	float y=0;
 	
 	x=r*cos(teta);
	y=r*sin(teta);
	
	cout<<x<<" "<<y;
	
	return 0;
 }
	
 int distp1p2(float x1=0, float y1=0, float z1=0,float x2=0, float y2=0, float z2=0){  /*distancia entre punto 1 y punto 2*/ 
 float p1p2=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))+((z2-z1)*(z2-z1)));//formula//
 cout<<p1p2;
 
 return 0;
 
 }
 
 #include<iostream>
#define PI 3.1416
#include<cmath>
 int puntomedio( float x1=0, float y1=0,  float z1=0, float x2=0, float y2=0, float z2=0){  // Declarar las variables para almacenar las coordenadas de los puntos
   
   float xpuntomedio= (x1 + x2) / 2; //  fórmula 
   float ypuntomedio= (y1 + y2) / 2;
   float zpuntomedio= (z1+z2) / 2;

   cout << "El punto medio entre (" << x1 << ", " << y1 << " , "<< z1,") y (" << x2 << ", " << y2 << " , "<< z2") es (" << xpuntomedio << ", " << ypuntomedio << " , "<<zpuntomedio ")"<< endl;   // Mostrar el resultado //

   return 0;

 }
 	
 	int pendiente(float x1=0, float y1=0,  float z1=0, float x2=0, float y2=0, float z2=0){
 		
 		float pendiente= (z2 - y2 -x2 / z1 - y1 - x1);
 		cout>>pendiente;
 		
 		return 0;
 	}
 		
 	int esfacil( float r=0, float teta=0, float phy=0){
 	float x=0;
 	float y=0;
 	float z=0;
 	
 	x=r*sin(phy)* cos(teta);
 	
 	cout<<x<<".."<<y<<"..."<<z<<endl;
 	
 	return 0;
 	}
 