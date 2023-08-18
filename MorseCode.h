/*************************************************
 	lcd.h: Header file for 16x2 LCD interfacing  
**************************************************/
//Functions contained in this header file

void dashtone(void);																//Dash tone generator
void dottone(void);																	//Dot tone generator


void morsea(void);																	//morse code for A
void morseb(void);																	//morse code for B
void morsec(void);																	//morse code for C
void morsed(void);																	//morse code for D
void morsee(void);																	//morse code for E
//Function definitions

void dashtone(void) 
{ 
	
	unsigned i;
	for(i=0;i< 1378 ;i++){
	P0_7 = ~P0_7;
	msdelay(1); 		
		/* This function is a welcome change over the hardwork in the delay subroutines in earlier labs :D*/
	}
}
void dottone(void)
{ 
  unsigned i;
	for(i=0;i< 689 ;i++){
	P0_7 = ~P0_7;
	msdelay(1); 		
		/* This function is a welcome change over the hardwork in the delay subroutines in earlier labs :D*/
	}

}

void morsea(void)// .-
{
	dottone();
	P0_7=0;
	msdelay(1000);
	dashtone();
	P0_7=0;
}

void morseb(void)// -...
{
// Insert
	dashtone();
	P0_7=0;
	msdelay(1000);
	dottone();
	P0_7=0;
	msdelay(1000);
	dottone();
	P0_7=0;
	msdelay(1000);
	dottone();
	P0_7=0;
	
}
void morsec(void)// -.-.
{
// Insert
	dashtone();
	P0_7=0;
	msdelay(1000);
	dottone();
	P0_7=0;
	msdelay(1000);
	dashtone();
	P0_7=0;
	msdelay(1000);
	P0_7=0;
	dottone();
	P0_7=0;
	
}
void morsed(void)// -..
{
// Insert
	dashtone();
	P0_7=0;
	msdelay(1000);
	dottone();
	P0_7=0;
	msdelay(1000);
	dottone();
	P0_7=0;
}
void morsee(void)// .
{
// Insert
	dottone();
	P0_7=0;
}
