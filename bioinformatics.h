#include<string.h>

int getHammingDistance(char string1[], char string2[]){
	
	/* this function returns the count of the same characters in string1 and string2. 
		if the strings do not have any character in common, it returns -1 */
	
	int i, count=0;
	if(strlen(string1) != strlen(string2)) return -1;

	else{

		for(i=0;i<strlen(string1);i++)
			count += (string1[i]!=string2[i]) ? 1 : 0;

		return count;
	}
}
int countSubstrPattern(char string1[], char string2[]){
	
	/* this function returns the number of occurences of a substring (string2) in a string (string1) */
	
	int count = 0;
	char *p = string1;
	while(p = strstr(p, string2))
	{
	   count+=1;
	   p+=1;

	}

	return count;
} 
int isValidString(char s1[], char s2[]){
	
	/* this function returns 1 if s1 can be derived from the alphabet s2. otherwise, this returns 0 */

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
	
	/* this function returns the number of G's minus the number of C's in string from position 1 to position x */
	
	int i,g=0,c=0;
	for(i=0; i<x;i++){
		if(string[i]=='G') g+=1;
		else if(string[i]=='C') c+=1;
	}
	return g-c;
}
int getMaxSkewN(char string[], int x){

	/* this function returns the maximum value of the number of G's minus the number of C's
	 in string from position 1 to position x */
	
	int i,g=0,c=0, maxSkew;
	for(i=0; i<x;i++){
		if(string[i]=='G') g+=1;
		else if(string[i]=='C') c+=1;

		maxSkew = (i!=0 && g-c < maxSkew) ? maxSkew : g-c;
	}
	return maxSkew;
}
int getMinSkewN(char string[], int x){
	
	/* this function returns the minimum value of the number of G's minus the number of C's
	 in string from position 1 to position x */
	
	int i,g=0,c=0, minSkew;
	for(i=0; i<x;i++){
		if(string[i]=='G') g+=1;
		else if(string[i]=='C') c+=1;

		minSkew = (i!=0 && g-c > minSkew) ? minSkew : g-c;
	}
	return minSkew;	
}