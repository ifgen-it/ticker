#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <Windows.h> // for Sleep - in ms

//#include <unistd.h> // for sleep
#include <time.h> // for nanosleep
// #include "Letters.cpp"

using namespace std;

	// timespec tw = {0, 300000000 };   -- for nanosleep
	// timespec tr;

const int Rows = 5;

int DispPtr = 0;
const int DispSize = 6;

const int LRows = 5;
const int LCols = 9;

const int MSCols = 1;
const int Cols = (LCols - 1 + MSCols)*DispSize;
char Display [ Rows ][ Cols ] ;

      	    char MiniSpace[LRows][MSCols] = {
        ' ', ' ', ' ', ' ', ' '
         };
         

			char A[LRows][LCols] = {

				"   AA   ",
				"  AAAA  ",
				" AA  AA ",
				"AAAAAAAA",
				"AA    AA"
			};

			char B[LRows][LCols] = {

				"BBBBBBB ",
				"BB    BB",
				"BBBBBBB ",
				"BB    BB",
				"BBBBBBBB"
			};
			char C[LRows][LCols] = {

				"CCCCCCCC",
				"CC      ",
				"CC      ",
				"CC      ",
				"CCCCCCCC"
			};
			char D[LRows][LCols] = {

				"DDDDDDD ",
				"DD    DD",
				"DD    DD",
				"DD    DD",
				"DDDDDDD "
			};
			char E[LRows][LCols] = {

				"EEEEEEEE",
				"EE      ",
				"EEEEEEEE",
				"EE      ",
				"EEEEEEEE"
			};
			char F[LRows][LCols] = {

				"FFFFFFFF",
				"FF      ",
				"FFFFFFFF",
				"FF      ",
				"FF      "
			};
			char G[LRows][LCols] = {

				"GGGGGGGG",
				"GG      ",
				"GG  GGGG",
				"GG    GG",
				"GGGGGGGG"
			};
			char H[LRows][LCols] = {

				"HH    HH",
				"HH    HH",
				"HHHHHHHH",
				"HH    HH",
				"HH    HH"
			};
			char I[LRows][LCols] = {

				"   II   ",
				"   II   ",
				"   II   ",
				"   II   ",
				"   II   "
			};
			char J[LRows][LCols] = {

				"      JJ",
				"      JJ",
				"      JJ",
				"JJ    JJ",
				" JJJJJJ "
			};

			char K[LRows][LCols] = {

				"KK    KK",
				"KK   KK ",
				"KKKKKK  ",
				"KK   KK ",
				"KK    KK"
			};
			char L[LRows][LCols] = {

				"LL      ",
				"LL      ",
				"LL      ",
				"LL      ",
				"LLLLLLLL"
			};
			char M[LRows][LCols] = {

				"MM    MM",
				"MMM  MMM",
				"MM MM MM",
				"MM    MM",
				"MM    MM"
			};

			char N[LRows][LCols] = {
				"NNN   NN",
				"NNNN  NN",
				"NNNNNNNN",
				"NN  NNNN",
				"NN   NNN"
			};
			char O[LRows][LCols] = {

				"OOOOOOOO",
				"OO    OO",
				"OO    OO",
				"OO    OO",
				"OOOOOOOO"
			};
			char P[LRows][LCols] = {

				"PPPPPPPP",
				"PP    PP",
				"PPPPPPPP",
				"PP      ",
				"PP      "
			};
			char Q[LRows][LCols] = {

				"EEEEEEEE",
				"EE      ",
				"EEEEEEEE",
				"EE      ",
				"EEEEEEEE"
			};
			char R[LRows][LCols] = {

				"RRRRRRRR",
				"RR    RR",
				"RRRRRRRR",
				"RR   RR ",
				"RR    RR"
			};
			char S[LRows][LCols] = {

				"SSSSSSSS",
				"SS      ",
				"SSSSSSSS",
				"      SS",
				"SSSSSSSS"
			};
			char T[LRows][LCols] = {

				"TTTTTTTT",
				"   TT   ",
				"   TT   ",
				"   TT   ",
				"   TT   "
			};
			char U[LRows][LCols] = {

				"UU    UU",
				"UU    UU",
				"UU    UU",
				"UU    UU",
				" UUUUUU "
			};
			char V[LRows][LCols] = {

				"VV    VV",
				"VV    VV",
				" VV  VV ",
				"  VVVV  ",
				"   VV   "
			};
			char W[LRows][LCols] = {

				"WW WW WW",
				"WW WW WW",
				"WWWWWWWW",
				" WWWWWW ",
				" WW  WW "
			};
			char X[LRows][LCols] = {

				"XX    XX",
				" XX  XX ",
				"  XXXX  ",
				" XX  XX ",
				"XX    XX"
			};
			char Y[LRows][LCols] = {

				"YY    YY",
				" YY  YY ",
				"  YYYY  ",
				"   YY   ",
				"   YY   "
			};
			char Z[LRows][LCols] = {

				"ZZZZZZZZ",
				"     ZZ ",
				"   ZZ   ",
				" ZZ    ",
				"ZZZZZZZZ"
			};
			char ULine[LRows][LCols] = {

				"        ",
				"        ",
				"        ",
				"        ",
				"________"
			};
			char Exclam[LRows][LCols] = {

				"   !!   ",
				"   !!   ",
				"   !!   ",
				"        ",
				"   !!   "
			};
			char Quest[LRows][LCols] = {

				"  ????  ",
				"      ??",
				"      ??",
				"   ??   ",
				"   ??   "
			};
			char Plus[LRows][LCols] = {

				"   ++   ",
				"   ++   ",
				"++++++++",
				"   ++   ",
				"   ++   "
			};


