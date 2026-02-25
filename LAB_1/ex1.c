#include <stdio.h>
#include <string.h>

int main() {

	FILE* f;
	f = fopen("ini.txt", "r");

	char s[10];

	int x = 0;

  while(fgets(s, 10, f) != NULL) {
    int nr = 0;
		for(int i = 0; i < strlen(s); i++) {
			if(s[i] >= '0' && s[i] <= '9') {
				nr = nr * 10 + (s[i] - '0');
			}
		}

		x += nr;
	}

	printf("%d \n", x);

	return 0;
}
