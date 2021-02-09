#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

void clrscr()
{
    system("@cls||clear");
}

int main()
{
    int pilihan, i;
    char temp;
    char *kata;

    do{
        clrscr();
        printf("1. Uppercase\n");
        printf("2. Lowercase\n");
        printf("3. Switching\n");
        printf("4. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch(pilihan)
        {
            case 1:
                    printf("\nMasukkan kata: ");
                    scanf("%c", &temp);
                    scanf("%[^\n]", kata);

                    for(i=0;kata[i]!='\0';i++)
                    {
                        if(kata[i]>='a' && kata[i]<='z')
                        {
                            kata[i]=kata[i]-32;
                        }
                    }

                    printf("%s\n\n", kata);
                    printf("Klik tombol apapun untuk kembali.");
                    getch();
                    break;
            case 2:
                    printf("\nMasukkan kata: ");
                    scanf("%c", &temp);
                    scanf("%[^\n]", kata);

                    for(i=0;kata[i]!='\0';i++)
                    {
                        if(kata[i]>='A' && kata[i]<='Z')
                        {
                            kata[i]=kata[i]+32;
                        }
                    }

                    printf("%s\n\n", kata);
                    printf("Klik tombol apapun untuk kembali.");
                    getch();
                    break;
            case 3:
                    printf("\nMasukkan kata: ");
                    scanf("%c", &temp);
                    scanf("%[^\n]", kata);

                    for(i=0;kata[i]!='\0';i++)
                    {
                      if(kata[i]>='A' && kata[i]<='Z')
                      {
                          kata[i]=kata[i]+32;
                      }
                        else if(kata[i]>='a' && kata[i]<='z')
                        {
                            kata[i]=kata[i]-32;
                        }
                    }

                    printf("%s\n\n", kata);
                    printf("Klik tombol apapun untuk kembali.");
                    getch();
                    break;
        }
    }while(pilihan!=4);

    printf("\nKeluar berhasil.\n");

    return 0;
}
