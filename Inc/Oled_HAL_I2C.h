void Oled_Init (void);
void Oled_Refresh (void);//Atualiza a tela!!!!
char Print_String(short linha,short coluna,unsigned char *string);
void Oled_Printf (int linha, const char *format,...);
void Plot_Line(signed char xi,signed char yi,signed char xf,signed char yf,char valor);
void Plot_xy (unsigned char x,unsigned char y,char valor,char *vetorp,char len);
void Plot_BMP(unsigned char x,unsigned char y,unsigned char xs,unsigned char ys,unsigned char* bmp);

extern unsigned char oled_string[];
/* Exemplos
	Oled_Printf(1,"Teste %i %1.1f",123,4.5);
  Print_String(1,0,"ABC");//8 Linhas por 21 colunas
	Print_String(3,4,"123");
	Oled_xy(  0, 0,1);//128 x 64 Pixels
	Oled_xy(  0,31,1);//(0 a 127)x e (0 a 63)y
	Oled_xy(127, 0,1);
	Oled_xy(127,31,1);
	Print_String(2,4,"abc");
	char vetor[32]={0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7,8,0,1,2,3,4};
	Plot_xy(70,10,1,vetor,31);//Plota o gráfico apartir da origem
	Plot_xy(64,10,0,vetor,31);//Apaga a gráfico plotado	
*/
