#include<stdio.h>
#include<stdlib.h>
#include<process.h>

int find_largest(int arra[], int n){
    int max=arra[0];
    int i;
    for(i=1;i<n;i++){
        if(arra[i]>max){
            max=arra[i];
        }
    }
    return max;
}

void main()
{
/*    FILE *f_bat, *f_back;
    f_bat = fopen("E:\AUTOEXEC.BAT","rt");
    if(f_bat==NULL){
        fprintf(stderr,"Cannot open bat file.\n");
        exit(1);
    }

    f_back = fopen("E:\AUTOEXEC.BACK","wt");

    if(f_back==NULL){
        fprintf(stderr,"Cannot open back file.\n");
        exit(1);
    }

//writes content from f_bat to f_back
    while(!feof(f_bat))
        fputc(fgetc(f_bat),f_back);  //charecters from f_bat to f_back
    fclose(f_bat);
    fclose(f_back);
*/


}
