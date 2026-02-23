#include <stdio.h>
#include <stdlib.h>

int main(void){

    int fm, fd, fy;
    int min_m, min_d, min_y;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%2d", &fm, &fd, &fy);

    min_y = fy, min_m = fm; min_d = fd;

    while(1){
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%2d", &fm, &fd, &fy);
        
        if(fm == 0 && fd == 0 && fy == 0){
            break;
        }

        if(fy < min_y){
            min_y = fy;
            min_m = fm;
            min_d = fd;
        }
        else if(fy == min_y){
            if(fm < min_m){
                min_y = fy;
                min_m = fm;
                min_d = fd;
            }
            else if(fm == min_m){
                if(fd < min_d){
                    min_y = fy;
                    min_m = fm;
                    min_d = fd;
                }
            }
        }

    }

    printf("%d/%d/%2d is earliest date\n", min_m, min_d, min_y);
    system("pause");
    return 0;
} 