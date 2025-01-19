#include <stdio.h>

int circle();
int triangle();
int square();
int rectangle();

int main(){
    printf("%s - %s\n", __TIME__, __DATE__);
    printf("Ammar Mullaoglu - Jan 19 2025\n\n");
    printf("Welcome to shapesCalculator\n");
    printf("Which shape you do calculations on it ?");
    printf("\n1.Circle \n2.Triangle \n3.Square \n4.Rectangle\n");
    short int shapeSelect;
    scanf("%hd", &shapeSelect);
    if(shapeSelect == 1)circle();
    if(shapeSelect == 2)triangle();
    if(shapeSelect == 3)square();
    if(shapeSelect == 4)rectangle();
    return 0;
}

// CIRCLE FUNCTION
int circle(){
    printf("\nEnter the circle's R value : \nR = ");
    float r = 0;
    scanf("%f", &r);
    printf("\nDo you wanna calculate: \n1.Circle's Circumference \n2.Circle's Area\n");
    short int temp;
    scanf(" %hd", &temp);
    if(temp == 1){
        printf("\nCircle's Circumference = 2 * PI * %.2f = %.2f\n", r, (2*3.14f*r));
    }
    else if(temp == 2){
        printf("\nCircle's Area = PI * %.2f ^ 2 = %.2f\n", r, (3.14f * r * r));
    }
    return 0;
};

//TRIANGLE FUNCTION
int triangle(){
    printf("\nDo you wanna calculate \n1.Triangle's Circumference \n2.Triangle's Area\n");
    short int temp;
    scanf("%hd", &temp);
    if(temp == 1){
        printf("\nEnter the values of the Triangle:");
        float a, b, c;
        printf("\nA = ");
        scanf("%f", &a);
        printf("B = ");
        scanf("%f", &b);
        printf("C = ");
        scanf("%f", &c);
        printf("\nTriangle's Circumference = %.1f + %.1f + %.1f = %.2f\n", a, b, c, a+b+c);
    }
    else if(temp == 2){
        printf("\nEnter the values of the Triangle's Base and Hight:");
        float b, h;
        printf("\nBase = ");
        scanf("%f", &b);
        printf("\nHight = ");
        scanf("%f", &h);
        printf("\nTriangle's Area = 1/2 * %.1f * %.1f = %.1f\n", b, h, (0.5 * b * h));
    }
    return 0;
};

//SQUARE FUNTION
int square(){
    printf("\nEnter the value of the squar's A :\nA = ");
    float a;
    scanf("%f", &a);
    printf("\nDo you wanna calculate \n1.Square's Circumference \n2.Square's Area\n");
    short int temp;
    scanf("%hd", &temp);
    if(temp == 1){
        printf("\nSquare's Circumference = %.1f * 4 = %.1f\n", a, 4 * a);
    }else if(temp == 2){
        printf("\nSquare's Area = %.1f * %.1f = %.2f\n", a, a, a * a);
    }
    return 0;
};

//RECTANGLE FUNCTION
int rectangle(){
    printf("\nEnter the values of the rectangle :\nA = ");
    float a, b;
    scanf("%f", &a);
    printf("B = ");
    scanf("%f", &b);
    printf("\nDo you wanna calculate \n1.Rectangle's Circumference \n2.Rectangle's Area\n");
    short int temp;
    scanf("%hd", &temp);
    if(temp == 1){
        printf("\nRectangle's Circumference = (%.2f + %.2f) * 2 = %.2f\n", a, b, (a + b) * 2);
    }else if(temp == 2){
        printf("\nRectangle's Area = %.2f * %.2f = %.2f\n", a, b, a * b);
    }
    return 0;
};
