// a <c <=b
# include <stdio.h>
# include <math.h>
int main()
{
    printf("enter the 2 values as integers : ");
    float a,b ;
    float c ;
    
    
    scanf("%f",&a);
    scanf("%f", &b);
    
    if(a==b){
        printf("The given two values %f is equal.",b);
    }
    else(b>a); {
        c = ((float)((a+b) / 2));
        printf("the output is %.0f", ceil(c));
        
    }
    
    return 0;
    
}