void PrintDisplay (char Display[ ][ Cols ], const int Rows, const int Cols);

void TruncDisplay (char Display[ ][ Cols ], const int Rows, const int Cols);

void AddLetter (char Letter[ ][ LCols ], const int LRows, const int LCols);

void AddMiniSpace(char MiniSpace[ ][ MSCols ], const int LRows, const int MSCols);

void LoadWord (char Word[ ]);

void LoadLetter (char* p);

void PrintWord (char Word[ ]);

void TickerWord (char Word[ ]);

void TickerDisplay (char Display[ ][ Cols ], const int Rows, const int Cols);

int main(){

  
   
	
	
	char Word[ 100 ];
	
	cout << "Input string: ";
	gets(Word);
	
	cout << endl;
	cout << "Preparing...";
	cout << endl << endl;
	Sleep(3000);
	
	TickerWord (Word );
	

		
	return 0;
}


// печать массива
void PrintDisplay (char Display[ ][ Cols ], const int Rows, const int Cols){
		for (int i = 0; i < Rows ; i++){
			for (int j =0; j < Cols; j++){
	        	cout << Display[ i ][ j ];
        	}
        	cout << endl;
		}	
}

// очистка дисплея
void TruncDisplay (char Display[ ][ Cols ], const int Rows, const int Cols){
		for (int i = 0; i < Rows ; i++){
			for (int j =0; j < Cols; j++){
	        	Display[ i ][ j ] = ' ';
        	}
		}	
		DispPtr = 0;
}

// добавить букву в дисплей
void AddLetter (char Letter[ ][ LCols ], const int LRows, const int LCols){
	
		for (int i = 0; i < LRows ; i++){
			for (int j =0; j < LCols - 1; j++){	     
				Display[ i ][ DispPtr + j ] = Letter [ i ] [ j ];
        	}
		}	
		DispPtr += LCols - 1;
}

// добавить децл в дисплей
void AddMiniSpace(char MiniSpace[ ][ MSCols ], const int LRows, const int MSCols){
	
		for (int i = 0; i < LRows ; i++){
			for (int j =0; j < MSCols; j++){	     
				Display[ i ][ DispPtr + j ] = MiniSpace [ i ] [ j ];
        	}
		}	
		DispPtr += MSCols;
}

//копирование слова в Дисп

void LoadWord (char Word[ ]){
	char* p = &Word[0];
	while (*p){
		
		switch (*p){
		case 'E':
		    	AddLetter(E,  LRows, LCols);
	       	break;
		case 'V':
		   	AddLetter(V,  LRows, LCols);
               break;
     	case 'G':
		   	AddLetter(G,  LRows, LCols);
               break;
     	case 'N':
		   	AddLetter(N, LRows, LCols);
               break;
         default:      
	       	AddLetter(G,  LRows, LCols);
	       	break;
		}
				AddMiniSpace(MiniSpace,  LRows, MSCols);
		
		p++;
	}
}

//копирование буквы в Дисп

