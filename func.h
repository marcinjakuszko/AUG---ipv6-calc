//structure for ipv6 number from scanner
struct number {
	char tab1[4];
	char tab2[4];
	char tab3[4];
	char tab4[4];
	char tab5[4];
	char tab6[4];
	char tab7[4];
	char tab8[4];
	};
//decimal structure for ipv6 number (after conversion)
struct dectab {
	int tab1[4];
	int tab2[4];
	int tab3[4];
	int tab4[4];
	int tab5[4];
	int tab6[4];
	int tab7[4];
	int tab8[4];
	};

//function that provide table print
void printTable(int* tab)
{
	printf("%d ",tab[0]);
	printf("%d ",tab[1]);
	printf("%d ",tab[2]);
	printf("%d ",tab[3]);
}

//function that provide char table print
void printTableC(char* tab)
{
	printf("%c",tab[0]);
	printf("%c",tab[1]);
	printf("%c",tab[2]);
	printf("%c",tab[3]);
}

//prints structure
void structPrintInt (struct dectab T)
{
	printTable(T.tab1);
	printf(" : ");	
	printTable(T.tab2);
	printf(" : ");
	printTable(T.tab3);
	printf(" : ");
	printTable(T.tab4);
	printf(" : ");
	printTable(T.tab5);
	printf(" : ");	
	printTable(T.tab6);
	printf(" : ");
	printTable(T.tab7);
	printf(" : ");
	printTable(T.tab8);
}

//prints structure
void structPrintChar (struct number T)
{
	printTableC(T.tab1);
	printf(":");
	printTableC(T.tab2);
	printf(":");
	printTableC(T.tab3);
	printf(":");
	printTableC(T.tab4);
	printf(":");
	printTableC(T.tab5);
	printf(":");
	printTableC(T.tab6);
	printf(":");
	printTableC(T.tab7);
	printf(":");
	printTableC(T.tab8);
	printf("\n");
}


//simple operations on arrays
void sumtab(int* tab1, int* tab2, int* result)
{
	int i;	
	for(i=0; i<4; ++i)
	{
		result[i] = tab1[i] + tab2[i];	
	}
}

void minustab(int* tab1, int* tab2, int* result)
{
	int i;	
	for(i=0; i<4; ++i)
	{
		result[i] = tab1[i] - tab2[i];	
	}
}

void multitab(int* tab1, int* tab2, int* result)
{
	int i;	
	for(i=0; i<4; ++i)
	{
		result[i] = tab1[i] * tab2[i];	
	}
}

void divtab(int* tab1, int* tab2, int* result)
{
	int i;	
	for(i=0; i<4; ++i)
	{
		if (tab2[i]==0) result[i] = tab1[i];		
		else result[i] = tab1[i] / tab2[i];	
	}
}

//operations on structures
struct dectab plus(struct dectab* ip1, struct dectab* ip2)
{
	struct dectab result;	
	sumtab(ip1->tab1,ip2->tab1,result.tab1);
	sumtab(ip1->tab2,ip2->tab2,result.tab2);
	sumtab(ip1->tab3,ip2->tab3,result.tab3);
	sumtab(ip1->tab4,ip2->tab4,result.tab4);
	sumtab(ip1->tab5,ip2->tab5,result.tab5);
	sumtab(ip1->tab6,ip2->tab6,result.tab6);
	sumtab(ip1->tab7,ip2->tab7,result.tab7);
	sumtab(ip1->tab8,ip2->tab8,result.tab8);
	return result;
} 

struct dectab minus(struct dectab* ip1, struct dectab* ip2)
{
	struct dectab result;	
	minustab(ip1->tab1,ip2->tab1,result.tab1);
	minustab(ip1->tab2,ip2->tab2,result.tab2);
	minustab(ip1->tab3,ip2->tab3,result.tab3);
	minustab(ip1->tab4,ip2->tab4,result.tab4);
	minustab(ip1->tab5,ip2->tab5,result.tab5);
	minustab(ip1->tab6,ip2->tab6,result.tab6);
	minustab(ip1->tab7,ip2->tab7,result.tab7);
	minustab(ip1->tab8,ip2->tab8,result.tab8);
	return result;
} 

struct dectab multi(struct dectab* ip1, struct dectab* ip2)
{
	struct dectab result;	
	multitab(ip1->tab1,ip2->tab1,result.tab1);
	multitab(ip1->tab2,ip2->tab2,result.tab2);
	multitab(ip1->tab3,ip2->tab3,result.tab3);
	multitab(ip1->tab4,ip2->tab4,result.tab4);
	multitab(ip1->tab5,ip2->tab5,result.tab5);
	multitab(ip1->tab6,ip2->tab6,result.tab6);
	multitab(ip1->tab7,ip2->tab7,result.tab7);
	multitab(ip1->tab8,ip2->tab8,result.tab8);
	return result;
} 

