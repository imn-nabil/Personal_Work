#include <stdio.h>

double avrg(double numbers[],int n){
    double sum=0;
    for (int i=0;i<n;i++){
        sum=sum+numbers[i];
    }
    double avg=sum/n;
    return avg;
}

int main()
{
    int size=0;
    double numbers[size];
    printf("How many numbers would you like to enter");
    scanf("%d",&size);

    int i;
    for(i=0;i<size;i++){
        printf("Enter the %dth number",(i+1));
        scanf("%lf",&numbers[i]);
    }//a obdi thik ase

    double average_of_them=avrg(numbers,size);
    printf("The average of those numbers is %lf",avrg(numbers,size));

    return 0;

}