void LoadLetter (char* p){
	
		switch (*p){
		case 'A':
		case 'a':
		    	AddLetter(A,  LRows, LCols);
	       	break;
	    case 'B':
	    case 'b':
		    	AddLetter(B,  LRows, LCols);
	       	break;
	     case 'C':
	     case 'c':
		    	AddLetter(C,  LRows, LCols);
	       	break;
	     case 'D':
	     case 'd':
		    	AddLetter(D,  LRows, LCols);
	       	break;
	     case 'E':
	     case 'e':
		    	AddLetter(E,  LRows, LCols);
	       	break;
	 	case 'F':
	 	case 'f':
		    	AddLetter(F,  LRows, LCols);
                break;
     	case 'G':
     	case 'g':
		   	AddLetter(G,  LRows, LCols);
               break;
     	case 'H':
     	case 'h':
		   	AddLetter(H, LRows, LCols);
               break;
         case 'I':
         case 'i':
		    	AddLetter(I,  LRows, LCols);
	       	break;
	    case 'J':
	    case 'j':
		    	AddLetter(J,  LRows, LCols);
	       	break;
	     case 'K':
	     case 'k':
		    	AddLetter(K,  LRows, LCols);
	       	break;
	     case 'L':
	     case 'l':
		    	AddLetter(L,  LRows, LCols);
	       	break;
	     case 'M':
	     case 'm':
		    	AddLetter(M,  LRows, LCols);
	       	break;
	 	case 'N':
	 	case 'n':
		    	AddLetter(N, LRows, LCols);
                break;
     	case 'O':
     	case 'o':
		   	AddLetter(O,  LRows, LCols);
               break;
     	case 'P':
     	case 'p':
		   	AddLetter(P, LRows, LCols);
               break;
         case 'Q':
         case 'q':
		    	AddLetter(Q,  LRows, LCols);
	       	break;
	    case 'R':
	    case 'r':
		    	AddLetter(R, LRows, LCols);
	       	break;
	     case 'S':
	     case 's':
		    	AddLetter(S,  LRows, LCols);
	       	break;
	     case 'T':
	     case 't':
		    	AddLetter(T,  LRows, LCols);
	       	break;
	     case 'U':
	     case 'u':
		    	AddLetter(U,  LRows, LCols);
	       	break;
	 	case 'V':
	 	case 'v':
		    	AddLetter(V,  LRows, LCols);
                break;
     	case 'W':
     	case 'w':
		   	AddLetter(W,  LRows, LCols);
               break;
     	case 'X':
     	case 'x':
		   	AddLetter(X, LRows, LCols);
               break;
     	case 'Y':
     	case 'y':
		   	AddLetter(Y, LRows, LCols);
               break;
     	case 'Z':
     	case 'z':
		   	AddLetter(Z, LRows, LCols);
               break;
      	case '_':
		   	AddLetter(ULine, LRows, LCols);
               break;
      	case '!':
		   	AddLetter(Exclam, LRows, LCols);
               break;
      	case '?':
		   	AddLetter(Quest, LRows, LCols);
               break;
      	case '+':
		   	AddLetter(Plus, LRows, LCols);
               break;
         default:      
	       	AddLetter(ULine,  LRows, LCols);
	       	break;
		}
					AddMiniSpace(MiniSpace,  LRows, MSCols);
}

	//Печать слова

void PrintWord (char Word[ ]){
	char* p = &Word[0];
	
	while (*p){
		
		TruncDisplay(Display, Rows, Cols);
		
	     for (int i = 0; i < DispSize; i++){
	      	if (*p){		
               	LoadLetter (p);
	               p++;
	       	}
	       	else {
	       		break;
	       	}
	     }
         PrintDisplay(Display, Rows, Cols);
         cout << endl;
 	}
}

	//Бегущая строка

void TickerWord (char Word[ ]){
	char* p = &Word[0];
	char* pStart = p;
	TruncDisplay(Display, Rows, Cols);	
while ( true ){
	if (*p){	
		DispPtr = 0;
		int i = 0;
	     while ( i < DispSize ){
	      	if (*p){		
               	LoadLetter (p);
               	system("cls");
               	TickerDisplay(Display, Rows, Cols);
              // 	nanosleep(&tw, &tr);
				Sleep(200);
	               p++;
	               i++;
	       	}
	       	else {
	       		p = pStart;
	       	}
	     }
 	}
 	else {
 		p = pStart;
 	}
}
}

// печать бегущей строки
void TickerDisplay (char Display[ ][ Cols ], const int Rows, const int Cols){
		for (int i = 0; i < Rows ; i++){
			for (int j =DispPtr; j < Cols; j++){
	        	cout << Display[ i ][ j ];
        	}
        	for (int j = 0; j < DispPtr; j++){
	        	cout << Display[ i ][ j ];
        	}  	
        	cout << endl;
		}	
}