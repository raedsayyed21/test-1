/*name : Raed Iqbal Sayyed
UIN : 251C009
Field ; civil
DIV : B */

#include <stdio.h>

int main() { 
    float physics,chemistry,math,average;
    printf("enter marks in physiscs:");
    scanf("%f",&physics);

    printf("enter marks in chemistry:");
    scanf("%f", &chemistry);

    printf("enter marks in math:");
    scanf("%f", &math);

    average=(physics +chemistry + math) /3;

    printf("\naverage marks=%.2f\n",average);

    (average>=50) {
    printf("eligible for admission.\n");
    } else{
        printf("not eligible for admission.\n");
        }

    return 0;
    }
  