#include<stdio.h>
#include<stdlib.h>
#include"bioinformatics.h"

main(){
	int choice, ans, x;
	char s1[30], s2[30];
	while(1){
		printf("\nMenu: \n");
		printf("[1] Get Hamming Distance\n");
		printf("[2] Count Substring Pattern\n");
		printf("[3] Check Validity of Substring\n");
		printf("[4] Get Skew\n");
		printf("[5] Get Max Skew\n");
		printf("[6] Get Min Skew\n");
		printf("[7] Exit\n");

		scanf("%d", &choice);

		switch(choice){
			case 1: printf("Enter string 1: ");
					scanf("%s", s1);
					printf("Enter string 2: ");
					scanf("%s", s2);
					ans = getHammingDistance(s1, s2);
					(ans > 0) ? printf("\nhamming distance = %d\n\n", ans) : printf("\nError! Strings are not equal!\n\n");
					break;
			case 2: printf("Enter original string: ");
					scanf("%s", s1);
					printf("Enter pattern: ");
					scanf("%s", s2);
					printf("\nnumber of occurence of pattern = %d\n\n", countSubstrPattern(s1, s2));
					break;
			case 3: printf("Enter string to be checked: ");
					scanf("%s", s1);
					printf("Enter alphabet string: ");
					scanf("%s", s2);
					(isValidString(s1, s2) == 1) ? printf("\nString is valid!\n\n") : printf("\nString is invalid!\n\n");
					break;
			case 4: printf("Enter genome string: ");
					scanf("%s", s1);
					printf("Enter value: ");
					scanf("%d", &x);
					printf("\nskew = %d\n\n", getSkew(s1, x));
					break;
			case 5: printf("Enter genome string: ");
					scanf("%s", s1);
					printf("Enter value: ");
					scanf("%d", &x);
					printf("\nmax skew = %d\n\n", getMaxSkewN(s1, x));
					break;
			case 6: printf("Enter genome string: ");
					scanf("%s", s1);
					printf("Enter value: ");
					scanf("%d", &x);
					printf("\nmin skew =%d\n\n", getMinSkewN(s1, x));
					break;
			case 7: exit(0);
			default: printf("Invalid choice!\n\n");
		}
	}

}