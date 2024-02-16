//Finding prime number between range of given number

#include<stdio.h>

//void is_prime(int f_num, int l_num){
//	int i,factor=0,k,j;
//	for(i=f_num;i<=l_num;i++){
//		j=i;
//		if(j%i == 0){
//			factor += 1;
//		}
//		j++;
//	}
//		for(k=f_num;k<=l_num;k++){
//			if(factor ==2 ){
//			printf("%d ", j);
//		}
//	}
//}

void is_prime(int f_num, int l_num) {
    int i, j, is_prime;
    for (i = f_num; i <= l_num; i++) {
        is_prime = 1;  //indicates TRUE
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0;  //indicates FALSE
                break;
            }
        }
        if (is_prime==1 && i != 1) {
            printf("%d ", i);
        }
    }
}


int main(){
	int n1,n2;
	printf("Enter number form wher to start: ");
	scanf("%d", &n1);
	printf("Enter number  wher to end: ");
	scanf("%d", &n2);
	
	is_prime(n1,n2);
	
	
	return 0;
}
