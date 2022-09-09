#include<stdio.h>
#include<stdlib.h>
int main(){
    int ch,i,hc,fault=0,oldest;
    int j,k,flag=0,hit=0,ccount;

    printf("enter the no of characters");
    scanf("%d",&ch);
    int a[ch];

    printf("enter the positive intefgers one by one");
    for(i=0;i<ch;i++){
        scanf("%d",&a[ch]);  
    }


    int fs;
    printf("Enterthe frame size");
    scanf("%d",&fs);
    
    int test[fs];
    for(i=0;i<fs;i++){
        test[i]=-1;
    }
    oldest=test[0];
    ccount=1;
    for(i=0;i<ch;i++){
        for(j=0;j<fs;j++){
            flag=0;
            if(a[i]==test[j]){
                flag=1;
                if(flag==1){
                    hit++;
                    break;
                }
            }
        }
        if(flag==1){
            continue;
        }


        for(j=0;j<fs;j++){
            if(test[i]==-1){
                test[i]=a[i];
                fault++;
            }

            else{
                for(k=0;k<fs;k++){
                    if(test[k]==oldest){
                        test[k]=a[i];
                        fault++;
                        if(ccount<=2){
                            oldest=test[k+1];
                            ccount++;
                        }
                        else{
                            oldest=test[0];
                            ccount=1;
                        }
                        

                        break;
                    }
                }

            }
            break;
        }
      
    }
    printf("the no of faults are %d", fault);
    printf("the no of hitss are %d", hit);
    for(i=0;i<fs;i++){
        printf("%d",test[i]);
    }
    
    
}