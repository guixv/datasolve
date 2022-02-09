#include <stdio.h>
#include <cstring>
#include <iostream>






int main() {
    //Read file
    const char *filename1 = "D://data/phone.txt";
    FILE *pFile1;
    pFile1 = fopen(filename1, "r");
    if (NULL == pFile1) {
        printf("Failed to open file to read_phoneNumber!");
        return 1;
    }

    const char *filename2 = "D://data/ID.txt";
    FILE *pFile2;
    pFile2 = fopen(filename2, "r");
    if (NULL == pFile2) {
        printf("Failed to open file to read_ID!");
        return 1;
    }

    const char *filename3= "D://data/wechat.txt";
    FILE *pFile3;
    pFile3 = fopen(filename3, "r");
    if (NULL == pFile3) {
        printf("Failed to open file to read_wechat!");
        return 1;
    }

    const char *filename4= "D://data/qq.txt";
    FILE *pFile4;
    pFile4 = fopen(filename4, "r");
    if (NULL == pFile4) {
        printf("Failed to open file to read_qq!");
        return 1;
    }

    const char *filename5= "D://data/address.txt";
    FILE *pFile5;
    pFile5 = fopen(filename5, "r");
    if (NULL == pFile5) {
        printf("Failed to open file to read_address!");
        return 1;
    }

    const char *filename6= "D://data/mail.txt";
    FILE *pFile6;
    pFile6 = fopen(filename6, "r");
    if (NULL == pFile6) {
        printf("Failed to open file to read_address!");
        return 1;
    }

    const char *filename7= "D://data/name.txt";
    FILE *pFile7;
    pFile7 = fopen(filename7, "r");
    if (NULL == pFile7) {
        printf("Failed to open file to read_name!");
        return 1;
    }
    
    //Write file
    const char *filename0 = "D://data/output.txt";
    FILE *pFileOut = fopen(filename0, "w");
    if (NULL == pFileOut) {
        printf("Failed to open file to write!");
        return 1;
    }


    char c1,c2;
    freopen("D://data/address_temp.txt","r",stdin);
    c1=getchar();
    c2=getchar();


    //data item
    char phone[15];
    char phone_out[15];
    char phone_cache[2001][15];
    char ID[15];
    char ID_out[15];
    char ID_cache[2001][15];
    char wechat[15];
    char wechat_out[15];
    char wechat_cache[2001][15];
    char qq[15];
    char qq_out[15];
    char qq_cache[2001][15];
    char address[40];
    char address_out[40];
    char address_cache[2001][40];
    char mail[20];
    char mail_out[20];
    char mail_cache[2001][20];
    char name[15];
    char name_out[15];
    char name_cache[2001][15];
    char headName[4]="*. ";

    //line number
    int lineNum = 0;
    char str[80];


    while (!feof(pFile1)&&!feof(pFile2)&&!feof(pFile3)&&!feof(pFile4)&&!feof(pFile5)&&!feof(pFile6)) {
        fgets(str, sizeof(str), pFile7);


        sscanf(str, "%s", name);
        if (0 == lineNum) {
            fprintf(pFileOut, "    %s    \t", name);
        } else {
            for (int i = 0; i < 4; i++)
                name_out[i] = name[i];
            for (int j = 4; j < 6; j++) {
                name_out[j] = headName[0];
            }
            for (int k = 6; k < 12; ++k) {
                name_out[k] = headName[2];
            }
            strcpy(name_cache[lineNum],name_out);

            fprintf(pFileOut, "%s  \t", name_out);
        }

        fgets(str, sizeof(str), pFile7);


        sscanf(str, "%s", phone);
        if (0 == lineNum) {
            fprintf(pFileOut, "    %s    \t", phone);
        } else {
            for (int i = 0; i < 3; i++)
                phone_out[i] = phone[i];
            for (int j = 3; j < 7; j++) {
                phone_out[j] = headName[0];
            }
            for (int k = 7; k < 12; ++k) {
                phone_out[k] = phone[k];
            }
            strcpy(phone_cache[lineNum],phone_out);

            fprintf(pFileOut, "%s  \t", phone_out);
        }
        fgets(str, sizeof(str), pFile2);

        sscanf(str, "%s",  ID);
        if (0 == lineNum) {
            fprintf(pFileOut, "         %s          \t", ID);
        } else {
            for (int i = 0; i < 4; i++)
                ID_out[i] = ID[i];
            for (int j = 4; j < 12; j++) {
                ID_out[j] = headName[0];
            }
            for (int k = 12; k < 19; ++k) {
                ID_out[k] = ID[k];
            }
            strcpy(ID_cache[lineNum],ID_out);

            fprintf(pFileOut, "%s  \t", ID_out);
        }
        fgets(str, sizeof(str), pFile3);

        sscanf(str, "%s", wechat);
        if (0 == lineNum) {
            fprintf(pFileOut, " %s  \t", wechat);
        } else {
            for (int i = 0; i < 2; i++)
                wechat_out[i] = wechat[i];
            for (int j = 2; j < 4; j++) {
                wechat_out[j] = headName[0];
            }
            for (int k = 4; k < 7; ++k) {
                wechat_out[k] = wechat[k];
            }
            strcpy(wechat_cache[lineNum],wechat_out);

            fprintf(pFileOut, "%s  \t", wechat_out);
        }

        fgets(str, sizeof(str), pFile4);

        sscanf(str, "%s", qq);
        if (0 == lineNum) {
            fprintf(pFileOut, "     %s    \t", qq);
        } else {
            for (int i = 0; i < 3; i++)
                qq_out[i] = qq[i];
            for (int j = 3; j < 7; j++) {
                qq_out[j] = headName[0];
            }
            for (int k = 7; k < 11; ++k) {
                qq_out[k] = qq[k];
            }
            strcpy(qq_cache[lineNum],qq_out);

            fprintf(pFileOut, "%s  \t", qq_out);
        }


        fgets(str, sizeof(str), pFile6);

        sscanf(str, "%s", mail);
        if (0 == lineNum) {
            fprintf(pFileOut, "                  %s                 \t", mail);
        } else {
            for (int i = 0; i < 3; i++)
                mail_out[i] = mail[i];
            for (int j = 3; j < 7; j++) {
                mail_out[j] = headName[0];
            }
            for (int k = 7; k < 11; ++k) {
                mail_out[k] = mail[k];
            }
            int j = 11;
            int n=j;
                do{
                    mail_out[j] = headName[0];
                    j++;
                    n=j;
                }while (mail[j]!=headName[1]&&j<19);
            for (int k = n; k < 19; ++k) {
                mail_out[k] = mail[k];
            }
            strcpy(mail_cache[lineNum],mail_out);

            fprintf(pFileOut, "  %s  \t", mail_out);
        }


        fgets(str, sizeof(str), pFile5);

        sscanf(str, "%s", address);
        if (0 == lineNum) {
            fprintf(pFileOut, "         %s                    \n", address);
        } else {
            int n=40;
            for (int i = 0; i <23; i++) {
                if (address[i] ==c1 && address[i + 1] == c2){
                    address_out[i]=headName[0];
                    address_out[i+1]=headName[0];
                    n=i;
                    break;
                }
                else
                address_out[i] = address[i];
            }
            for (int i = n; i <23; i++)
                address_out[i] = headName[2];
            strcpy(address_cache[lineNum],address_out);

            fprintf(pFileOut, "  %s  \n", address_out);
        }



        
        lineNum++;
    }



    fclose(pFile1);
    fclose(pFile2);
    fclose(pFile3);
    fclose(pFile4);
    fclose(pFile5);
    fclose(pFile6);
    fclose(pFile7);
        fclose(pFileOut);


    return 0;
}