struct dectab divide(struct dectab* ip1, struct dectab* ip2)
{
	struct dectab result;	
	divtab(ip1->tab1,ip2->tab1,result.tab1);
	divtab(ip1->tab2,ip2->tab2,result.tab2);
	divtab(ip1->tab3,ip2->tab3,result.tab3);
	divtab(ip1->tab4,ip2->tab4,result.tab4);
	divtab(ip1->tab5,ip2->tab5,result.tab5);
	divtab(ip1->tab6,ip2->tab6,result.tab6);
	divtab(ip1->tab7,ip2->tab7,result.tab7);
	divtab(ip1->tab8,ip2->tab8,result.tab8);
	return result;
} 

// convert from char to int array
void copy2dec (char* tab, int* tab1)
{
	
	int i;	
	for (i=0; i<4; ++i)
	{
		if (tab[i] == '0') tab1[i]=0;
		if (tab[i] == '1') tab1[i]=1;
		if (tab[i] == '2') tab1[i]=2;
		if (tab[i] == '3') tab1[i]=3;
		if (tab[i] == '4') tab1[i]=4;
		if (tab[i] == '5') tab1[i]=5;
		if (tab[i] == '6') tab1[i]=6;
		if (tab[i] == '7') tab1[i]=7;
		if (tab[i] == '8') tab1[i]=8;
		if (tab[i] == '9') tab1[i]=9;
		if (tab[i] == 'a') tab1[i]=10;		
		if (tab[i] == 'b') tab1[i]=11;
		if (tab[i] == 'c') tab1[i]=12;
		if (tab[i] == 'd') tab1[i]=13;
		if (tab[i] == 'e') tab1[i]=14;
		if (tab[i] == 'f') tab1[i]=15;	
	}
}

//convert from int to char array
void ip2dec (int* tab, char* tab1)
{
	int i;	
	for (i=0; i<4; ++i)
	{
		if (tab[i] <= 0) tab1[i]='0';
		if (tab[i] == 1) tab1[i]='1';
		if (tab[i] == 2) tab1[i]='2';
		if (tab[i] == 3) tab1[i]='3';
		if (tab[i] == 4) tab1[i]='4';
		if (tab[i] == 5) tab1[i]='5';
		if (tab[i] == 6) tab1[i]='6';
		if (tab[i] == 7) tab1[i]='7';
		if (tab[i] == 8) tab1[i]='8';
		if (tab[i] == 9) tab1[i]='9';
		if (tab[i] == 10) tab1[i]='a';		
		if (tab[i] == 11) tab1[i]='b';
		if (tab[i] == 12) tab1[i]='c';
		if (tab[i] == 13) tab1[i]='d';
		if (tab[i] == 14) tab1[i]='e';
		if (tab[i] >= 15) tab1[i]='f';			
	}
}

//convert char structure to decimal
struct dectab ipdec (struct number* ip1)
{
	struct dectab ip;
	copy2dec(ip1->tab1,ip.tab1);
	copy2dec(ip1->tab2,ip.tab2);
	copy2dec(ip1->tab3,ip.tab3);
	copy2dec(ip1->tab4,ip.tab4);
	copy2dec(ip1->tab5,ip.tab5);
	copy2dec(ip1->tab6,ip.tab6);
	copy2dec(ip1->tab7,ip.tab7);
	copy2dec(ip1->tab8,ip.tab8);
	
	return ip;
}

//convert decimal structure to char
struct number iptab (struct dectab* ipdec)
{
	struct number ip;
	ip2dec (ipdec->tab1, ip.tab1);
	ip2dec (ipdec->tab2, ip.tab2);
	ip2dec (ipdec->tab3, ip.tab3);
	ip2dec (ipdec->tab4, ip.tab4);
	ip2dec (ipdec->tab5, ip.tab5);
	ip2dec (ipdec->tab6, ip.tab6);
	ip2dec (ipdec->tab7, ip.tab7);
	ip2dec (ipdec->tab8, ip.tab8);
	return ip;
}

//something like main :)
struct number operation(struct number* charip1, struct number* charip2, char op)
{
	struct dectab ip1 = ipdec(charip1);
	struct dectab ip2 = ipdec(charip2);
	struct dectab* ipp1 = &ip1;
	struct dectab* ipp2 = &ip2;
	struct dectab result;
	struct number final;
	struct dectab* fin = &result;

	if (op == '+') 
	{
		result = plus(ipp1,ipp2);
		//structPrintInt(result);
	}

	if (op== '-')
	{
		result = minus(ipp1,ipp2);
		//structPrintInt(result);
	}

	if (op == '*')
	{
		result = multi(ipp1,ipp2);
		//structPrintInt(result);
	}

	if (op == '/')
	{
		result = divide(ipp1,ipp2);
		//structPrintInt(result);
	}	
	final = iptab(fin);
	printf("\n");
	structPrintChar(final);
	return final;
}




