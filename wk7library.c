#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char title[100];
    
    
    fp = fopen("borrowed_books.txt", "a");
    
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Enter book title (type 'exit' to stop):\n");
    
    while (1) {
        printf("> ");
        fgets(title, sizeof(title), stdin);
        
        
        title[strcspn(title, "\n")] = '\0';
        
        if (strcmp(title, "exit") == 0) {
            break;
        }
        
        fprintf(fp, "%s\n", title);
        fflush(fp); 
        
        
        printf("'%s' successfully stored in borrowed_books.txt\n", title);
    }
    
    fclose(fp);
    printf("File closed.\n");
    return 0;
}