#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*****************************EFECTS***************************************/
#define Nehnum         "\033[0m"
#define Negrito        "\033[1m"
#define HALFBRIGHT     "\033[2m"
#define Sublinhado     "\033[4m"
#define Piscando       "\033[5m"
#define REVERSE        "\033[7m"

/*****************************COLORS***************************************/
#define C_Preto      "\033[30m"
#define C_Vermelho   "\033[31m"
#define C_Verde      "\033[32m"
#define C_Amarelo    "\033[33m"
#define C_Azul       "\033[34m"
#define C_Magenta    "\033[35m"
#define C_Ciano      "\033[36m"
#define C_Cinza      "\033[37m"

/***************************BACKGROUNDS************************************/
#define BG_Preto     "\033[40m"
#define BG_Vermelho  "\033[41m"
#define BG_Verde     "\033[42m"
#define BG_Amarelo   "\033[43m"
#define BG_blue      "\033[44m"
#define BG_magenta   "\033[45m"
#define BG_ciano     "\033[46m"
#define BG_cinza     "\033[47m"

int dado(int ale){
   

    srand(time(NULL));
    
   
	boxd(50, 17, 65, 23);
    
      

        if (ale == 1)
        {
        gotoxy(53,18); // 1 linha
        printf("0");
        gotoxy(57,18); // 1 linha
        printf("0");
        gotoxy(61,18); // 1 linha
        printf("0");
        gotoxy(53,20); // 2 linha
        printf("0");
        gotoxy(57,20); // 2 linha
        printf("1");
        gotoxy(61,20); // 2 linha
        printf("0");
        gotoxy(53,22); // 3 linha
        printf("0");
        gotoxy(57,22); // 3 linha
        printf("0");
        gotoxy(61,22); // 3 linha
        printf("0");

        }

         if (ale == 2)
        {
        gotoxy(53,18); // 1 linha
        printf("2");
        gotoxy(57,18); // 1 linha
        printf("0");
        gotoxy(61,18); // 1 linha
        printf("0");
        gotoxy(53,20); // 2 linha
        printf("0");
        gotoxy(57,20); // 2 linha
        printf("0");
        gotoxy(61,20); // 2 linha
        printf("0");
        gotoxy(53,22); // 3 linha
        printf("0");
        gotoxy(57,22); // 3 linha
        printf("0");
        gotoxy(61,22); // 3 linha
        printf("2");

        }
        
             if (ale == 3)
        {
        gotoxy(53,18); // 1 linha
        printf("3");
        gotoxy(57,18); // 1 linha
        printf("0");
        gotoxy(61,18); // 1 linha
        printf("0");
        gotoxy(53,20); // 2 linha
        printf("0");
        gotoxy(57,20); // 2 linha
        printf("3");
        gotoxy(61,20); // 2 linha
        printf("0");
        gotoxy(53,22); // 3 linha
        printf("0");
        gotoxy(57,22); // 3 linha
        printf("0");
        gotoxy(61,22); // 3 linha
        printf("3");

        }

        
             if (ale == 4)
        {
        gotoxy(53,18); // 1 linha
        printf("4");
        gotoxy(57,18); // 1 linha
        printf("0");
        gotoxy(61,18); // 1 linha
        printf("4");
        gotoxy(53,20); // 2 linha
        printf("0");
        gotoxy(57,20); // 2 linha
        printf("0");
        gotoxy(61,20); // 2 linha
        printf("0");
        gotoxy(53,22); // 3 linha
        printf("4");
        gotoxy(57,22); // 3 linha
        printf("0");
        gotoxy(61,22); // 3 linha
        printf("4");

        }

               if (ale == 5)
        {
        gotoxy(53,18); // 1 linha
        printf("5");
        gotoxy(57,18); // 1 linha
        printf("0");
        gotoxy(61,18); // 1 linha
        printf("5");
        gotoxy(53,20); // 2 linha
        printf("0");
        gotoxy(57,20); // 2 linha
        printf("5");
        gotoxy(61,20); // 2 linha
        printf("0");
        gotoxy(53,22); // 3 linha
        printf("5");
        gotoxy(57,22); // 3 linha
        printf("0");
        gotoxy(61,22); // 3 linha
        printf("5");

        }

              if (ale == 6)
        {
        gotoxy(53,18); // 1 linha
        printf("6");
        gotoxy(57,18); // 1 linha
        printf("6");
        gotoxy(61,18); // 1 linha
        printf("6");
        gotoxy(53,20); // 2 linha
        printf("0");
        gotoxy(57,20); // 2 linha
        printf("0");
        gotoxy(61,20); // 2 linha
        printf("0");
        gotoxy(53,22); // 3 linha
        printf("6");
        gotoxy(57,22); // 3 linha
        printf("6");
        gotoxy(61,22); // 3 linha
        printf("6");

        }

return ale;

}

