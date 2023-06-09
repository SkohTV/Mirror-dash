#include "fileCreator.h"





//! REMINDER : Files are written in a custom format
//? Here is the said format :
// char type -> 1 int posY -> 1 int summon
// And then start again
LinkedList *readFile(char *dir){
	FILE *fp = fopen(dir, "r");

	if (fp == NULL){ printf("Error: Cannot open map.level file"); }

	LinkedList *LL = NULL;

	char coolbuffer;

	// Create while loop
	while ((coolbuffer = getc(fp)) != EOF){
		ItemEntity *new = malloc(sizeof(ItemEntity));
		new->type = coolbuffer;
		new->posX = WINDOW_WIDTH+300;
		new->posY = getw(fp);
		new->summon = getw(fp);
		LLpush(&LL, new);
	}

	fclose(fp);
	return LL;
}




//* PLS, do NOT read ANYTHING under this line
//* Only darkness awaits down below...
// (Thoses functions will never be called, their sole purpose is to build levels)


//! Manual creation of level
void createFile1(){
	FILE *fp = fopen("assets/maps/first/map.level", "w");


	putc(spikeUp, fp);
	putw(790, fp);
	putw(225, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(440, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(545, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(655, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(755, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(855, fp);

	putc(gravityPadUp, fp);
	putw(790, fp);
	putw(1005, fp);

	putc(spikeLeft, fp);
	putw(790, fp);
	putw(1045, fp);

	putc(spikeLeft, fp);
	putw(710, fp);
	putw(1045, fp);
	
	putc(spikeLeft, fp);
	putw(630, fp);
	putw(1045, fp);

	putc(square, fp);
	putw(790, fp);
	putw(1055, fp);

	putc(square, fp);
	putw(710, fp);
	putw(1055, fp);
	
	putc(square, fp);
	putw(630, fp);
	putw(1055, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(1115, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(1215, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(1315, fp);

	putc(jumpCircle, fp);
	putw(260, fp);
	putw(1415, fp);

	putc(square, fp);
	putw(150, fp);
	putw(1430, fp);

	putc(spikeDown, fp);
	putw(230, fp);
	putw(1430, fp);

	putc(jumpCircle, fp);
	putw(260, fp);
	putw(1515, fp);

	putc(square, fp);
	putw(150, fp);
	putw(1530, fp);

	putc(spikeDown, fp);
	putw(230, fp);
	putw(1530, fp);

	putc(jumpCircle, fp);
	putw(260, fp);
	putw(1615, fp);

	putc(square, fp);
	putw(150, fp);
	putw(1630, fp);

	putc(spikeDown, fp);
	putw(230, fp);
	putw(1630, fp);

	putc(jumpCircle, fp);
	putw(260, fp);
	putw(1715, fp);

	putc(jumpCircle, fp);
	putw(460, fp);
	putw(1740, fp);

	putc(square, fp);
	putw(150, fp);
	putw(1740, fp);

	putc(square, fp);
	putw(230, fp);
	putw(1740, fp);

	putc(spikeDown, fp);
	putw(310, fp);
	putw(1740, fp);

	putc(endOfGame, fp);
	putw(790, fp);
	putw(1760, fp);


	fclose(fp);
}



//! Manual creation of level
void createFile2(){
	FILE *fp = fopen("assets/maps/second/map.level", "w");


	putc(jumpCircle, fp);
	putw(650, fp);
	putw(90, fp);

	putc(jumpPadUp, fp);
	putw(790, fp);
	putw(100, fp);

	putc(square, fp);
	putw(650, fp);
	putw(110, fp);

	putc(square, fp);
	putw(650, fp);
	putw(120, fp);

	putc(square, fp);
	putw(650, fp);
	putw(130, fp);

	putc(square, fp);
	putw(650, fp);
	putw(140, fp);

	putc(jumpCircle, fp);
	putw(450, fp);
	putw(140, fp);

	putc(square, fp);
	putw(650, fp);
	putw(150, fp);

	putc(spikeUp, fp);
	putw(570, fp);
	putw(150, fp);

	putc(square, fp);
	putw(650, fp);
	putw(160, fp);

	putc(spikeUp, fp);
	putw(570, fp);
	putw(160, fp);

	putc(gravityPadUp, fp);
	putw(790, fp);
	putw(200, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(230, fp);

	putc(gravityCircle, fp);
	putw(370, fp);
	putw(230, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(230, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(240, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(240, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(250, fp);

	putc(spikeLeft, fp);
	putw(700, fp);
	putw(280, fp);

	putc(square, fp);
	putw(700, fp);
	putw(290, fp);

	putc(spikeUp, fp);
	putw(620, fp);
	putw(290, fp);

	putc(square, fp);
	putw(700, fp);
	putw(300, fp);

	putc(spikeUp, fp);
	putw(620, fp);
	putw(300, fp);

	putc(square, fp);
	putw(700, fp);
	putw(310, fp);

	putc(spikeUp, fp);
	putw(620, fp);
	putw(310, fp);

	putc(jumpCircle, fp);
	putw(650, fp);
	putw(325, fp);

	putc(square, fp);
	putw(700, fp);
	putw(340, fp);

	putc(spikeDown, fp);
	putw(780, fp);
	putw(340, fp);

	putc(square, fp);
	putw(700, fp);
	putw(350, fp);

	putc(square, fp);
	putw(700, fp);
	putw(360, fp);

	putc(square, fp);
	putw(700, fp);
	putw(370, fp);

	putc(square, fp);
	putw(700, fp);
	putw(380, fp);

	putc(square, fp);
	putw(700, fp);
	putw(390, fp);

	putc(spikeLeft, fp);
	putw(620, fp);
	putw(390, fp);

	putc(square, fp);
	putw(620, fp);
	putw(400, fp);

	putc(square, fp);
	putw(620, fp);
	putw(410, fp);

	putc(square, fp);
	putw(620, fp);
	putw(420, fp);

	putc(square, fp);
	putw(620, fp);
	putw(430, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(440, fp);

	putc(square, fp);
	putw(620, fp);
	putw(440, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(450, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(460, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(470, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(480, fp);

	putc(jumpCircle, fp);
	putw(620, fp);
	putw(480, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(490, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(500, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(510, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(520, fp);

	putc(square, fp);
	putw(620, fp);
	putw(520, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(530, fp);

	putc(square, fp);
	putw(620, fp);
	putw(530, fp);

	putc(square, fp);
	putw(620, fp);
	putw(540, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(550, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(560, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(570, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(580, fp);

	putc(endOfGame, fp);
	putw(790, fp);
	putw(600, fp);


	fclose(fp);
}



//! Manual creation of level
void createFile3(){
	FILE *fp = fopen("assets/maps/third/map.level", "w");


	putc(jumpCircle, fp);
	putw(650, fp);
	putw(110, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(120, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(120, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(130, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(130, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(140, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(140, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(150, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(150, fp);

	putc(jumpCircle, fp);
	putw(500, fp);
	putw(150, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(160, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(160, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(170, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(170, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(180, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(180, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(190, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(190, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(200, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(200, fp);

	putc(gravityCircle, fp);
	putw(650, fp);
	putw(200, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(210, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(210, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(220, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(220, fp);

	putc(jumpCircle, fp);
	putw(400, fp);
	putw(220, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(230, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(230, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(240, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(240, fp);

	putc(gravityCircle, fp);
	putw(500, fp);
	putw(240, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(250, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(250, fp);

	putc(jumpCircle, fp);
	putw(650, fp);
	putw(250, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(260, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(260, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(270, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(270, fp);

	putc(jumpCircle, fp);
	putw(550, fp);
	putw(270, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(280, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(280, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(290, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(290, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(300, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(300, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(310, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(310, fp);

	putc(square, fp);
	putw(600, fp);
	putw(310, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(320, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(320, fp);

	putc(square, fp);
	putw(600, fp);
	putw(320, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(330, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(330, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(340, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(340, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(350, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(350, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(360, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(360, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(370, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(370, fp);

	putc(gravityCircle, fp);
	putw(650, fp);
	putw(370, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(380, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(380, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(390, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(390, fp);

	putc(gravityCircle, fp);
	putw(350, fp);
	putw(390, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(400, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(400, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(410, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(410, fp);

	putc(gravityCircle, fp);
	putw(650, fp);
	putw(410, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(420, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(420, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(430, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(430, fp);

	putc(gravityCircle, fp);
	putw(350, fp);
	putw(430, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(440, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(440, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(450, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(450, fp);

	putc(square, fp);
	putw(600, fp);
	putw(450, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(460, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(460, fp);

	putc(square, fp);
	putw(600, fp);
	putw(460, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(470, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(470, fp);

	putc(square, fp);
	putw(600, fp);
	putw(470, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(480, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(480, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(490, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(490, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(500, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(500, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(510, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(510, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(520, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(520, fp);

	putc(jumpCircle, fp);
	putw(650, fp);
	putw(520, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(530, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(530, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(540, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(540, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(550, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(550, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(560, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(560, fp);

	putc(jumpCircle, fp);
	putw(650, fp);
	putw(560, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(570, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(570, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(580, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(580, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(590, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(590, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(600, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(600, fp);

	putc(gravityCircle, fp);
	putw(650, fp);
	putw(600, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(610, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(610, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(620, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(630, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(640, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(650, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(660, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(670, fp);

	putc(jumpCircle, fp);
	putw(300, fp);
	putw(670, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(670, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(680, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(680, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(690, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(690, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(700, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(700, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(710, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(710, fp);

	putc(gravityCircle, fp);
	putw(300, fp);
	putw(710, fp);

	putc(spikeUp, fp);
	putw(790, fp);
	putw(720, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(720, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(730, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(740, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(750, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(760, fp);

	putc(spikeDown, fp);
	putw(150, fp);
	putw(770, fp);

	putc(endOfGame, fp);
	putw(790, fp);
	putw(800, fp);


	fclose(fp);
}