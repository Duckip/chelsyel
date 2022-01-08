#include<stdio.h>
#define max 5

/* Nama : Chelsy Elisabet Gultom
   NIM  : 2008561060
   Kelas: E
*/

int main()
{   char ulang;
    int head=0,queue[max],tail=0,i,count=max;
    do{
    int x;
    menu:
    system("cls");
    printf ("\n PROGRAM DATA ANTRIAN CS");
    printf ("\n Menu: \n 1. Tambah \n 2. Panggil \n 3. Clear \n 4. Lihat \n 5. Keluar");
    printf ("\n Ketik pilihan Anda: ");
    scanf  ("%d", &x);
    switch (x)
    {
        case 1:
            if(tail==count)
                printf("\n Antrian penuh");
            else
            {
                printf("\n Input no aduan: ");
                scanf("%d",&queue[tail]);
                tail++;
            }
            break;
        case 2:
            if(head == - 1 || head > tail)
            {
                printf("\n Tidak ada antrian");
            }
            else
            {
                printf("\n Antrian dengan nomor pengaduan %d, silahkan masuk",queue[head++]);
            }count++;
            break;

        case 3:
            printf ("\n Clear:");
            if(head==tail) printf ("\n Tidak ada antrian");
            else {head=tail=0;
                 printf ("\n Seluruh antrian telah dihapus\n");}
        break;
        case 4:
            printf("\n Antrian saat ini:\n");
            if(head==tail)
                printf("\n Tidak ada antrian");
            else
            {
                for(i=head; i<tail; i++)
                {
                    printf("\t%d",queue[i]);
                    printf("\n");
                }}
                break;
            case 5:
                exit(0);
            default:
                fflush (stdin);
                goto menu;
                break;
    }
        fflush (stdin);
        printf("\n\n Apakah anda ingin mengulang? Ketik [y] jika iya: ");
        scanf("%c", &ulang);
        }while(ulang=='y');
    return 0;
}