int cores()
{
    system("cls");
	const char* string = "texto escrito em verde!";
	printf("%s%s%s%s%s", Negrito, C_Ciano, BG_Preto, string, Sublinhado);
	printf("\n%s%s%s%s%s", Negrito, C_Ciano, BG_Preto, string, Sublinhado);
	printf("\n%s%s%s%s%s", Negrito, C_Ciano, BG_Preto, string, Sublinhado);
	printf("\n%s%s%s%s%s", HALFBRIGHT, C_Ciano, BG_Preto, string, Sublinhado);
	printf("\n%s%s%s%s%s", REVERSE, C_Ciano, BG_Preto, string, Sublinhado);
	printf("\n%s%s%s%s%s", Negrito, C_Ciano, BG_Preto, string, Sublinhado);
	system("pause");

	return 0;
}

void gotoxy( int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


int fim = 0;

typedef struct 
{
   char nome[40];
   int RU;
   int cor;
   int dinheiro;
   int existent;
   int posicao;
 
   
} jogador;


void box(int x1, int y1, int x2, int y2) {
    int i;
    gotoxy(x1,y1);
    putchar(201);
    for ( i = x1+1; i < x2; i++)
    {
        gotoxy(i,y1);
        putchar(205);
    }
    putchar(187);
    for ( i = y1+1; i < y2; i++)
    {
        gotoxy(x2,i);
        putchar(186);
    }
    gotoxy(x2,y2);
    putchar(188);
    for ( i = x1+1; i < x2; i++)
    {
        gotoxy(i,y2);
        putchar(205);
    }
    gotoxy(x1,y2);
    putchar(200);
     for ( i = y1+1; i < y2; i++)
    {
        gotoxy(x1,i);
        putchar(186);
    }


    
        
}


void boxd(int x1, int y1, int x2, int y2) {
	/*Função para desenhar uma caixa com borda dupla*/
	int i;

	if (x2 < x1 || y2 < y1)
		printf("Coordenadas incorretas!");

	gotoxy(x1, y1);		//vai para a prosição superior esquerda inicial
	putchar(201);						//Imprime o cotovelo superior esquerdo
	for (i = x1 + 1; i < x2; i++)		//Imprime a linha horizontas superior
		putchar(205);
	putchar(187);						//Imprime o cotevelo superior direito
	for (i = y1 + 1; i < y2; i++) {		//Imprime a linha vetical direita
		gotoxy(x2, i);
		putchar(186);
	}
	gotoxy(x2, y2);
	putchar(188);						//Imprime o cotovelo inferior direito
	gotoxy(x1 + 1, y2);
	for (i = x1 + 1; i < x2; i++)		//Imprime a linha horizontas superior
		putchar(205);
	gotoxy(x1, y2);
	putchar(200);						//Imprime o cotovelo inferior esquerdo
	gotoxy(x1, y1 + 1);
	for (i = y1 + 1; i < y2; i++) {		//Imprime a linha vetical direita
		gotoxy(x1, i);
		putchar(186);
	}
	gotoxy(x2 + 1, y2);
}


void tabuleiro() {
       //  boxd(1,1,118,65);
        // boxd(25,6,80,20);
         
        int y2 = 6;
	box(1, 1, 10, y2);
	box(10, 1, 20, y2);
	box(20, 1, 30, y2);
	box(30, 1, 40, y2);
	box(40, 1, 50, y2);
	box(50, 1, 60, y2);
	box(60, 1, 70, y2);
	box(70, 1, 80, y2);
	box(80, 1, 90, y2);
	box(90, 1, 100, y2);
	box(100, 1, 110, y2);


    
	 box(1, y2, 10, 2 * y2);
	 box(100, y2, 110, 2 * y2);

	 box(1, y2, 10, 3 * y2);
	 box(100, y2, 110, 3 * y2);

	 box(1, y2, 10, 4 * y2);
	 box(100, y2, 110, 4 * y2);

	box(1, y2, 10, 5 * y2);
	 box(100, y2, 110, 5 * y2);

	box(1, y2, 10, 6 * y2);
	 box(100, y2, 110, 6 * y2);

	box(1, y2, 10, 7 * y2);
	 box(100, y2, 110, 7 * y2);

	box(1, y2, 10, 8 * y2);
	 box(100, y2, 110, 8 * y2);

	box(1, y2, 10, 9 * y2);
	 box(100, y2, 110, 9 * y2);

	box(1, y2, 10, 10 * y2);
	 box(100, y2, 110, 10 * y2);

     box(1, y2, 10, 11 * y2);
	 box(100, y2, 110, 11 * y2);

     box(1, 10 * y2, 10, 11*y2);
	box(10, 10 * y2, 20, 11*y2);
	box(20, 10 * y2, 30, 11*y2);
	box(30, 10 * y2, 40, 11*y2);
	box(40, 10 * y2, 50, 11*y2);
	box(50, 10 * y2, 60, 11*y2);
	box(60, 10 * y2, 70, 11*y2);
	box(70, 10 * y2, 80, 11*y2);
	box(80, 10 * y2, 90, 11*y2);
	box(90, 10 * y2, 100, 11*y2);
	box(100, 10 * y2, 110, 11*y2);

	
	boxd(1, 1, 110, 11 * y2);
	 gotoxy(91, 65);
// LINHA INFERIOR
    gotoxy(101, 10 * y2 + 1);
	printf("\033[1m\033[33mPonto de");
	gotoxy(101, 10 * y2 + 2);
	printf("Partida");
	gotoxy(101, 10 * y2 + 3);
	printf("<<----\033[0m");
	 gotoxy(101, 65);

    gotoxy(92, 10 * y2 + 1);
	printf("\033[1m\033[35m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(92, 10 * y2 + 3);
	printf("\033[1mLeblon");

	gotoxy(92, 10 * y2 + 5);
	printf("\033[1mBI$ 100");

    gotoxy(82, 10 * y2 + 1);
	printf("\033[1mSorte");
    gotoxy(82, 10 * y2 + 3);
	printf("\033[1mou");
    gotoxy(82, 10 * y2 + 5);
	printf("\033[1mReves");
	//-------
	gotoxy(72, 10 * y2 + 1);
	printf("\033[1m\033[35m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(72, 10 * y2 + 2);
	printf("\033[1mAv Prst");
    gotoxy(72, 10 * y2 + 3);
	printf("\033[1mVargas");
    gotoxy(72, 10 * y2 + 5);
	printf("\033[1mBI$ 60");

    gotoxy(62, 10 * y2 + 1);
	printf("\033[1m\033[35m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(62, 10 * y2 + 2);
	printf("\033[1mAv S. de");
    gotoxy(62, 10 * y2 + 3);
	printf("\033[1mcabana");
    gotoxy(62, 10 * y2 + 5);
	printf("\033[1mBI$ 60");

    gotoxy(52, 10 * y2 + 1);
	printf("\033[1mCompania");
    gotoxy(52, 10 * y2 + 3);
	printf("\033[1mTrem");
    gotoxy(52, 10 * y2 + 5);
	printf("\033[1mBI$ 200");


    gotoxy(42, 10 * y2 + 1);
	printf("\033[1m\033[36m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(42, 10 * y2 + 2);
	printf("\033[1mAv Brig");
    gotoxy(42, 10 * y2 + 3);
	printf("\033[1mFaria");
    gotoxy(42, 10 * y2 + 5);
	printf("\033[1mBI$ 60");

    gotoxy(32, 10 * y2 + 1);
	printf("\033[1mCompania");
    gotoxy(32, 10 * y2 + 3);
	printf("\033[1mViacao");
    gotoxy(32, 10 * y2 + 5);
	printf("\033[1mBI$ 200");

    gotoxy(22, 10 * y2 + 1);
	printf("\033[1m\033[36m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(22, 10 * y2 + 2);
	printf("\033[1mAv");
    gotoxy(22, 10 * y2 + 3);
	printf("\033[1mRebouc");
    gotoxy(22, 10 * y2 + 5);
	printf("\033[1mBI$ 220");

    gotoxy(12, 10 * y2 + 1);
	printf("\033[1m\033[36m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(12, 10 * y2 + 2);
	printf("\033[1mAv 9 de");
    gotoxy(12, 10 * y2 + 3);
	printf("\033[1mJulho");
    gotoxy(12, 10 * y2 + 5);
	printf("\033[1mBI$ 220");

    gotoxy(2, 10 * y2 + 1);
	printf("\033[1m prisao");
     gotoxy(2, 10 * y2 + 3);
	printf("\033[1m--------");
    gotoxy(4, 10 * y2 + 4);
	printf("\033[1m visi-");
    gotoxy(2, 10 * y2 + 5);
	printf("\033[1mtante");

// LINHA SUPERIOR 

    gotoxy(2, 3);
	printf("\033[1mParada");
    gotoxy(2, 5);
	printf("\033[1mLivre");

    gotoxy(12, 2);
	printf("\033[1m\033[31m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(12, 3);
	printf("\033[1mFlamengo");
    gotoxy(12, 5);
	printf("\033[1mBI$ 120");

    gotoxy(22, 2);
	printf("\033[1mSorte");
        gotoxy(22, 3);
	printf("\033[1mou");
        gotoxy(22, 5);
	printf("\033[1mReves");

    gotoxy(32, 2);
	printf("\033[1m\033[31m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

     gotoxy(32, 3);
	printf("\033[1mBotafoga");
    gotoxy(32, 5);
	printf("\033[1mBI$ 100");

    gotoxy(42, 2);
	printf("\033[1mImposto");
    gotoxy(42, 4);
	printf("\033[1mPague");
    gotoxy(42, 5);
	printf("\033[1mBI$ 200");

    gotoxy(52, 2);
	printf("\033[1mCompania");
    gotoxy(52, 4);
	printf("\033[1mBarco");
    gotoxy(52, 5);
	printf("\033[1mBI$ 150");

    gotoxy(62, 2);
	printf("\033[1m\033[33m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(62, 3);
	printf("\033[1mAV");
    gotoxy(62, 4);
	printf("\033[1mBrasil");
    gotoxy(62, 5);
	printf("\033[1mBI$ 160");

     gotoxy(72, 2);
	printf("\033[1mSorte");
        gotoxy(72, 3);
	printf("\033[1mou");
        gotoxy(72, 5);
	printf("\033[1mReves");

    gotoxy(82, 2);
	printf("\033[1m\033[33m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(82, 3);
	printf("\033[1mAV");
    gotoxy(82, 4);
	printf("\033[1mPaulista");
    gotoxy(82, 5);
	printf("\033[1mBI$ 140");

    
    gotoxy(92, 2);
	printf("\033[1m\033[33m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    
    gotoxy(92, 3);
	printf("\033[1mJardim");
    gotoxy(92, 4);
	printf("\033[1mEuropa");
    gotoxy(92, 5);
	printf("\033[1mBI$ 140");

    
     gotoxy(102, 2);
	printf("\033[1mVa ");
        gotoxy(102, 3);
	printf("\033[1mPara");
        gotoxy(102, 4);
	printf("\033[1mPrisao");

// Coluna 2
// COPACAPANA
     gotoxy(102, y2+1);
	printf("\033[1m\033[32m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(102, y2+3);
	printf("\033[1mCopaca ");
    gotoxy(102, y2+4);
	printf("\033[1mpana");
    gotoxy(102, y2+5);
	printf("\033[1mBI$ 260");

// COMPANIAS
     gotoxy(102, 2*y2+2);
	printf("\033[1mCompania");
    gotoxy(102, 2*y2+4);
	printf("\033[1mAviao");
    gotoxy(102, 2*y2+5);
	printf("\033[1mBI$ 200");


// AVENIDA VIEIRA SOUTO

    gotoxy(102, 3*y2+1);
	printf("\033[1m\033[32m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(102, 3*y2+3);
	printf("\033[1mAv viera");
    gotoxy(102, 3*y2+4);
	printf("\033[1mSouto");
    gotoxy(102, 3*y2+5);
	printf("\033[1mBI$ 320");

    gotoxy(102, 4*y2+1);
	printf("\033[1m\033[32m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");
// AVENIDA ATLANTICA
    gotoxy(102, 4*y2+3);
	printf("\033[1mAv Atlan");
    gotoxy(102, 4*y2+4);
	printf("\033[1mtica");
    gotoxy(102, 4*y2+5);
	printf("\033[1mBI$ 300");

    gotoxy(102, 5*y2+1);
	printf("\033[1mCompania");
    gotoxy(102, 5*y2+3);
	printf("\033[1mTaxi");
     gotoxy(102, 5*y2+4);
	printf("\033[1mAereo");
    gotoxy(102, 5*y2+5);
	printf("\033[1mBI$ 200");

// Ipanema
      gotoxy(102, 6*y2+1);
	printf("\033[1m\033[32m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

     gotoxy(102, 6*y2+3);
	printf("\033[1mIpanema");
    gotoxy(102, 6*y2+5);
	printf("\033[1mBI$ 300");

// Sorte ou revez
    gotoxy(102, 7*y2+1);
	printf("\033[1mSorte");
    gotoxy(102, 7*y2+3);
	printf("\033[1mOu");
     gotoxy(102, 7*y2+5);
	printf("\033[1mRevez");


    // Jardin Paulista

    gotoxy(102, 8*y2+1);
	printf("\033[1m\033[34m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    
     gotoxy(102, 8*y2+2);
	printf("\033[1mJardim");
    gotoxy(102, 8*y2+3);
	printf("\033[1mPaulista");
     gotoxy(102, 8*y2+5);
	printf("\033[1mBI$ 280");
    // AVENIDA BOOKLIN
    
     gotoxy(102, 9*y2+1);
	printf("\033[1m\033[34m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(102, 9*y2+3);
	printf("\033[1mBrooklin");
     gotoxy(102, 9*y2+5);
	printf("\033[1mBI$ 260");
// COLUNA 1 

// Avenida morumbi
 gotoxy(2, y2+1);
	printf("\033[1m\033[30m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(2, y2+3);
	printf("\033[1mMorumbi");
    gotoxy(102, y2+5);
	printf("\033[1mBI$ 400");

// Lucro
     gotoxy(2, 2*y2+2);
	printf("\033[1mLucro");
    gotoxy(2, 2*y2+4);
	printf("\033[1mGanhe");
    gotoxy(2, 2*y2+5);
	printf("\033[1mBI$ 200");


// Interlagos

    gotoxy(2, 3*y2+1);
	printf("\033[1m\033[30m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(2, 3*y2+3);
	printf("\033[1mInter");
    gotoxy(2, 3*y2+4);
	printf("\033[1mLagos");
    gotoxy(2, 3*y2+5);
	printf("\033[1mBI$ 380");
    // Sorte ou revez
    gotoxy(2, 4*y2+1);
	printf("\033[1mSorte");
    gotoxy(2, 4*y2+3);
	printf("\033[1mOu");
    gotoxy(102, 4*y2+5);
	printf("\033[1mRevez");

    // Compania
    gotoxy(2, 5*y2+1);
	printf("\033[1mCompania");
    gotoxy(2, 5*y2+3);
	printf("\033[1mTaxi");
     gotoxy(2, 5*y2+4);
	printf("\033[1mnormal");
    gotoxy(2, 5*y2+5);
	printf("\033[1mBI$ 200");

// Avenida Pacaembu
      gotoxy(2, 6*y2+1);
	printf("\033[1m\033[31m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(2, 6*y2+3);
	printf("\033[1mAv");
     gotoxy(2, 6*y2+4);
	printf("\033[1mPacaembu");
    gotoxy(2, 6*y2+5);
	printf("\033[1mBI$ 180");

    // Rua augusta

    gotoxy(2, 7*y2+1);
	printf("\033[1m\033[31m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    
     gotoxy(2, 7*y2+2);
	printf("\033[1mRua");
    gotoxy(2, 7*y2+3);
	printf("\033[1mAgusta");
     gotoxy(2, 7*y2+5);
	printf("\033[1mBI$ 180");

// sorte ou revez
    gotoxy(2, 8*y2+1);
	printf("\033[1mSorte");
    gotoxy(2, 8*y2+3);
	printf("\033[1mOu");
     gotoxy(102, 8*y2+5);
	printf("\033[1mRevez");

    // Avenida Europa
    
    gotoxy(2, 9*y2+1);
	printf("\033[1m\033[31m");
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	putchar(219);
	printf("\033[37m");

    gotoxy(2, 9*y2+3);
	printf("\033[1mAv");
     gotoxy(2, 9*y2+4);
	printf("\033[1mEuropa");
     gotoxy(2, 9*y2+5);
	printf("\033[1mBI$ 200");

        
}
int menuSelecao(jogador *jogadores, int quant_j){
    
    int jog, numero_jogador;
    char c;

     

        while ( quant_j > 4 || quant_j == 1)  
        {

        
        quant_j = 0;
        
        
        system("cls");
        box(30,2,80,15);
        
        gotoxy(35, 7);
        printf("  O NUMERO MAXIMO \n \t\t\t\t     DE JOGADORES EH %s 4 ");
        gotoxy(35, 10);

        printf("Selecionar quantia de jogadores digite :");
        gotoxy(35,11);
        scanf("%d", &quant_j);
        c = getchar();

            
        }
        system("cls");
        box(30,2,80,15);

        

        
        gotoxy(65, 3);
        system("cls");
        gotoxy(60, 3);

        printf(" %d jogadores ", quant_j);
        gotoxy(31, 3);
        printf("Menu de configuracao de jogador - 1");
        gotoxy(35, 10);
        

for (int i = 0; i < quant_j; i++)
{   
                system("cls");
                box(30,2,80,15);
                gotoxy(31,4);

            

                system("cls");
                box(30,2,80,15);
                gotoxy(31,3);
                printf(" --- Digite as informacoes do %d jogador ---", i);
                gotoxy(31,4);

                printf("Digite seu nome : ");
                fgets(jogadores[i].nome, 40, stdin);
                gotoxy(31,5);
                printf("Seu nome eh: %s  ", jogadores[i].nome);
                gotoxy(31,6);
                printf("Digite seu RU jogador ");
                scanf("%s", &jogadores[i].RU);
                c = getchar();
                gotoxy(31,7);
                printf("Seu RU eh: %d ", jogadores[i].RU);
                jogadores[i].existent = 1;
                jogadores[i].posicao = 0;
                jogadores[i].dinheiro = 2000;


               
                


}
            system("cls");
            box(30,2,80,15);
            gotoxy(31,3);
            printf("JOGADORES CADASTRADOS");
            return quant_j;

        }

        

 
        

        
    

    
int main ()
{
    system("cls");

  
    int quant_j;
    char c;
    int menu;
    jogador jogadores[4];
    for (int i = 0; i < 4; i++)
    {
        jogadores[i].existent = 0;
    }

       

while (1)
{

    system("cls");
    
    box(30,2,75,20);
    
    gotoxy(38, 6);
    printf("configurar digite 1 ");
    gotoxy(38, 8);
    printf("Star game ");
    gotoxy(38, 10);
    printf("Sair digite 3 ");
    gotoxy(39,11);
    scanf("%d", &menu);
    c = getchar();
    

	
    switch (menu)
    {
    case 1:
    
        system("cls");
        box(30,2,80,15);
        gotoxy(35, 5);
        printf("Selecionar quantia de jogadores digite :");
        gotoxy(35, 6);
        scanf("%d", &quant_j);
        c = getchar();
    
    
        menuSelecao(&jogadores, quant_j);
        
        break;
    
    case 2:
    if (jogadores[0].existent == 0)
    {

        gotoxy(38, 2);
        printf("faca o cadastro dos jogadores!!!!");

        c = getchar();

        continue;

    }
    

    system("cls");
   
    tabuleiro();

    int ale;
    int fim;

    fim = quant_j;

   

    while (fim != 0)
    {
        int k,j;
        int temp;
         int i;
        int y2 =6;
        
        
        for ( k = 0; k < quant_j; k++)
        {
            temp = jogadores[k].dinheiro;
            if (temp == 0)
            {
                quant_j = quant_j -1;
            }
            if (quant_j == 0)
            {
                fim = 0;
            }
            
            
        }
        
        // for (j = 0; j < quant_j; j++)
        // {
    
        //     if (j == 1)
        //     {
        //     gotoxy(11, y2+2);
	    //     printf("\033[1mCor cinza");
        //     gotoxy(11, y2+2);
        //     }
        //      if (j == 2)
        //     {
        //     gotoxy(11, y2+2);
	    //     printf("\033[1mCor Azul");
        //     gotoxy(11, y2+2);
        //     }
        //      if (j == 3)
        //     {
        //     gotoxy(11, y2+2);
	    //     printf("\033[1mCor Vermelho");
        //     gotoxy(11, y2+2);
        //     }
        //      if (j == 4)
        //     {
        //     gotoxy(11, y2+2);
	    //     printf("\033[1mCor verde");
        //     gotoxy(11, y2+2);
        //     }
            
           
          
	        
        // }
        
        
            
            
        
          

       
        for (i = 0; i < quant_j; i++)
        {
              
              if (i == 0)
            {
            gotoxy(11, y2+1);
	        printf("\033[1mJogador 1 ");
            gotoxy(11, y2+2);
	        printf("\033[1mCor cinza   ");
            gotoxy(11, y2+3);
	        printf("\033[1mDinheiro: %d    ", jogadores[0].dinheiro);

            }
             if (i == 1)
            {
              gotoxy(11, y2+1);
	        printf("\033[1mJogador 2  ");
            gotoxy(11, y2+2);
	        printf("\033[1mCor azul   ");
            gotoxy(11, y2+3);
	        printf("\033[1mDinheiro: %d    ", jogadores[1].dinheiro);
            }
             if (i == 2)
            {
            gotoxy(11, y2+1);
	        printf("\033[1mJogador 3   ");
            gotoxy(11, y2+2);
	        printf("\033[1mCor verde   ");
            gotoxy(11, y2+3);
	        printf("\033[1mDinheiro: %d    ", jogadores[2].dinheiro);
            }
             if (i == 3)
            {
            gotoxy(11, y2+1);
	        printf("\033[1mJogador 4  ");
            gotoxy(11, y2+2);
	        printf("\033[1mCor amarelo   ");
            gotoxy(11, y2+3);
	        printf("\033[1mDinheiro: %d    ", jogadores[3].dinheiro);
            }


           
            
        gotoxy(50,15);
        printf("Rodar o dado jogador %d", i+1);
        c = getchar();
        dado(ale  = (rand()%6+1));


         if (jogadores[i].posicao == 40)
            {
                jogadores[i].posicao = 0;
            }
        if( jogadores[i].posicao >= 40){
                jogadores[i].posicao = jogadores[i].posicao - 40;
            }
        if(jogadores[i].posicao < 40){

            jogadores[i].posicao += ale;


            }
            gotoxy(92, 10*y2-1);
            printf("\033[1m\033[30m");
            putchar(219);
            putchar(219);
            printf("\033[37m");
            gotoxy(93, 10*y2-1);
            printf("\033[1m\033[34m");
            putchar(219);
            putchar(219);
            printf("\033[37m");
             gotoxy(94, 10*y2-1);
            printf("\033[1m\033[32m");
            putchar(219);
            putchar(219);
            printf("\033[37m");
            gotoxy(95, 10*y2-1);
            printf("\033[1m\033[33m");
            putchar(219);
            putchar(219);
            printf("\033[37m");



        }     
        i = 0;
   

    }
    
    


    
    break;  

    default:
    

        break;

    }

    }
    printf("\n\n");
   
    
}