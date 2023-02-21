#include <stdio.h>

int main() {
    int tot[10][5] = {{1,1,3,3,4},{5,3,4,1,3},{3,4,2,2,1},{2,2,5,4,2},{4,5,1,5,5},{3,4,2,4,3},{1,3,5,5,2},{2,1,4,2,1},{5,5,1,1,5},{4,2,3,3,4}};
    int i;
    int j;
    int k = 0;
    int x = 0;
    int w = 0;
    int z = 0;
    int y = 6;
    int temp = 0;
    int count = 0;
    int holdval = 0;

        for(j = 0;j<5;j++){
            for(i = 0;i<5;i++){
                if((tot[k][i] == tot[k][j])&&(i != j)){
                    x = tot[k][i] -1;
                    holdval = k;
                    k = k + 5;
                    for(k;k<10;k++){
                        if(tot[k][x] == i){
                            printf("Department %d gets employee %d\n",i+1,x+1);
                            k = holdval;
                            temp = tot[k][j];
                            tot[k][j] = tot[k+1][j];
                            tot[k+1][j] = temp;
                            ++count;
                            break;
                        }
                        else if(tot[k][x] == j){
                            printf("Department %d gets employee %d\n",i+1,x+1);
                            k = holdval;
                            temp = tot[k][i];
                            tot[k][i] = tot[k+1][i];
                            tot[k+1][i] = temp;
                            ++count;
                            break;
                        }
                    }
                }
                
            }
        }
    
  }



