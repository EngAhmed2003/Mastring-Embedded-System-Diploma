/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */

#include <stdio.h>

#define p printf
#define s scanf
#define f fflush

const float pi = 3.14159265359;

void result(float r) ;

#define area(...) result(__VA_ARGS__)

int main(){
	float r;

	p("Enter the Radius : ");
	f(stdin); f(stdout);
	s("%f",&r);

	area(r);

	return 0;
}
void result(float r){

	p("\nArea=%.2f",pi*r*r);
}
