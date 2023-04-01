#include <stdio.h>

int main() {

    int cases,ans,ideal=127,qstn,optn,given_ans[5],flag=0,done=0;
    //<127 is black

    do{
        scanf("%d",&cases);

        if(cases){
            for(qstn=0;qstn<cases;qstn++)
            {
                for(optn=0;optn<5;++optn)
                {
                    scanf("%d",&ans);
                    given_ans[optn]=ans;
                    if(ans<=ideal)
                        ++flag;
                }
                if(flag>1) {printf("*\n");
                flag=0;}

                else{
                    for(optn=0;optn<5;++optn)
                    {
                        if(given_ans[optn]<=ideal){

                            switch (optn)
                            {
                                case 1: printf("A\n");
                                        ++done;
                                        break;
                                case 2: printf("B\n");
                                        ++done;
                                        break;
                                case 3: printf("C\n");
                                        ++done;
                                        break;
                                case 4: printf("D\n");
                                        ++done;
                                        break;
                                case 5: printf("E\n");
                                        ++done;
                                        break;
                            }
                            if(done) break;
                        }
                    }
                }
            }
        }
    }while(cases);

    return 0;
}
