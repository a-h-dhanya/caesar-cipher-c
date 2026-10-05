#include <stdio.h>

int main()
{
    int choice,i,sh;
    
    do{
    	printf("====================================\n");
        printf("       MESSAGE SECURITY TOOL\n");
        printf("====================================\n");

        printf("1. Encrypt Message\n");
        printf("2. Decrypt Message\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
    
        switch(choice)
		{
            case 1:
                printf("Encryption selected.\n");
		        char message[100];
		        printf("Enter message: ");
		        scanf(" %[^\n]", message);
		        printf("Enter shift:");
		        scanf("%d",&sh);
		        printf("You entered: %s\n", message);
		        for(i = 0; message[i] != '\0'; i++){
			        if(message[i] >= 'a' && message[i] <= 'z'){
				        message[i] = (message[i] - 'a' + sh) % 26 + 'a';
			        } else if(message[i] >= 'A' && message[i] <= 'Z'){
				        message[i] = (message[i] - 'A' + sh) % 26 + 'A';
			        }
		        }
		        printf("Encrypted message: %s\n", message);
                break;

            case 2:
                printf("Decryption selected.\n");
		        printf("Enter message: ");
		        scanf(" %[^\n]", message);
		        printf("Enter shift:");
		        scanf("%d",&sh);
		        printf("You entered: %s\n", message);
		        for(i = 0; message[i] != '\0'; i++){
			        if(message[i] >= 'a' && message[i] <= 'z'){
				        message[i] = (message[i] - 'a' - sh + 26) % 26 + 'a';
			        } else if(message[i] >= 'A' && message[i] <= 'Z'){
				        message[i] = (message[i] - 'A' - sh + 26) % 26 + 'A';
			        }
		        }
		        printf("Decrypted message: %s\n", message);
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
                break;
        }
	} while(choice!=3);

    return 0;
}
