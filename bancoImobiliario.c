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
   int prisao;
 
   
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
	printf("\033[1mBI$ 240");

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
    gotoxy(2, y2+5);
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
    gotoxy(2, 4*y2+5);
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
     gotoxy(2, 8*y2+5);
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
                jogadores[i].prisao = 0;


               
                


}
            system("cls");
            box(30,2,80,15);
            gotoxy(31,3);
            printf("JOGADORES CADASTRADOS");
            return quant_j;

        }

        

 limpar_jog(){

     for (int i = 11; i < 100; i++)
     {
         
                        gotoxy(i, 10*6-1);
                        printf("\033[37m\033[0m");
                        putchar(177);
                        printf("\033[37m");
                        gotoxy(i, 10*6-1);
                        printf("\033[37m\033[0m");
                        putchar(177);
                        printf("\033[37m");
     }
     for (int k = 7; k < 60; k++)
     {
                        gotoxy(11, k);
                        printf("\033[37m\033[0m");
                        putchar(177);
                        printf("\033[37m");
                        gotoxy(11, k);
                        printf("\033[37m\033[0m");
                        putchar(177);
                        printf("\033[37m");
     }
      for (int i = 12; i < 100; i++)
     {
         
                        gotoxy(i, 7);
                        printf("\033[37m\033[0m");
                        putchar(177);
                        printf("\033[37m");
                        gotoxy(i, 7);
                        printf("\033[37m\033[0m");
                        putchar(177);
                        printf("\033[37m");
     }
      for (int k = 7; k < 60; k++)
     {
                        gotoxy(99, k);
                        printf("\033[37m\033[0m");
                        putchar(177);
                        printf("\033[37m");
                        gotoxy(99, k);
                        printf("\033[37m\033[0m");
                        putchar(177);
                        printf("\033[37m");
     }
     
     
                        

 }
        

        
    posicao_jogadores(int y2, int posicao, int quant, int i){


int jog1_x, jog2_x, jog3_x, jog4_x;
int jog1_y, jog2_y, jog3_y, jog4_y;


// if ( posicao == 0) {

//     int jog1 = posicao;
//         jog1 = jog1 +92;

//         int jog2 = posicao;
//         jog2 = jog2 + 93;

//         int jog3 = posicao;
//         jog3 = jog3 + 94;

//         int jog4 = posicao;
//         jog4 = jog4 + 95;

// }



        if(quant == 2){
                       
                        // gotoxy(91, 10*y2-1);
                        // printf("\033[1m\033[31m");
                        // putchar(254);
                        // printf("\033[37m");
                        // gotoxy(92, 10*y2-1);
                        // printf("\033[1m\033[34m");
                        // putchar(254);
                        // printf("\033[37m");
            
            
                       
            if (i == 0)
            {

// LINHA INFERIOR --------------------
                if (posicao == 1 || posicao ==0)
                {
                   jog1_x = 92;
                    jog1_y = 10*y2-1;
                 }
                 
                if (posicao == 2)
                {
                   jog1_x = 82;
                    jog1_y = 10*y2-1;
                 }
                   
                   if (posicao == 3)
                {
                   jog1_x = 72;
                    jog1_y = 10*y2-1;
                 } 
                 if (posicao == 4)
                {
                   jog1_x = 62;
                    jog1_y = 10*y2-1;
                 }  
                 if (posicao == 5)
                {
                   jog1_x = 52;
                    jog1_y = 10*y2-1;
                 }
                  if (posicao == 6)
                {
                   jog1_x = 42;
                    jog1_y = 10*y2-1;
                 }
                  if (posicao == 7)
                {
                   jog1_x = 32;
                    jog1_y = 10*y2-1;
                 }
                  if (posicao == 8)
                {
                   jog1_x = 22;
                    jog1_y = 10*y2-1;
                 }
                  if (posicao == 9)
                {
                   jog1_x = 12;
                    jog1_y = 10*y2-1;
                 }
                   if (posicao == 10)

                {
                   jog1_x = 12;
                   jog1_y = 10*y2-1;
                 }  
// ----------------------------------------------------------

// coluna esquerda
// 11 -> 9*y2
// 12 -> 8*y2
// 13 -> 7*y2
// 14 -> 6*y2
// 15 -> 5*y2
// 16 -> 4*y2
// 17 -> 3*y2
// 18 -> 2*y2
// 19 -> y2
                  if (posicao == 11)
                {
                   jog1_x = 11;
                    jog1_y = 58;
                 }
                 
                if (posicao == 12)
                {
                   jog1_x = 11;
                    jog1_y = 52;
                 }
                   
                   if (posicao == 13)
                {
                   jog1_x = 11;
                    jog1_y = 46;
                 } 
                 if (posicao == 14)
                {
                   jog1_x = 11;
                    jog1_y = 40;
                 }  
                 if (posicao == 15)
                {
                   jog1_x = 11;
                    jog1_y = 34;
                 }
                  if (posicao == 16)
                {
                   jog1_x = 11;
                    jog1_y = 28;
                 }
                  if (posicao == 17)
                {
                   jog1_x = 11;
                    jog1_y = 22;
                 }
                  if (posicao == 18)
                {
                   jog1_x = 11;
                    jog1_y = 16;
                 }
                  if (posicao == 19)
                {
                   jog1_x = 11;
                    jog1_y = 8;
                 }
                   if (posicao == 20)
                {
                   jog1_x = 11;
                   jog1_y = 8;
                 }        

// -----------------------------Linha superior ----------------------------
// linha superior
// 20 -> 2
// 21 -> 12
// 22 -> 22
// 23 -> 33
// 24 -> 42
// 25 -> 52 
// 26 -> 62
// 27 -> 72 
// 28 -> 82
// 29 -> 92
// 30 -> 102         
                
                  if (posicao == 21)
                {
                   jog1_x = 12;
                   jog1_y = 7;
                 }  
                 if (posicao == 22)
                {
                   jog1_x = 22;
                   jog1_y = 7;
                 }     
                   if (posicao == 23)
                {
                   jog1_x = 32;
                   jog1_y = 7;
                 } 
                   if (posicao == 24)
                {
                   jog1_x = 42;
                   jog1_y = 7;
                 } 
                   if (posicao == 25)
                {
                   jog1_x = 52;
                   jog1_y = 7;
                 } 
                   if (posicao == 26)
                {
                   jog1_x = 62;
                   jog1_y = 7;
                 } 
                   if (posicao == 27)
                {
                   jog1_x = 72;
                   jog1_y = 7;
                 } 
                   if (posicao == 28)
                {
                   jog1_x = 92;
                   jog1_y = 7;
                 } 
                   if (posicao == 29)
                {
                   jog1_x = 99;
                   jog1_y = 7;
                 } 
                   if (posicao == 30)
                {
                   jog1_x = 99;
                   jog1_y = 7;
                 } 
// ------------------- COLUNA DIREITA -------

/*
31 -> 1*y2
32 -> 2*y2
33 -> 3*y2
34 -> 4*y2
35 -> 5*y2
36 -> 6*y2
37 -> 7*y2
38 -> 8*y2
39 -> y2
*/
                if (posicao == 31)
                {
                   jog1_x = 99;
                   jog1_y = 7;
                 }  
                 if (posicao == 32)
                {
                   jog1_x = 99;
                   jog1_y = 13;
                 }     
                   if (posicao == 33)
                {
                   jog1_x = 99;
                   jog1_y = 19;
                 } 
                   if (posicao == 34)
                {
                   jog1_x = 99;
                   jog1_y = 25;
                 } 
                   if (posicao == 35)
                {
                   jog1_x = 99;
                   jog1_y = 31;
                 } 
                   if (posicao == 36)
                {
                   jog1_x = 99;
                   jog1_y = 37;
                 } 
                   if (posicao == 37)
                {
                   jog1_x = 99;
                   jog1_y = 43;
                 } 
                   if (posicao == 38)
                {
                   jog1_x = 99;
                   jog1_y = 49;
                 } 
                   if (posicao == 39)
                {
                   jog1_x = 99;
                   jog1_y = 55;
                 } 
                

    
               
                        gotoxy(jog1_x, jog1_y);
                        printf("\033[1m\033[31m");
                        putchar(254);
                        printf("\033[37m");
                   

            }
            
             if (i == 1)
            {

//--------------------LINHA-------------------------------

                      if (posicao == 1 || posicao ==0)
                {
                    jog2_x = 93;
                    jog2_y = 10*y2-1;
                 }
                 
                if (posicao == 2)
                {
                    jog2_x = 83;
                    jog2_y = 10*y2-1;
                 }
                   
                   if (posicao == 3)
                {
                    jog2_x = 73;
                    jog2_y = 10*y2-1;
                 } 
                 if (posicao == 4)
                {
                    jog2_x = 63;
                    jog2_y = 10*y2-1;
                 }  
                 if (posicao == 5)
                {
                    jog2_x = 53;
                    jog2_y = 10*y2-1;
                 }
                  if (posicao == 6)
                {
                    jog2_x = 43;
                    jog2_y = 10*y2-1;
                 }
                  if (posicao == 7)
                {
                    jog2_x = 33;
                    jog2_y = 10*y2-1;
                 }
                  if (posicao == 8)
                {
                    jog2_x = 23;
                    jog2_y = 10*y2-1;
                 }
                  if (posicao == 9)
                {
                    jog2_x = 13;
                    jog2_y = 10*y2-1;
                 }
                   if (posicao == 10)
                {
                   jog2_x = 13;
                   jog2_y = 10*y2-1;
                 }         

//--------------------COLUNA-------------------------------
                    if (posicao == 11)
                {
                    jog2_x = 11;
                jog2_y = 57;
                 }
                 
                if (posicao == 12)
                {
                    jog2_x = 11;
                jog2_y = 51;
                 }
                   
                   if (posicao == 13)
                {
                    jog2_x = 11;
                jog2_y = 45;
                 } 
                 if (posicao == 14)
                {
                    jog2_x = 11;
                jog2_y = 39;
                 }  
                 if (posicao == 15)
                {
                    jog2_x = 11;
                jog2_y = 33;
                 }
                  if (posicao == 16)
                {
                    jog2_x = 11;
                jog2_y = 27;
                 }
                  if (posicao == 17)
                {
                    jog2_x = 11;
                jog2_y = 21;
                 }
                  if (posicao == 18)
                {
                    jog2_x = 11;
                jog2_y = 15;
                 }
                  if (posicao == 19)
                {
                    jog2_x = 11;
                jog2_y = 7;
                 }
                   if (posicao == 20)
                {
                    jog2_x = 11;
                   jog2_y= 7;
                 }                     

                 // -----------------------------Linha superior ----------------------------
// linha superior
// 20 -> 2
// 21 -> 12
// 22 -> 22
// 23 -> 33
// 24 -> 42
// 25 -> 52 
// 26 -> 62
// 27 -> 72 
// 28 -> 82
// 29 -> 92
// 30 -> 102         
                
                  if (posicao == 21)
                {
                   jog2_x = 11;
                   jog2_y = 7;
                 }  
                 if (posicao == 22)
                {
                   jog2_x = 21;
                   jog2_y = 7;
                 }     
                   if (posicao == 23)
                {
                   jog2_x = 31;
                   jog2_y = 7;
                 } 
                   if (posicao == 24)
                {
                   jog2_x = 41;
                   jog2_y = 7;
                 } 
                   if (posicao == 25)
                {
                   jog2_x = 51;
                   jog2_y = 7;
                 } 
                   if (posicao == 26)
                {
                   jog2_x = 61;
                   jog2_y = 7;
                 } 
                   if (posicao == 27)
                {
                   jog2_x = 71;
                   jog2_y = 7;
                 } 
                   if (posicao == 28)
                {
                   jog2_x = 91;
                   jog2_y = 7;
                 } 
                   if (posicao == 29)
                {
                   jog2_x = 98;
                   jog2_y = 7;
                 } 
                   if (posicao == 30)
                {
                   jog2_x = 98;
                   jog2_y = 7;
                 } 
// ------------------- COLUNA DIREITA -------

/*
31 -> 1*y2
32 -> 2*y2
33 -> 3*y2
34 -> 4*y2
35 -> 5*y2
36 -> 6*y2
37 -> 7*y2
38 -> 8*y2
39 -> y2
*/
                if (posicao == 31)
                {
                   jog2_x = 99;
                   jog2_y = 10;
                 }  
                 if (posicao == 32)
                {
                   jog2_x = 99;
                   jog2_y = 14;
                 }     
                   if (posicao == 33)
                {
                   jog2_x = 99;
                   jog2_y = 20;
                 } 
                   if (posicao == 34)
                {
                   jog2_x = 99;
                   jog2_y = 26;
                 } 
                   if (posicao == 35)
                {
                   jog2_x = 99;
                   jog2_y = 32;
                 } 
                   if (posicao == 36)
                {
                   jog2_x = 99;
                   jog2_y = 38;
                 } 
                   if (posicao == 37)
                {
                   jog2_x = 99;
                   jog2_y = 44;
                 } 
                   if (posicao == 38)
                {
                   jog2_x = 99;
                   jog2_y = 50;
                 } 
                   if (posicao == 39)
                {
                   jog2_x = 99;
                   jog2_y = 56;
                 } 
                

                      
                         gotoxy(jog2_x, jog2_y);
                         printf("\033[1m\033[34m");
                         putchar(254);
                         printf("\033[37m");
                    
                
                //    if (posicao > 10 && posicao < 20)
                // {
                //         gotoxy(12, jog2);
                //         printf("\033[1m\033[30m");
                //         putchar(254);
                //         printf("\033[37m");
                    
                // }
            }
            
           

        }

        if(quant == 3){

             if (i == 0)
            {

// LINHA INFERIOR --------------------
                if (posicao == 1 || posicao ==0)
                {
                   jog1_x = 92;
                    jog1_y = 10*y2-1;
                 }
                 
                if (posicao == 2)
                {
                   jog1_x = 82;
                    jog1_y = 10*y2-1;
                 }
                   
                   if (posicao == 3)
                {
                   jog1_x = 72;
                    jog1_y = 10*y2-1;
                 } 
                 if (posicao == 4)
                {
                   jog1_x = 62;
                    jog1_y = 10*y2-1;
                 }  
                 if (posicao == 5)
                {
                   jog1_x = 52;
                    jog1_y = 10*y2-1;
                 }
                  if (posicao == 6)
                {
                   jog1_x = 42;
                    jog1_y = 10*y2-1;
                 }
                  if (posicao == 7)
                {
                   jog1_x = 32;
                    jog1_y = 10*y2-1;
                 }
                  if (posicao == 8)
                {
                   jog1_x = 22;
                    jog1_y = 10*y2-1;
                 }
                  if (posicao == 9)
                {
                   jog1_x = 12;
                    jog1_y = 10*y2-1;
                 }
                   if (posicao == 10)

                {
                   jog1_x = 12;
                   jog1_y = 10*y2-1;
                 }  
// ----------------------------------------------------------

// coluna esquerda
// 11 -> 9*y2
// 12 -> 8*y2
// 13 -> 7*y2
// 14 -> 6*y2
// 15 -> 5*y2
// 16 -> 4*y2
// 17 -> 3*y2
// 18 -> 2*y2
// 19 -> y2
                  if (posicao == 11)
                {
                   jog1_x = 11;
                    jog1_y = 58;
                 }
                 
                if (posicao == 12)
                {
                   jog1_x = 11;
                    jog1_y = 52;
                 }
                   
                   if (posicao == 13)
                {
                   jog1_x = 11;
                    jog1_y = 46;
                 } 
                 if (posicao == 14)
                {
                   jog1_x = 11;
                    jog1_y = 40;
                 }  
                 if (posicao == 15)
                {
                   jog1_x = 11;
                    jog1_y = 34;
                 }
                  if (posicao == 16)
                {
                   jog1_x = 11;
                    jog1_y = 28;
                 }
                  if (posicao == 17)
                {
                   jog1_x = 11;
                    jog1_y = 22;
                 }
                  if (posicao == 18)
                {
                   jog1_x = 11;
                    jog1_y = 16;
                 }
                  if (posicao == 19)
                {
                   jog1_x = 11;
                    jog1_y = 8;
                 }
                   if (posicao == 20)
                {
                   jog1_x = 11;
                   jog1_y = 8;
                 }        

// -----------------------------Linha superior ----------------------------
// linha superior
// 20 -> 2
// 21 -> 12
// 22 -> 22
// 23 -> 33
// 24 -> 42
// 25 -> 52 
// 26 -> 62
// 27 -> 72 
// 28 -> 82
// 29 -> 92
// 30 -> 102         
                
                  if (posicao == 21)
                {
                   jog1_x = 12;
                   jog1_y = 7;
                 }  
                 if (posicao == 22)
                {
                   jog1_x = 22;
                   jog1_y = 7;
                 }     
                   if (posicao == 23)
                {
                   jog1_x = 32;
                   jog1_y = 7;
                 } 
                   if (posicao == 24)
                {
                   jog1_x = 42;
                   jog1_y = 7;
                 } 
                   if (posicao == 25)
                {
                   jog1_x = 52;
                   jog1_y = 7;
                 } 
                   if (posicao == 26)
                {
                   jog1_x = 62;
                   jog1_y = 7;
                 } 
                   if (posicao == 27)
                {
                   jog1_x = 72;
                   jog1_y = 7;
                 } 
                   if (posicao == 28)
                {
                   jog1_x = 92;
                   jog1_y = 7;
                 } 
                   if (posicao == 29)
                {
                   jog1_x = 99;
                   jog1_y = 7;
                 } 
                   if (posicao == 30)
                {
                   jog1_x = 99;
                   jog1_y = 7;
                 } 
// ------------------- COLUNA DIREITA -------

/*
31 -> 1*y2
32 -> 2*y2
33 -> 3*y2
34 -> 4*y2
35 -> 5*y2
36 -> 6*y2
37 -> 7*y2
38 -> 8*y2
39 -> y2
*/
                if (posicao == 31)
                {
                   jog1_x = 99;
                   jog1_y = 7;
                 }  
                 if (posicao == 32)
                {
                   jog1_x = 99;
                   jog1_y = 13;
                 }     
                   if (posicao == 33)
                {
                   jog1_x = 99;
                   jog1_y = 19;
                 } 
                   if (posicao == 34)
                {
                   jog1_x = 99;
                   jog1_y = 25;
                 } 
                   if (posicao == 35)
                {
                   jog1_x = 99;
                   jog1_y = 31;
                 } 
                   if (posicao == 36)
                {
                   jog1_x = 99;
                   jog1_y = 37;
                 } 
                   if (posicao == 37)
                {
                   jog1_x = 99;
                   jog1_y = 43;
                 } 
                   if (posicao == 38)
                {
                   jog1_x = 99;
                   jog1_y = 49;
                 } 
                   if (posicao == 39)
                {
                   jog1_x = 99;
                   jog1_y = 55;
                 } 
                   

    
               
                        gotoxy(jog1_x, jog1_y);
                        printf("\033[1m\033[31m");
                        putchar(254);
                        printf("\033[37m");
                   

            }
            
             if (i == 1)
            {

//--------------------LINHA-------------------------------

                      if (posicao == 1 || posicao ==0)
                {
                    jog2_x = 93;
                    jog2_y = 10*y2-1;
                 }
                 
                if (posicao == 2)
                {
                    jog2_x = 83;
                    jog2_y = 10*y2-1;
                 }
                   
                   if (posicao == 3)
                {
                    jog2_x = 73;
                    jog2_y = 10*y2-1;
                 } 
                 if (posicao == 4)
                {
                    jog2_x = 63;
                    jog2_y = 10*y2-1;
                 }  
                 if (posicao == 5)
                {
                    jog2_x = 53;
                    jog2_y = 10*y2-1;
                 }
                  if (posicao == 6)
                {
                    jog2_x = 43;
                    jog2_y = 10*y2-1;
                 }
                  if (posicao == 7)
                {
                    jog2_x = 33;
                    jog2_y = 10*y2-1;
                 }
                  if (posicao == 8)
                {
                    jog2_x = 23;
                    jog2_y = 10*y2-1;
                 }
                  if (posicao == 9)
                {
                    jog2_x = 13;
                    jog2_y = 10*y2-1;
                 }
                   if (posicao == 10)
                {
                   jog2_x = 13;
                   jog2_y = 10*y2-1;
                 }         

//--------------------COLUNA-------------------------------
                    if (posicao == 11)
                {
                    jog2_x = 11;
                jog2_y = 57;
                 }
                 
                if (posicao == 12)
                {
                    jog2_x = 11;
                jog2_y = 51;
                 }
                   
                   if (posicao == 13)
                {
                    jog2_x = 11;
                jog2_y = 45;
                 } 
                 if (posicao == 14)
                {
                    jog2_x = 11;
                jog2_y = 39;
                 }  
                 if (posicao == 15)
                {
                    jog2_x = 11;
                jog2_y = 33;
                 }
                  if (posicao == 16)
                {
                    jog2_x = 11;
                jog2_y = 27;
                 }
                  if (posicao == 17)
                {
                    jog2_x = 11;
                jog2_y = 21;
                 }
                  if (posicao == 18)
                {
                    jog2_x = 11;
                jog2_y = 15;
                 }
                  if (posicao == 19)
                {
                    jog2_x = 11;
                jog2_y = 7;
                 }
                   if (posicao == 20)
                {
                    jog2_x = 11;
                   jog2_y= 7;
                 }                     

                 // -----------------------------Linha superior ----------------------------
// linha superior
// 20 -> 2
// 21 -> 12
// 22 -> 22
// 23 -> 33
// 24 -> 42
// 25 -> 52 
// 26 -> 62
// 27 -> 72 
// 28 -> 82
// 29 -> 92
// 30 -> 102         
                
                  if (posicao == 21)
                {
                   jog2_x = 11;
                   jog2_y = 7;
                 }  
                 if (posicao == 22)
                {
                   jog2_x = 21;
                   jog2_y = 7;
                 }     
                   if (posicao == 23)
                {
                   jog2_x = 31;
                   jog2_y = 7;
                 } 
                   if (posicao == 24)
                {
                   jog2_x = 41;
                   jog2_y = 7;
                 } 
                   if (posicao == 25)
                {
                   jog2_x = 51;
                   jog2_y = 7;
                 } 
                   if (posicao == 26)
                {
                   jog2_x = 61;
                   jog2_y = 7;
                 } 
                   if (posicao == 27)
                {
                   jog2_x = 71;
                   jog2_y = 7;
                 } 
                   if (posicao == 28)
                {
                   jog2_x = 91;
                   jog2_y = 7;
                 } 
                   if (posicao == 29)
                {
                   jog2_x = 98;
                   jog2_y = 7;
                 } 
                   if (posicao == 30)
                {
                   jog2_x = 98;
                   jog2_y = 7;
                 } 
// ------------------- COLUNA DIREITA -------

/*
31 -> 1*y2
32 -> 2*y2
33 -> 3*y2
34 -> 4*y2
35 -> 5*y2
36 -> 6*y2
37 -> 7*y2
38 -> 8*y2
39 -> y2
*/
                if (posicao == 31)
                {
                   jog2_x = 99;
                   jog2_y = 10;
                 }  
                 if (posicao == 32)
                {
                   jog2_x = 99;
                   jog2_y = 14;
                 }     
                   if (posicao == 33)
                {
                   jog2_x = 99;
                   jog2_y = 20;
                 } 
                   if (posicao == 34)
                {
                   jog2_x = 99;
                   jog2_y = 26;
                 } 
                   if (posicao == 35)
                {
                   jog2_x = 99;
                   jog2_y = 32;
                 } 
                   if (posicao == 36)
                {
                   jog2_x = 99;
                   jog2_y = 38;
                 } 
                   if (posicao == 37)
                {
                   jog2_x = 99;
                   jog2_y = 44;
                 } 
                   if (posicao == 38)
                {
                   jog2_x = 99;
                   jog2_y = 50;
                 } 
                   if (posicao == 39)
                {
                   jog2_x = 99;
                   jog2_y = 56;
                 } 
                
                      
                         gotoxy(jog2_x, jog2_y);
                         printf("\033[1m\033[34m");
                         putchar(254);
                         printf("\033[37m");
                    
                
                //    if (posicao > 10 && posicao < 20)
                // {
                //         gotoxy(12, jog2);
                //         printf("\033[1m\033[30m");
                //         putchar(254);
                //         printf("\033[37m");
                    
                // }
            }
               if (i == 2)
            {

//--------------------LINHA-------------------------------

                      if (posicao == 1 || posicao ==0)
                {
                    jog3_x = 95;
                    jog3_y = 10*y2-1;
                 }
                 
                if (posicao == 2)
                {
                    jog3_x = 85;
                    jog3_y = 10*y2-1;
                 }
                   
                   if (posicao == 3)
                {
                    jog3_x = 75;
                    jog3_y = 10*y2-1;
                 } 
                 if (posicao == 4)
                {
                    jog3_x = 65;
                    jog3_y = 10*y2-1;
                 }  
                 if (posicao == 5)
                {
                    jog3_x = 55;
                    jog3_y = 10*y2-1;
                 }
                  if (posicao == 6)
                {
                    jog3_x = 45;
                    jog3_y = 10*y2-1;
                 }
                  if (posicao == 7)
                {
                    jog3_x = 35;
                    jog3_y = 10*y2-1;
                 }
                  if (posicao == 8)
                {
                    jog3_x = 25;
                    jog3_y = 10*y2-1;
                 }
                  if (posicao == 9)
                {
                    jog3_x = 15;
                    jog3_y = 10*y2-1;
                 }
                   if (posicao == 10)
                {
                   jog3_x = 15;
                   jog3_y = 10*y2-1;
                 }         

//--------------------COLUNA-------------------------------
                    if (posicao == 11)
                {
                    jog3_x = 11;
                jog3_y = 59;
                 }
                 
                if (posicao == 12)
                {
                    jog3_x = 11;
                jog3_y = 53;
                 }
                   
                   if (posicao == 13)
                {
                    jog3_x = 11;
                jog3_y = 46;
                 } 
                 if (posicao == 14)
                {
                    jog3_x = 11;
                jog3_y = 40;
                 }  
                 if (posicao == 15)
                {
                    jog3_x = 11;
                jog3_y = 34;
                 }
                  if (posicao == 16)
                {
                    jog3_x = 11;
                jog3_y = 28;
                 }
                  if (posicao == 17)
                {
                    jog3_x = 11;
                jog3_y = 21;
                 }
                  if (posicao == 18)
                {
                    jog3_x = 11;
                jog3_y =  16;
                 }
                  if (posicao == 19)
                {
                    jog3_x = 11;
                jog3_y = 8;
                 }
                   if (posicao == 20)
                {
                    jog3_x = 11;
                   jog3_y= 8;
                 }                     

                 // -----------------------------Linha superior ----------------------------
// linha superior
// 20 -> 2
// 21 -> 12
// 22 -> 22
// 23 -> 33
// 24 -> 42
// 25 -> 52 
// 26 -> 62
// 27 -> 72 
// 28 -> 82
// 29 -> 92
// 30 -> 102         
                
                  if (posicao == 21)
                {
                   jog3_x = 12;
                   jog3_y = 7;
                 }  
                 if (posicao == 22)
                {
                   jog3_x = 22;
                   jog3_y = 7;
                 }     
                   if (posicao == 23)
                {
                   jog3_x = 32;
                   jog3_y = 7;
                 } 
                   if (posicao == 24)
                {
                   jog3_x = 42;
                   jog3_y = 7;
                 } 
                   if (posicao == 25)
                {
                   jog3_x = 52;
                   jog3_y = 7;
                 } 
                   if (posicao == 26)
                {
                   jog3_x = 62;
                   jog3_y = 7;
                 } 
                   if (posicao == 27)
                {
                   jog3_x = 72;
                   jog3_y = 7;
                 } 
                   if (posicao == 28)
                {
                   jog3_x = 92;
                   jog3_y = 7;
                 } 
                   if (posicao == 29)
                {
                   jog3_x = 97;
                   jog3_y = 7;
                 } 
                   if (posicao == 30)
                {
                   jog3_x = 97;
                   jog3_y = 7;
                 } 
// ------------------- COLUNA DIREITA -------

/*
31 -> 1*y2
32 -> 2*y2
33 -> 3*y2
34 -> 4*y2
35 -> 5*y2
36 -> 6*y2
37 -> 7*y2
38 -> 8*y2
39 -> y2
*/
                if (posicao == 31)
                {
                   jog3_x = 99;
                   jog3_y = 11;
                 }  
                 if (posicao == 32)
                {
                   jog3_x = 99;
                   jog3_y = 15;
                 }     
                   if (posicao == 33)
                {
                   jog3_x = 99;
                   jog3_y = 21;
                 } 
                   if (posicao == 34)
                {
                   jog3_x = 99;
                   jog3_y = 27;
                 } 
                   if (posicao == 35)
                {
                   jog3_x = 99;
                   jog3_y = 33;
                 } 
                   if (posicao == 36)
                {
                   jog3_x = 99;
                   jog3_y = 39;
                 } 
                   if (posicao == 37)
                {
                   jog3_x = 99;
                   jog3_y = 45;
                 } 
                   if (posicao == 38)
                {
                   jog3_x = 99;
                   jog3_y = 51;
                 } 
                   if (posicao == 39)
                {
                   jog3_x = 99;
                   jog3_y = 56;
                 } 
                   

                      
                          gotoxy(jog3_x, jog3_y);
            printf("\033[1m\033[32m");
            putchar(254);
            printf("\033[37m");
                    
                
                //    if (posicao > 10 && posicao < 20)
                // {
                //         gotoxy(12, jog2);
                //         printf("\033[1m\033[30m");
                //         putchar(254);
                //         printf("\033[37m");
                    
                // }
            }
            
           

        }
          if(quant == 4){

               if (i == 0)
            {

// LINHA INFERIOR --------------------
                if (posicao == 1 || posicao ==0)
                {
                   jog1_x = 92;
                    jog1_y = 10*y2-1;
                 }
                 
                if (posicao == 2)
                {
                   jog1_x = 82;
                    jog1_y = 10*y2-1;
                 }
                   
                   if (posicao == 3)
                {
                   jog1_x = 72;
                    jog1_y = 10*y2-1;
                 } 
                 if (posicao == 4)
                {
                   jog1_x = 62;
                    jog1_y = 10*y2-1;
                 }  
                 if (posicao == 5)
                {
                   jog1_x = 52;
                    jog1_y = 10*y2-1;
                 }
                  if (posicao == 6)
                {
                   jog1_x = 42;
                    jog1_y = 10*y2-1;
                 }
                  if (posicao == 7)
                {
                   jog1_x = 32;
                    jog1_y = 10*y2-1;
                 }
                  if (posicao == 8)
                {
                   jog1_x = 22;
                    jog1_y = 10*y2-1;
                 }
                  if (posicao == 9)
                {
                   jog1_x = 12;
                    jog1_y = 10*y2-1;
                 }
                   if (posicao == 10)

                {
                   jog1_x = 12;
                   jog1_y = 10*y2-1;
                 }  
// ----------------------------------------------------------

// coluna esquerda
// 11 -> 9*y2
// 12 -> 8*y2
// 13 -> 7*y2
// 14 -> 6*y2
// 15 -> 5*y2
// 16 -> 4*y2
// 17 -> 3*y2
// 18 -> 2*y2
// 19 -> y2
                  if (posicao == 11)
                {
                   jog1_x = 11;
                    jog1_y = 58;
                 }
                 
                if (posicao == 12)
                {
                   jog1_x = 11;
                    jog1_y = 52;
                 }
                   
                   if (posicao == 13)
                {
                   jog1_x = 11;
                    jog1_y = 46;
                 } 
                 if (posicao == 14)
                {
                   jog1_x = 11;
                    jog1_y = 40;
                 }  
                 if (posicao == 15)
                {
                   jog1_x = 11;
                    jog1_y = 34;
                 }
                  if (posicao == 16)
                {
                   jog1_x = 11;
                    jog1_y = 28;
                 }
                  if (posicao == 17)
                {
                   jog1_x = 11;
                    jog1_y = 22;
                 }
                  if (posicao == 18)
                {
                   jog1_x = 11;
                    jog1_y = 16;
                 }
                  if (posicao == 19)
                {
                   jog1_x = 11;
                    jog1_y = 8;
                 }
                   if (posicao == 20)
                {
                   jog1_x = 11;
                   jog1_y = 8;
                 }        

// -----------------------------Linha superior ----------------------------
// linha superior
// 20 -> 2
// 21 -> 12
// 22 -> 22
// 23 -> 33
// 24 -> 42
// 25 -> 52 
// 26 -> 62
// 27 -> 72 
// 28 -> 82
// 29 -> 92
// 30 -> 102         
                
                  if (posicao == 21)
                {
                   jog1_x = 12;
                   jog1_y = 7;
                 }  
                 if (posicao == 22)
                {
                   jog1_x = 22;
                   jog1_y = 7;
                 }     
                   if (posicao == 23)
                {
                   jog1_x = 32;
                   jog1_y = 7;
                 } 
                   if (posicao == 24)
                {
                   jog1_x = 42;
                   jog1_y = 7;
                 } 
                   if (posicao == 25)
                {
                   jog1_x = 52;
                   jog1_y = 7;
                 } 
                   if (posicao == 26)
                {
                   jog1_x = 62;
                   jog1_y = 7;
                 } 
                   if (posicao == 27)
                {
                   jog1_x = 72;
                   jog1_y = 7;
                 } 
                   if (posicao == 28)
                {
                   jog1_x = 92;
                   jog1_y = 7;
                 } 
                   if (posicao == 29)
                {
                   jog1_x = 99;
                   jog1_y = 7;
                 } 
                   if (posicao == 30)
                {
                   jog1_x = 99;
                   jog1_y = 7;
                 } 
// ------------------- COLUNA DIREITA -------

/*
31 -> 1*y2
32 -> 2*y2
33 -> 3*y2
34 -> 4*y2
35 -> 5*y2
36 -> 6*y2
37 -> 7*y2
38 -> 8*y2
39 -> y2
*/
                if (posicao == 31)
                {
                   jog1_x = 99;
                   jog1_y = 7;
                 }  
                 if (posicao == 32)
                {
                   jog1_x = 99;
                   jog1_y = 13;
                 }     
                   if (posicao == 33)
                {
                   jog1_x = 99;
                   jog1_y = 19;
                 } 
                   if (posicao == 34)
                {
                   jog1_x = 99;
                   jog1_y = 25;
                 } 
                   if (posicao == 35)
                {
                   jog1_x = 99;
                   jog1_y = 31;
                 } 
                   if (posicao == 36)
                {
                   jog1_x = 99;
                   jog1_y = 37;
                 } 
                   if (posicao == 37)
                {
                   jog1_x = 99;
                   jog1_y = 43;
                 } 
                   if (posicao == 38)
                {
                   jog1_x = 99;
                   jog1_y = 49;
                 } 
                   if (posicao == 39)
                {
                   jog1_x = 99;
                   jog1_y = 55;
                 } 
                 

    
               
                        gotoxy(jog1_x, jog1_y);
                        printf("\033[1m\033[31m");
                        putchar(254);
                        printf("\033[37m");
                   

            }
            
             if (i == 1)
            {

//--------------------LINHA-------------------------------

                      if (posicao == 1 || posicao ==0)
                {
                    jog2_x = 93;
                    jog2_y = 10*y2-1;
                 }
                 
                if (posicao == 2)
                {
                    jog2_x = 83;
                    jog2_y = 10*y2-1;
                 }
                   
                   if (posicao == 3)
                {
                    jog2_x = 73;
                    jog2_y = 10*y2-1;
                 } 
                 if (posicao == 4)
                {
                    jog2_x = 63;
                    jog2_y = 10*y2-1;
                 }  
                 if (posicao == 5)
                {
                    jog2_x = 53;
                    jog2_y = 10*y2-1;
                 }
                  if (posicao == 6)
                {
                    jog2_x = 43;
                    jog2_y = 10*y2-1;
                 }
                  if (posicao == 7)
                {
                    jog2_x = 33;
                    jog2_y = 10*y2-1;
                 }
                  if (posicao == 8)
                {
                    jog2_x = 23;
                    jog2_y = 10*y2-1;
                 }
                  if (posicao == 9)
                {
                    jog2_x = 13;
                    jog2_y = 10*y2-1;
                 }
                   if (posicao == 10)
                {
                   jog2_x = 13;
                   jog2_y = 10*y2-1;
                 }         

//--------------------COLUNA-------------------------------
                    if (posicao == 11)
                {
                    jog2_x = 11;
                jog2_y = 57;
                 }
                 
                if (posicao == 12)
                {
                    jog2_x = 11;
                jog2_y = 51;
                 }
                   
                   if (posicao == 13)
                {
                    jog2_x = 11;
                jog2_y = 45;
                 } 
                 if (posicao == 14)
                {
                    jog2_x = 11;
                jog2_y = 39;
                 }  
                 if (posicao == 15)
                {
                    jog2_x = 11;
                jog2_y = 33;
                 }
                  if (posicao == 16)
                {
                    jog2_x = 11;
                jog2_y = 27;
                 }
                  if (posicao == 17)
                {
                    jog2_x = 11;
                jog2_y = 21;
                 }
                  if (posicao == 18)
                {
                    jog2_x = 11;
                jog2_y = 15;
                 }
                  if (posicao == 19)
                {
                    jog2_x = 11;
                jog2_y = 7;
                 }
                   if (posicao == 20)
                {
                    jog2_x = 11;
                   jog2_y= 7;
                 }                     

                 // -----------------------------Linha superior ----------------------------
// linha superior
// 20 -> 2
// 21 -> 12
// 22 -> 22
// 23 -> 33
// 24 -> 42
// 25 -> 52 
// 26 -> 62
// 27 -> 72 
// 28 -> 82
// 29 -> 92
// 30 -> 102         
                
                  if (posicao == 21)
                {
                   jog2_x = 11;
                   jog2_y = 7;
                 }  
                 if (posicao == 22)
                {
                   jog2_x = 21;
                   jog2_y = 7;
                 }     
                   if (posicao == 23)
                {
                   jog2_x = 31;
                   jog2_y = 7;
                 } 
                   if (posicao == 24)
                {
                   jog2_x = 41;
                   jog2_y = 7;
                 } 
                   if (posicao == 25)
                {
                   jog2_x = 51;
                   jog2_y = 7;
                 } 
                   if (posicao == 26)
                {
                   jog2_x = 61;
                   jog2_y = 7;
                 } 
                   if (posicao == 27)
                {
                   jog2_x = 71;
                   jog2_y = 7;
                 } 
                   if (posicao == 28)
                {
                   jog2_x = 91;
                   jog2_y = 7;
                 } 
                   if (posicao == 29)
                {
                   jog2_x = 98;
                   jog2_y = 7;
                 } 
                   if (posicao == 30)
                {
                   jog2_x = 98;
                   jog2_y = 7;
                 } 
// ------------------- COLUNA DIREITA -------

/*
31 -> 1*y2
32 -> 2*y2
33 -> 3*y2
34 -> 4*y2
35 -> 5*y2
36 -> 6*y2
37 -> 7*y2
38 -> 8*y2
39 -> y2
*/
                if (posicao == 31)
                {
                   jog2_x = 99;
                   jog2_y = 10;
                 }  
                 if (posicao == 32)
                {
                   jog2_x = 99;
                   jog2_y = 14;
                 }     
                   if (posicao == 33)
                {
                   jog2_x = 99;
                   jog2_y = 20;
                 } 
                   if (posicao == 34)
                {
                   jog2_x = 99;
                   jog2_y = 26;
                 } 
                   if (posicao == 35)
                {
                   jog2_x = 99;
                   jog2_y = 32;
                 } 
                   if (posicao == 36)
                {
                   jog2_x = 99;
                   jog2_y = 38;
                 } 
                   if (posicao == 37)
                {
                   jog2_x = 99;
                   jog2_y = 44;
                 } 
                   if (posicao == 38)
                {
                   jog2_x = 99;
                   jog2_y = 50;
                 } 
                   if (posicao == 39)
                {
                   jog2_x = 99;
                   jog2_y = 56;
                 } 
               
                      
                         gotoxy(jog2_x, jog2_y);
                         printf("\033[1m\033[34m");
                         putchar(254);
                         printf("\033[37m");
                    
                
                //    if (posicao > 10 && posicao < 20)
                // {
                //         gotoxy(12, jog2);
                //         printf("\033[1m\033[30m");
                //         putchar(254);
                //         printf("\033[37m");
                    
                // }
            }

             if (i == 2)
            {

//--------------------LINHA-------------------------------

                      if (posicao == 1 || posicao ==0)
                {
                    jog3_x = 95;
                    jog3_y = 10*y2-1;
                 }
                 
                if (posicao == 2)
                {
                    jog3_x = 85;
                    jog3_y = 10*y2-1;
                 }
                   
                   if (posicao == 3)
                {
                    jog3_x = 75;
                    jog3_y = 10*y2-1;
                 } 
                 if (posicao == 4)
                {
                    jog3_x = 65;
                    jog3_y = 10*y2-1;
                 }  
                 if (posicao == 5)
                {
                    jog3_x = 55;
                    jog3_y = 10*y2-1;
                 }
                  if (posicao == 6)
                {
                    jog3_x = 45;
                    jog3_y = 10*y2-1;
                 }
                  if (posicao == 7)
                {
                    jog3_x = 35;
                    jog3_y = 10*y2-1;
                 }
                  if (posicao == 8)
                {
                    jog3_x = 25;
                    jog3_y = 10*y2-1;
                 }
                  if (posicao == 9)
                {
                    jog3_x = 15;
                    jog3_y = 10*y2-1;
                 }
                   if (posicao == 10)
                {
                   jog3_x = 15;
                   jog3_y = 10*y2-1;
                 }         

//--------------------COLUNA-------------------------------
                    if (posicao == 11)
                {
                    jog3_x = 11;
                jog3_y = 59;
                 }
                 
                if (posicao == 12)
                {
                    jog3_x = 11;
                jog3_y = 53;
                 }
                   
                   if (posicao == 13)
                {
                    jog3_x = 11;
                jog3_y = 46;
                 } 
                 if (posicao == 14)
                {
                    jog3_x = 11;
                jog3_y = 40;
                 }  
                 if (posicao == 15)
                {
                    jog3_x = 11;
                jog3_y = 34;
                 }
                  if (posicao == 16)
                {
                    jog3_x = 11;
                jog3_y = 28;
                 }
                  if (posicao == 17)
                {
                    jog3_x = 11;
                jog3_y = 21;
                 }
                  if (posicao == 18)
                {
                    jog3_x = 11;
                jog3_y =  16;
                 }
                  if (posicao == 19)
                {
                    jog3_x = 11;
                jog3_y = 8;
                 }
                   if (posicao == 20)
                {
                    jog3_x = 11;
                   jog3_y= 8;
                 }                     

                 // -----------------------------Linha superior ----------------------------
// linha superior
// 20 -> 2
// 21 -> 12
// 22 -> 22
// 23 -> 33
// 24 -> 42
// 25 -> 52 
// 26 -> 62
// 27 -> 72 
// 28 -> 82
// 29 -> 92
// 30 -> 102         
                
                  if (posicao == 21)
                {
                   jog3_x = 12;
                   jog3_y = 7;
                 }  
                 if (posicao == 22)
                {
                   jog3_x = 22;
                   jog3_y = 7;
                 }     
                   if (posicao == 23)
                {
                   jog3_x = 32;
                   jog3_y = 7;
                 } 
                   if (posicao == 24)
                {
                   jog3_x = 42;
                   jog3_y = 7;
                 } 
                   if (posicao == 25)
                {
                   jog3_x = 52;
                   jog3_y = 7;
                 } 
                   if (posicao == 26)
                {
                   jog3_x = 62;
                   jog3_y = 7;
                 } 
                   if (posicao == 27)
                {
                   jog3_x = 72;
                   jog3_y = 7;
                 } 
                   if (posicao == 28)
                {
                   jog3_x = 92;
                   jog3_y = 7;
                 } 
                   if (posicao == 29)
                {
                   jog3_x = 97;
                   jog3_y = 7;
                 } 
                   if (posicao == 30)
                {
                   jog3_x = 97;
                   jog3_y = 7;
                 } 
// ------------------- COLUNA DIREITA -------

/*
31 -> 1*y2
32 -> 2*y2
33 -> 3*y2
34 -> 4*y2
35 -> 5*y2
36 -> 6*y2
37 -> 7*y2
38 -> 8*y2
39 -> y2
*/
                if (posicao == 31)
                {
                   jog3_x = 99;
                   jog3_y = 11;
                 }  
                 if (posicao == 32)
                {
                   jog3_x = 99;
                   jog3_y = 15;
                 }     
                   if (posicao == 33)
                {
                   jog3_x = 99;
                   jog3_y = 21;
                 } 
                   if (posicao == 34)
                {
                   jog3_x = 99;
                   jog3_y = 27;
                 } 
                   if (posicao == 35)
                {
                   jog3_x = 99;
                   jog3_y = 33;
                 } 
                   if (posicao == 36)
                {
                   jog3_x = 99;
                   jog3_y = 39;
                 } 
                   if (posicao == 37)
                {
                   jog3_x = 99;
                   jog3_y = 45;
                 } 
                   if (posicao == 38)
                {
                   jog3_x = 99;
                   jog3_y = 51;
                 } 
                   if (posicao == 39)
                {
                   jog3_x = 99;
                   jog3_y = 57;
                 } 
               

                      
            gotoxy(jog3_x, jog3_y);
            printf("\033[1m\033[32m");
            putchar(254);
            printf("\033[37m");
                    
                
                //    if (posicao > 10 && posicao < 20)
                // {
                //         gotoxy(12, jog2);
                //         printf("\033[1m\033[30m");
                //         putchar(254);
                //         printf("\033[37m");
                    
                // }
            }
             if (i == 3)
            {

//--------------------LINHA-------------------------------

                      if (posicao == 1 || posicao ==0)
                {
                    jog4_x = 96;
                    jog4_y = 10*y2-1;
                 }
                 
                if (posicao == 2)
                {
                    jog4_x = 86;
                    jog4_y = 10*y2-1;
                 }
                   
                   if (posicao == 3)
                {
                    jog4_x = 76;
                    jog4_y = 10*y2-1;
                 } 
                 if (posicao == 4)
                {
                    jog4_x = 66;
                    jog4_y = 10*y2-1;
                 }  
                 if (posicao == 5)
                {
                    jog4_x = 56;
                    jog4_y = 10*y2-1;
                 }
                  if (posicao == 6)
                {
                    jog4_x = 46;
                    jog4_y = 10*y2-1;
                 }
                  if (posicao == 7)
                {
                    jog4_x = 36;
                    jog4_y = 10*y2-1;
                 }
                  if (posicao == 8)
                {
                    jog4_x = 26;
                    jog4_y = 10*y2-1;
                 }
                  if (posicao == 9)
                {
                    jog4_x = 16;
                    jog4_y = 10*y2-1;
                 }
                   if (posicao == 10)
                {
                   jog4_x = 16;
                   jog4_y = 10*y2-1;
                 }         

//--------------------COLUNA-------------------------------
                    if (posicao == 11)
                {
                    jog4_x = 11;
                    jog4_y = 55;
                 }
                 
                if (posicao == 12)
                {
                    jog4_x = 11;
                    jog4_y = 551;
                 }
                   
                   if (posicao == 13)
                {
                    jog4_x = 11;
                    jog4_y = 44;
                 } 
                 if (posicao == 14)
                {
                    jog4_x = 11;
                    jog4_y = 38;
                 }  
                 if (posicao == 15)
                {
                    jog4_x = 11;
                    jog4_y = 32;
                 }
                  if (posicao == 16)
                {
                    jog4_x = 11;
                    jog4_y = 26;
                 }
                  if (posicao == 17)
                {
                    jog4_x = 11;
                    jog4_y = 19;
                 }
                  if (posicao == 18)
                {
                    jog4_x = 11;
                    jog4_y =  14;
                 }
                  if (posicao == 19)
                {
                    jog4_x = 11;
                    jog4_y = 10;
                 }
                   if (posicao == 20)
                {
                    jog4_x = 11;
                    jog4_y= 10;
                 }                     

                 // -----------------------------Linha superior ----------------------------
// linha superior
// 20 -> 2
// 21 -> 12
// 22 -> 22
// 23 -> 33
// 24 -> 42
// 25 -> 52 
// 26 -> 62
// 27 -> 72 
// 28 -> 82
// 29 -> 92
// 30 -> 102         
                
                  if (posicao == 21)
                {
                   jog4_x = 13;
                   jog4_y = 7;
                 }  
                 if (posicao == 22)
                {
                   jog4_x = 23;
                   jog4_y = 7;
                 }     
                   if (posicao == 23)
                {
                   jog4_x = 33;
                   jog4_y = 7;
                 } 
                   if (posicao == 24)
                {
                   jog4_x = 43;
                   jog4_y = 7;
                 } 
                   if (posicao == 25)
                {
                   jog4_x = 53;
                   jog4_y = 7;
                 } 
                   if (posicao == 26)
                {
                   jog4_x = 63;
                   jog4_y = 7;
                 } 
                   if (posicao == 27)
                {
                   jog4_x = 73;
                   jog4_y = 7;
                 } 
                   if (posicao == 28)
                {
                   jog4_x = 93;
                   jog4_y = 7;
                 } 
                   if (posicao == 29)
                {
                   jog4_x = 98;
                   jog4_y = 7;
                 } 
                   if (posicao == 30)
                {
                   jog4_x = 98;
                   jog4_y = 7;
                 } 
// ------------------- COLUNA DIREITA -------

/*
31 -> 1*y2
32 -> 2*y2
33 -> 3*y2
34 -> 4*y2
35 -> 5*y2
36 -> 6*y2
37 -> 7*y2
38 -> 8*y2
39 -> y2
*/
                if (posicao == 31)
                {
                   jog4_x = 99;
                   jog4_y = 12;
                 }  
                 if (posicao == 32)
                {
                   jog4_x = 99;
                   jog4_y = 16;
                 }     
                   if (posicao == 33)
                {
                   jog4_x = 99;
                   jog4_y = 22;
                 } 
                   if (posicao == 34)
                {
                   jog4_x = 99;
                   jog4_y = 28;
                 } 
                   if (posicao == 35)
                {
                   jog4_x = 99;
                   jog4_y = 34;
                 } 
                   if (posicao == 36)
                {
                   jog4_x = 99;
                   jog4_y = 40;
                 } 
                   if (posicao == 37)
                {
                   jog4_x = 99;
                   jog4_y = 46;
                 } 
                   if (posicao == 38)
                {
                   jog4_x = 99;
                   jog4_y = 52;
                 } 
                   if (posicao == 39)
                {
                   jog4_x = 99;
                   jog4_y = 58;
                 } 
                   

                      
            gotoxy(jog4_x, jog4_y);
            printf("\033[1m\033[33m");
            putchar(254);
            printf("\033[37m");
                    
                
                //    if (posicao > 10 && posicao < 20)
                // {
                //         gotoxy(12, jog2);
                //         printf("\033[1m\033[30m");
                //         putchar(254);
                //         printf("\033[37m");
                    
                // }
            }

           
            
            

        }
        
          


    }

    /*
    gotoxy(92, 10*y2-1);
            printf("\033[1m\033[31m");
            putchar(254);
            printf("\033[37m");
            gotoxy(93, 10*y2-1);
            printf("\033[1m\033[34m");
            putchar(254);
            printf("\033[37m");
            gotoxy(94, 10*y2-1);
            gotoxy(95, 10*y2-1);
            printf("\033[1m\033[33m");
            putchar(254);
            printf("\033[37m");
    */

   typedef struct 
{
   char nome[40];
   int aluguel;
   int valor;
   int comprado;
   int posicao;
   
} casas;


   
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

           casas hipotecas[40];

        hipotecas[1].posicao = 1;
       // hipotecas[1].nome = "Leblon";
        hipotecas[1].comprado = 5;
        hipotecas[1].aluguel = 10;
        hipotecas[1].valor = 100;
        
        hipotecas[2].posicao = 2;
       // hipotecas[2].nome = "Sorte revez";
        hipotecas[2].comprado = 6;
        hipotecas[2].aluguel = 0;
        hipotecas[2].valor = 0;

        hipotecas[3].posicao = 3;
       // hipotecas[3].nome = "Av prst Vargas";
        hipotecas[3].comprado = 5;
        hipotecas[3].aluguel = 6;
        hipotecas[3].valor = 60;

        hipotecas[4].posicao = 4;
       // hipotecas[4].nome = "Av S. de Cabana";
        hipotecas[4].comprado = 5;
        hipotecas[4].aluguel = 6;
        hipotecas[4].valor = 60;

        hipotecas[5].posicao = 5;
       // hipotecas[5].nome = "Companina de trem"
        hipotecas[5].comprado = 5;
        hipotecas[5].aluguel = 200;
        hipotecas[5].valor = 200;


        hipotecas[6].posicao = 6;
       // hipotecas[6].nome = "Av. Brig Faria"
        hipotecas[6].comprado = 5;
        hipotecas[6].aluguel = 24;
        hipotecas[6].valor = 240;

        hipotecas[7].posicao = 7;
      //  hipotecas[7].nome = "Compania Aviacao";
        hipotecas[7].comprado = 5;
        hipotecas[7].aluguel = 200;
        hipotecas[7].valor = 200;

        hipotecas[8].posicao = 8;
      //  hipotecas[8].nome = "Av rebouc";
        hipotecas[8].comprado = 5;
        hipotecas[8].aluguel = 22;
        hipotecas[8].valor = 220;

        hipotecas[9].posicao = 9;
       // hipotecas[9].nome = "Av 9 de Julho";
        hipotecas[9].comprado = 5;
        hipotecas[9].aluguel = 22;
        hipotecas[9].valor = 220;

        hipotecas[10].posicao = 10;
       // hipotecas[10].nome = "Prisao";
        hipotecas[10].comprado = 7;
        hipotecas[10].aluguel = 0;
        hipotecas[10].valor = 0;

        hipotecas[11].posicao = 11;
       // hipotecas[11].nome = "Av europa";
        hipotecas[11].comprado = 5;
        hipotecas[11].aluguel = 20;
        hipotecas[11].valor = 200;

         hipotecas[12].posicao =12;
       // hipotecas[12].nome = "Av europa";
        hipotecas[12].comprado = 6;
        hipotecas[12].aluguel = 0;
        hipotecas[12].valor = 0;

        hipotecas[13].posicao = 13;
       // hipotecas[13].nome = "Rua augusta";
        hipotecas[13].comprado = 5;
        hipotecas[13].aluguel = 18;
        hipotecas[13].valor = 180;

        hipotecas[14].posicao = 14;
       // hipotecas[14].nome = "Av Pacaembu";
        hipotecas[14].comprado = 5;
        hipotecas[14].aluguel = 18;
        hipotecas[14].valor = 180;

        hipotecas[15].posicao = 15;
       // hipotecas[15].nome = "Compania Taxi normal";
        hipotecas[15].comprado = 5;
        hipotecas[15].aluguel = 200;
        hipotecas[15].aluguel = 200;

        
        hipotecas[16].posicao = 16;
       // hipotecas[16].nome = "Sorte ou revez";
        hipotecas[16].comprado = 6;
        hipotecas[16].aluguel = 0;
        hipotecas[16].aluguel = 0;

        hipotecas[17].posicao = 17;
      //  hipotecas[17].nome = "Interlagos";
        hipotecas[17].comprado = 5;
        hipotecas[17].aluguel = 38;
        hipotecas[17].valor = 380;

        hipotecas[18].posicao = 18;
      //  hipotecas[18].nome = "Lucros";
        hipotecas[18].comprado = 8;
        hipotecas[18].aluguel = 0;
        hipotecas[18].valor = 0;

        hipotecas[19].posicao = 19;
       // hipotecas[19].nome = "Morumbi";
        hipotecas[19].comprado = 5;
        hipotecas[19].aluguel = 40;
        hipotecas[19].valor = 400;

         hipotecas[20].posicao = 20;
       // hipotecas[20].nome = "Parada livre";
        hipotecas[20].comprado = 7;
        hipotecas[20].aluguel = 0;
        hipotecas[20].valor = 0;

        hipotecas[21].posicao = 21;
       // hipotecas[21].nome = "Flamengo";
        hipotecas[21].comprado = 5;
        hipotecas[21].aluguel = 12;
        hipotecas[21].valor = 120;

        hipotecas[22].posicao = 22;
       // hipotecas[22].nome = "Sorte ou revez";
        hipotecas[22].comprado = 6;
        hipotecas[22].aluguel = 0;
        hipotecas[22].valor = 0;

        hipotecas[23].posicao = 23;
       // hipotecas[23].nome = "Botafogo";
        hipotecas[23].comprado = 5;
        hipotecas[23].aluguel = 10;
        hipotecas[23].valor = 100;

        hipotecas[24].posicao = 24;
       // hipotecas[24].nome = "Botafogo";
        hipotecas[24].comprado = 8;
        hipotecas[24].aluguel = 0;
        hipotecas[24].valor = 0;

        hipotecas[25].posicao = 25;
       // hipotecas[25].nome = "Compania Barcos";
        hipotecas[25].comprado = 5;
        hipotecas[25].aluguel = 200;
        hipotecas[25].valor = 200;

        hipotecas[26].posicao = 26;
      //  hipotecas[26].nome = "Av brasil";
        hipotecas[26].comprado = 5;
        hipotecas[26].aluguel = 16;
        hipotecas[26].valor = 160;

         hipotecas[27].posicao = 27;
      //  hipotecas[27].nome = "Sorte ou revez";
        hipotecas[27].comprado = 6;
        hipotecas[27].aluguel = 0;
        hipotecas[27].valor = 0;

        hipotecas[28].posicao = 28;
      //  hipotecas[28].nome = "Av paulista";
        hipotecas[28].comprado = 5;
        hipotecas[28].aluguel = 14;
        hipotecas[28].valor = 140;

        hipotecas[29].posicao = 29;
      //  hipotecas[29].nome = "Jardim Europa";
        hipotecas[29].comprado = 5;
        hipotecas[29].aluguel = 14;
        hipotecas[29].valor = 140;

           hipotecas[30].posicao = 30;
      //  hipotecas[30].nome = "Prisao";
        hipotecas[30].comprado = 8;
        hipotecas[30].aluguel = 0;
        hipotecas[30].valor = 0;

        hipotecas[31].posicao = 31;
      //  hipotecas[31].nome = "Copacabana";
        hipotecas[31].comprado = 5;
        hipotecas[31].aluguel = 26;
        hipotecas[31].valor = 260;

        hipotecas[32].posicao = 32;
     //   hipotecas[32].nome = "Compania Aviao";
        hipotecas[32].comprado = 5;
        hipotecas[32].aluguel = 200;
        hipotecas[32].valor = 200;

        hipotecas[33].posicao = 33;
       // hipotecas[33].nome = "Avia";
        hipotecas[33].comprado = 5;
        hipotecas[33].aluguel = 32;
        hipotecas[33].valor = 320;

        hipotecas[34].posicao = 34;
       // hipotecas[34].nome = "Av Atlantica";
        hipotecas[34].comprado = 5;
        hipotecas[34].aluguel = 30;
        hipotecas[34].valor = 300;

        hipotecas[35].posicao = 35;
      //  hipotecas[35].nome = "Compania Taxi aereo";
        hipotecas[35].comprado = 5;
        hipotecas[35].aluguel = 200;
        hipotecas[35].valor = 200;

        hipotecas[36].posicao = 36;
      //  hipotecas[36].nome = "Ipanema";
        hipotecas[36].comprado = 5;
        hipotecas[36].aluguel = 30;
        hipotecas[36].valor = 300;

        hipotecas[36].posicao = 37;
      //  hipotecas[36].nome = "Sorte ou revez";
        hipotecas[36].comprado = 6;
        hipotecas[36].aluguel = 0;
        hipotecas[36].valor = 0;

        hipotecas[38].posicao = 38;
      //  hipotecas[38].nome = "Jardim paulista";
        hipotecas[38].comprado = 5;
        hipotecas[38].aluguel = 28;
        hipotecas[38].valor = 280;

        hipotecas[39].posicao = 39;
     //   hipotecas[39].nome = "Brooklim";
        hipotecas[39].comprado = 5;
        hipotecas[39].aluguel = 26;
        hipotecas[39].valor = 260;

          

       

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
    int comprado;

    fim = quant_j;

   

    while (fim != 0)
    {
        int k,j,acc;
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
        
 

      
        for (i = 0; i < quant_j; i++)
        {
 
        gotoxy(50,15);
        printf("Rodar o dado jogador %d", i+1);


        c = getchar();
        dado(ale  = (rand()%6+1));
        jogadores[i].posicao += ale;


        if (jogadores[i].posicao == 40)
        {
           jogadores[i].posicao = 0;
               jogadores[0].prisao = 0;
                jogadores[1].prisao = 0;
                jogadores[2].prisao = 0;
                jogadores[3].prisao = 0;

        }
        if (jogadores[i].posicao > 40)
        {
           jogadores[i].posicao =  jogadores[i].posicao - 40;
                jogadores[0].prisao = 0;
                jogadores[1].prisao = 0;
                jogadores[2].prisao = 0;
                jogadores[3].prisao = 0;
                  gotoxy(13, y2+20);
                  printf("                                                                          ", i);
                  gotoxy(13, y2+7);
                  printf("\033[1m                  ");
           
        }
        char confirmar;

          limpar_jog();
            posicao_jogadores(y2, jogadores[i].posicao, quant_j,i);
        // =========== JOGADORES ====================
            

  // =========== JOGADORES ====================

          


// CAMINHO ------------------------------

// CASAS BONUS OU ONUS ==========================================
            
            
// CASAS BONUS OU ONUS ==========================================


// CASAS AINDA NÂO COMPRADAS ----------------------------------
        for (int g = 0; g < 40; g++)
        {
           if (jogadores[i].posicao == hipotecas[g].posicao && hipotecas[g].comprado == 5 || hipotecas[g].comprado > 5)
        {

             if (jogadores[i].posicao == 30)
            {
                jogadores[i].posicao = 10 ;
                 gotoxy(13, y2+6);
            printf("VA PARA PRISAO                           ");
            gotoxy(13, y2+7);
            printf("\033[1m                  ");
            jogadores[i].prisao = 1;

            }
            else if (jogadores[i].posicao == 2 || jogadores[i].posicao == 12 || jogadores[i].posicao == 16 || jogadores[i].posicao == 22 || jogadores[i].posicao == 27 || jogadores[i].posicao == 37 )
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");
            gotoxy(13, y2+6);
            printf("Sorte ou revez                          ");
            gotoxy(13, y2+7);
            printf("\033[1m                 ");
            }
             else if (jogadores[i].prisao == 1)
        {
            gotoxy(13, y2+20);
            printf("Jogador %d esta na prisao ate outro utrapasar a linha de comeco    ", i);
            gotoxy(13, y2+7);
            printf("\033[1m                  ");
            continue;
           
            
        }
            else  if (jogadores[i].posicao == 10)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("VISITANTE NA PRISAO            ");
            gotoxy(13, y2+7);
            printf("\033[1m                    ");
            }
             else if (jogadores[i].posicao == 18)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Lucro! Ganhe:                ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 200  ");
            jogadores[i].dinheiro = jogadores[i].dinheiro + 200 ;
            }
              else if (jogadores[i].posicao == 24)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague Imposto ?              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 200  ");
            jogadores[i].dinheiro = jogadores[i].dinheiro - 200;
            }

           if (jogadores[i].posicao == 39)
            {
                jogadores[i].dinheiro = jogadores[i].dinheiro + 200;
           
            }
     
     
         
           else if (jogadores[i].posicao == 5 || jogadores[i].posicao == 7 || jogadores[i].posicao == 15 || jogadores[i].posicao == 25 || jogadores[i].posicao == 32 || jogadores[i].posicao == 35 )
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");
            gotoxy(13, y2+6);
            printf("Deseja comprar A compania?             ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 200  ");
            }
           
             else if (jogadores[i].posicao == 1)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");
            gotoxy(13, y2+6);
            printf("Deseja comprar Leblon?           ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 100  ");
            }
             else  if (jogadores[i].posicao == 3)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");
            gotoxy(13, y2+6);
            printf("Deseja comprar Av Prst Vargas?       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 60");
            }
              else   if (jogadores[i].posicao == 4)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja comprar Av S. de cabana?       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 60  ");
            }
              else   if (jogadores[i].posicao == 6)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja comprar Av Brig. Faria?       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 240  ");
            }
               else   if (jogadores[i].posicao == 8)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja comprar Av Reboucas?       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 220  ");
            }
            else   if (jogadores[i].posicao == 9)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja comprar Av 9 de Julho?       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 220  ");
            }
          
              else  if (jogadores[i].posicao == 11)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja compra Av Europa?       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 200  ");
            }
            else if (jogadores[i].posicao == 13)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja compra Rua augusta?       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 180  ");
            }
            else if (jogadores[i].posicao == 14)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja compra Rua Pacaembu?       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 180  ");
            }
            else if (jogadores[i].posicao == 17)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");

            gotoxy(13, y2+6);
            printf("Deseja compra Interlagos?       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 380  ");
            }
           
            else if (jogadores[i].posicao == 19)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja compra Morumbi?       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 400  ");
            }
             else if (jogadores[i].posicao == 20)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Parada LIVRE              ");
            gotoxy(13, y2+7);
            printf("\033[1m                   ");
            }
              else if (jogadores[i].posicao == 21)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja compra Flamengo?              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 120  ");
            }
              else if (jogadores[i].posicao == 23)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja compra Botafogo?              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 100  ");
            }
           
             else if (jogadores[i].posicao == 26)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja comprar Av Brasil ?              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 160  ");
         
            }
              else if (jogadores[i].posicao == 28)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja comprar Av Paulista ?              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 140  ");

            }
             else if (jogadores[i].posicao == 29)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja comprar Jardim Europa ?              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 140  ");

            }
              else if (jogadores[i].posicao ==  31)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja comprar Capacapana ?              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 260  ");

            }
                          else if (jogadores[i].posicao ==  33)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja comprar Av vieira Souto ?              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 320  ");

            }
                     else if (jogadores[i].posicao ==  34)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja comprar Av Atlantica  ?              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 300  ");

            }
                    else if (jogadores[i].posicao ==  36)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja comprar Ipanema  ?              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 300  ");

            }
                  else if (jogadores[i].posicao ==  38)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja comprar Jardim Paulista  ?              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 280  ");

            }
                 else if (jogadores[i].posicao ==  39)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Deseja comprar Brooklin  ?              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 260  ");

            }
 }
        }

         for (int h = 0; h < 40; h++)
        {
           if (jogadores[i].posicao == hipotecas[h].posicao && hipotecas[h].comprado != 5)
        {

           int acc_1;

           if (jogadores[i].posicao == 39)
            {
                jogadores[i].dinheiro = jogadores[i].dinheiro + 200;
           
            }
     
     
         
           else if (jogadores[i].posicao == 5 || jogadores[i].posicao == 7 || jogadores[i].posicao == 15 || jogadores[i].posicao == 25 || jogadores[i].posicao == 32 || jogadores[i].posicao == 35 )
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");
            gotoxy(13, y2+6);
            printf("Ja foi comprado pague o jogador: %d     ", hipotecas[h].comprado + 1);
            gotoxy(13, y2+7);
            acc_1 = 100 * ale;
            printf("\033[1m valor pago de : BI$ %d  ", acc_1);

            jogadores[i].dinheiro = jogadores[i].dinheiro - acc_1;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + acc_1;


            }
           
             else if (jogadores[i].posicao == 1)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");
            gotoxy(13, y2+6);
            printf("Pague o Aluguel           ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 10     ");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

            }
             else  if (jogadores[i].posicao == 3)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");
            gotoxy(13, y2+6);
            printf("Pague o aluguel       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 6");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

            }
              else   if (jogadores[i].posicao == 4)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o Aluguel       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 6  ");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

            }
              else   if (jogadores[i].posicao == 6)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o Aluguel:       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 24  ");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

            }
               else   if (jogadores[i].posicao == 8)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o Aluguel              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 22  ");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

            }
            else   if (jogadores[i].posicao == 9)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o Aluguel            ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 22  ");
            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

            }
          
              else  if (jogadores[i].posicao == 11)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o aluguel       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 20  ");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

            }
            else if (jogadores[i].posicao == 13)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o alguel       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 18  ");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

            }
            else if (jogadores[i].posicao == 14)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o aluguel       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 18  ");
            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

            }
            else if (jogadores[i].posicao == 17)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");

            gotoxy(13, y2+6);
            printf("Pague o aluguel       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 38  ");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

            }
           
            else if (jogadores[i].posicao == 19)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o aluguel       ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 40  ");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

            }
             else if (jogadores[i].posicao == 20)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Parada LIVRE              ");
            gotoxy(13, y2+7);
            printf("\033[1m                   ");
            }
              else if (jogadores[i].posicao == 21)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o Aluguel              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 12  ");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

            }
              else if (jogadores[i].posicao == 23)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague aluguel:              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 10  ");
            
            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

            }
           
             else if (jogadores[i].posicao == 26)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o Aluguel:              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 16  ");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;

         
            }
              else if (jogadores[i].posicao == 28)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o Aluguel              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 14  ");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;


            }
             else if (jogadores[i].posicao == 29)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o aluguel              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 14 ");

               jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;


            }
              else if (jogadores[i].posicao ==  31)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o Aluguel              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 26  ");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;


            }
                          else if (jogadores[i].posicao ==  33)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o aluguel              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 32  ");

               jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;


            }
                     else if (jogadores[i].posicao ==  34)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o aluguel              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 30  ");
               jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;


            }
                    else if (jogadores[i].posicao ==  36)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o Aluguel              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 30  ");
               jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;


            }
                  else if (jogadores[i].posicao ==  38)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o aluguel              ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 28  ");
            
            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;


            }
                 else if (jogadores[i].posicao ==  39)
            {
            gotoxy(13, y2+6);
            printf("                                                      ");
            gotoxy(13, y2+7);
            printf("\033[1m                                                ");   
            gotoxy(13, y2+6);
            printf("Pague o aluguel             ");
            gotoxy(13, y2+7);
            printf("\033[1m Valor : BI$ 26  ");

            jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[h].aluguel;
            jogadores[hipotecas[h].comprado].dinheiro = jogadores[hipotecas[h].comprado].dinheiro + hipotecas[h].aluguel;


            }
 }
        }
            
            
         if (i == 0)
            {
               acc =   jogadores[0].posicao;
            gotoxy(13, y2+2);
	         printf("\033[1mJogador 1 ");
            gotoxy(13, y2+3);
	         printf("\033[1mCor Vermelho   ");
            gotoxy(13, y2+4);
	         printf("\033[1mDinheiro: %d    ", jogadores[0].dinheiro);
            gotoxy(13, y2+5);
            printf("jogador esta na casa: %d     ", acc);

            if (hipotecas[acc].comprado != 0 && hipotecas[acc].comprado == 5 )
            {
        
            gotoxy(13, y2+9);
            printf("Comprar digite s: ");
            gotoxy(33, y2+9);
            scanf("%c", &confirmar);
               if (confirmar == 's')
                  {
                     hipotecas[acc].comprado = i;
                     jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[acc].valor;
                        gotoxy(13, y2+9);
                        printf("        Comprado               ");
                        gotoxy(33, y2+9);
                        printf("        ");
                        
                  }
                  else
                     {
                           gotoxy(13, y2+9);
                           printf("                       ");
                           gotoxy(33, y2+9);
                           printf("                    ");
                     }
         

            }
            
            
             if (hipotecas[acc].comprado == 0)
            {
        
            gotoxy(13, y2+9);
            printf("Comprar hotel? -> %d <-: ", i);
 
               jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[acc].valor + 50;
               hipotecas[acc].aluguel = hipotecas[acc].aluguel *3;
                  gotoxy(13, y2+9);
                  printf("                       ");
                  gotoxy(33, y2+9);
                  printf("  ");

            }
            
            
            
            
            confirmar = "";
            acc = 0;
            }
           
        
          else if (i == 1)
            {
               acc =   jogadores[1].posicao;

              gotoxy(13, y2+2);
	        printf("\033[1mJogador 2  ");
            gotoxy(13, y2+3);
	        printf("\033[1mCor azul   ");
            gotoxy(13, y2+4);
	        printf("\033[1mDinheiro: %d    ", jogadores[1].dinheiro);
             gotoxy(13, y2+5);
            printf("jogador esta na casa: %d     ", acc);
          
              if (hipotecas[acc].comprado != 0 && hipotecas[acc].comprado == 5 )
            {
        
            gotoxy(13, y2+9);
            printf("Comprar digite s: ");
            gotoxy(33, y2+9);
            scanf("%c", &confirmar);
               if (confirmar == 's')
                  {
                     hipotecas[acc].comprado = i;
                     jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[acc].valor;
                        gotoxy(13, y2+9);
                        printf("        Comprado               ");
                        gotoxy(33, y2+9);
                        printf("        ");
                        
                  }
                  else
                     {
                           gotoxy(13, y2+9);
                           printf("                       ");
                           gotoxy(33, y2+9);
                           printf("                    ");
                     }
         

            }
            
            
             if (hipotecas[acc].comprado == 1)
            {
        
            gotoxy(13, y2+9);
            printf("Comprar hotel? -> %d <-: ", i);
 
               jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[acc].valor + 50;
               hipotecas[acc].aluguel = hipotecas[acc].aluguel *3;
                  gotoxy(13, y2+9);
                  printf("                       ");
                  gotoxy(33, y2+9);
                  printf("  ");

            }
            
            
            
            
            confirmar = "";
            acc = 0;
            }
             if (i == 2)
            {
            gotoxy(13, y2+2);
	        printf("\033[1mJogador 3   ");
            gotoxy(13, y2+3);
	        printf("\033[1mCor verde   ");
            gotoxy(13, y2+4);
	        printf("\033[1mDinheiro: %d    ", jogadores[2].dinheiro);
             gotoxy(13, y2+5);
            printf("jogador esta na casa: %d      ", jogadores[2].posicao);

               if (hipotecas[acc].comprado != 0 && hipotecas[acc].comprado == 5 )
            {
        
            gotoxy(13, y2+9);
            printf("Comprar digite s: ");
            gotoxy(33, y2+9);
            scanf("%c", &confirmar);
               if (confirmar == 's')
                  {
                     hipotecas[acc].comprado = i;
                     jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[acc].valor;
                        gotoxy(13, y2+9);
                        printf("        Comprado               ");
                        gotoxy(33, y2+9);
                        printf("        ");
                        
                  }
                  else
                     {
                           gotoxy(13, y2+9);
                           printf("                       ");
                           gotoxy(33, y2+9);
                           printf("                    ");
                     }
         

            }
            
            
             if (hipotecas[acc].comprado == 2)
            {
        
            gotoxy(13, y2+9);
            printf("Comprar hotel? -> %d <-: ", i);
 
               jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[acc].valor + 50;
               hipotecas[acc].aluguel = hipotecas[acc].aluguel *3;
                  gotoxy(13, y2+9);
                  printf("                       ");
                  gotoxy(33, y2+9);
                  printf("  ");

            }
            
            
            
            
            confirmar = "";
            acc = 0;
            }
             if (i == 3)
            {
            gotoxy(13, y2+2);
	        printf("\033[1mJogador 4  ");
            gotoxy(13, y2+3);
	        printf("\033[1mCor amarelo   ");
            gotoxy(13, y2+4);
	        printf("\033[1mDinheiro: %d    ", jogadores[3].dinheiro);
            gotoxy(13, y2+5);
            printf("jogador esta na casa: %d     ", jogadores[3].posicao);

               if (hipotecas[acc].comprado != 0 && hipotecas[acc].comprado == 5 )
            {
        
            gotoxy(13, y2+9);
            printf("Comprar digite s: ");
            gotoxy(33, y2+9);
            scanf("%c", &confirmar);
               if (confirmar == 's')
                  {
                     hipotecas[acc].comprado = i;
                     jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[acc].valor;
                        gotoxy(13, y2+9);
                        printf("        Comprado               ");
                        gotoxy(33, y2+9);
                        printf("        ");
                        
                  }
                  else
                     {
                           gotoxy(13, y2+9);
                           printf("                       ");
                           gotoxy(33, y2+9);
                           printf("                    ");
                     }
         

            }
            
            
             if (hipotecas[acc].comprado == 3)
            {
        
            gotoxy(13, y2+9);
            printf("Comprar hotel? -> %d <-: ", i);
 
               jogadores[i].dinheiro = jogadores[i].dinheiro - hipotecas[acc].valor + 50;
               hipotecas[acc].aluguel = hipotecas[acc].aluguel *3;
                  gotoxy(13, y2+9);
                  printf("                       ");
                  gotoxy(33, y2+9);
                  printf("  ");

            }
            
            
            
            
            confirmar = "";
            acc = 0;
            }
        


        
       



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