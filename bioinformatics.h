#include<string.h>

int getHammingDistance(char string1[], char string2[]){
	int i, count=0;
	if(strlen(string1) != strlen(string2)) return -1;

	else{
		for(i=0;i<strlen(string1);i++){
			tolower(string1[i]);
			tolower(string2[i]);
		}

		for(i=0;i<strlen(string1);i++){
			count += (string1[i]!=string2[i]) ? 1 : 0;
		}

		return count;
	}
}
int countSubstrPattern(char s1[], char s2[]){
	return 0;
}
int isValidString(char s1[], char s2[]){
	int i, j, flag=0;

	for(i=0; i<strlen(s1); i++){
		for(j=0; j<strlen(s2); j++){
			if(s1[i] == s2[j]){
				flag = 1;
				break;
			}
		}
		if(j==strlen(s2) && flag==0) return 0;
		flag = 0; 
	}
	return 1;
}
int getSkew(char string[], int x){
	return 0;
}
int getMaxSkewN(char s1[], int x){
	return 0;
}
int getMinSkewN(char s1[], int x){
	return 0;	
}