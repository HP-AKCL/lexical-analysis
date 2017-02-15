#include <stdio.h>
#include <ctype.h>
int TESTscan();
char Scanin[300],Scanout[300]; //用于接收输入输出文件名
FILE *fin,*fout; //用于指向输入输出文件的指针
#define keywordSum  8
char *keyword[keywordSum]={ "if","else","for","while","do","int","main","real"};//定义关键字，根据需要添加
char singleword[50]="+-*(){};,:"; //定义纯单分界符，根据需要添加
char doubleword[10]="><=!"; //定义双分界符的首字符，根据需要添加
extern char Scanin[300], Scanout[300]; //用于接收输入输出文件名
extern FILE *fin,*fout; //用于指向输入输出文件的指针

int TESTscan(){
   char ch,token[40];	//ch为每次读入的字符，token用于保存识别出的单词
   int es=0,j,n;	//es错误代码，0表示没有错误。j,n为临时变量，控制组合单词时的下标等
   printf("请输入源程序文件名（包括路径）：");
   scanf("%s",Scanin);
   printf("请输入词法分析输出文件名（包括路径）：");
   scanf("%s",Scanout);
   if ((fin=fopen(Scanin,"r"))==NULL){
	printf("\n打开词法分析输入文件出错!\n");
	return(1);
   }
   if ((fout=fopen(Scanout,"w"))==NULL){
	printf("\n创建词法分析输出文件出错!\n");
	return(2);
   }
   ch=getc(fin);
   while(ch!=EOF){
	   while(ch==' '||ch=='\n'||ch=='\t')
		   ch=getc(fin);
		if (ch==EOF) break;
		if ( ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){//如果是字母，则进行标识符处理
		
		}else if (isdigit(ch)){//数字处理

		}else if (strchr(singleword,ch)>0){//单分符处理

		}else if (strchr(doubleword,ch)>0){//双分界符处理

		}else if (ch=='/'){//注释处理

		}else {
			es = 1;
			return(3);
		}
	}
   fclose(fin);
   fclose(fout);
   return(es);
}

void main(){
	int es=0;
	es=TESTscan();//调词法分析
    if (es>0) printf("词法分析有错,编译停止!");
	else printf("词法分析成功!\n");
}
int TESTscan(){
   char ch,token[40]; //ch为每次读入的字符，token用于保存识别出的单词
   int es=0,j,n; //es错误代码，0表示没有错误。j,n为临时变量，控制组合单词时的下标等
   printf("请输入源程序文件名（包括路径）：");
   scanf("%s",Scanin);
   printf("请输入词法分析输出文件名（包括路径）：");
   scanf("%s",Scanout);
   if ((fin=fopen(Scanin,"r"))==NULL){
	printf("\n打开词法分析输入文件出错!\n");
	return(1);
   }
   if ((fout=fopen(Scanout,"w"))==NULL){
	printf("\n创建词法分析输出文件出错!\n");
	return(2);
   }
   ch=getc(fin);
   while(ch!=EOF){
	while(ch==' '||ch=='\n'||ch=='\t') ch=getc(fin);
	if (ch==EOF) break;
	if (	){		}
		else if (isdigit(ch)){		} 
		else if (strchr(singleword,ch)>0){		}
		else if (strchr(doubleword,ch)>0){		} 
		else if (ch=='/') {		} 
		else {			}
   }
   fclose(fin);
   fclose(fout);
   return(es);
}

