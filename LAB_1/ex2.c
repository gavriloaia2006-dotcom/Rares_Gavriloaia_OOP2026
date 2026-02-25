#include <string.h>
#include <stdio.h>

int main() {

	char s[255];
	char s1[255][255];
	char tmp[255];

  fgets(s, sizeof(s), stdin);

  s[strlen(s) - 1] = '\0';

	char* p = strtok(s, " ");

	int n = 0;

	while(p != NULL) {
		strcpy(s1[n++], p);
		p = strtok(NULL, " ");
	}

	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(strlen(s1[i]) == strlen(s1[j])) {
				if(strcmp(s1[i], s1[j]) > 0) {
					strcpy(tmp, s1[i]);
					strcpy(s1[i], s1[j]);
					strcpy(s1[j], tmp);
				}
			}

			if(strlen(s1[i]) < strlen(s1[j])) {
				strcpy(tmp, s1[i]);
				strcpy(s1[i], s1[j]);
				strcpy(s1[j], tmp);
			}
		}
	}

	for(int i = 0; i < n; i++) {
		printf("%s \n", s1[i]);
	}

	return 0;
}
