#include <stdio.h>
int main() {
char str[100];
FILE *fp = fopen("/Users/abhimanyuaggarwal/Downloads/Abhi.txt", "r");
if (fp == NULL) {
printf("File not found!\n");
return 1;
while (fgets(str, sizeof(str), fp)) {
printf("%s", str);
}
}
fclose(fp);
return 0;
}