#include <stdio.h>

int main(){
    float attendance;
    float average_marks;
    
    printf("attendance percentage");
    scanf("%f",&attendance);
    
    printf("average_marks");
    scanf("%f",& average_marks);
    
    if(attendance >=75&& average_marks >=40){
    printf("eligible");
    }
    
    else{
    printf("not eligible");
    }
    
    return 0;
    
 }   