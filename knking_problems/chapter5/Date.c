#include <stdio.h>
#include <stdlib.h>

int main(void){

    int fm, fd, fy1, fy2;
    int sm, sd, sy1, sy2;
    int f_year_sum, s_year_sum;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%1d%1d", &fm, &fd, &fy1, &fy2);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%1d%1d", &sm, &sd, &sy1, &sy2);

    f_year_sum = fy2 + fy1*10;
    s_year_sum = sy2 + sy1*10;

    if(f_year_sum > s_year_sum){
        printf("%d/%d/%d%d is earlier than %d/%d/%d%d\n", sm, sd, sy1, sy2, fm, fd, fy1, fy2);
    }
    else if(f_year_sum == s_year_sum){
        if(fm > sm){
            printf("%d/%d/%d%d is earlier than %d/%d/%d%d\n", sm, sd, sy1, sy2, fm, fd, fy1, fy2);
        }
        else if(fm == sm){
            if(fd > sd){
                printf("%d/%d/%d%d is earlier than %d/%d/%d%d\n", sm, sd, sy1, sy2, fm, fd, fy1, fy2);
            }
            else{
                printf("%d/%d/%d%d is earlier than %d/%d/%d%d\n", fm, fd, fy1, fy2, sm, sd, sy1, sy2);
            }
        }
        else{
            printf("%d/%d/%d%d is earlier than %d/%d/%d%d\n", fm, fd, fy1, fy2, sm, sd, sy1, sy2);
        }
    }
    else{
        printf("%d/%d/%d%d is earlier than %d/%d/%d%d\n", fm, fd, fy1, fy2, sm, sd, sy1, sy2);
    }
    
    system("pause");
    return 0;
}
