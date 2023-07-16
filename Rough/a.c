LEX PART : %
{
#include <stdio.h>
#include "y.tab.h"
    Extern int yylval;
    %
}
% %
    [\t];
[+ | - | * | / |= | <|>]
{printf("Operator is %s\n",yytext);return OP; }
        [0 - 9] +
{
    yylval = atoi(yytext);
    printf("Numbers is %d \n", yylval);
    return DIGIT;
}
int|char|bool|float|void|for|do|while|if|else|return|void
{
    printf("Keyword is %s \n", yytext);
    return KEY;
}
[a - zA - Z0 - 9] +
{
    printf("Identifier is %s \n", yytext);
    return ID;
}
.;
% %
    YACC PART : %
{
#include <stdio.h>
#include <stdlib.h>
    int id = 0, dig = 0, key = 0, op = 0;
    %
}
% token DIGIT ID KEY OP % %
    input : DIGIT input { dig++; }
| ID input { id++; }
| KEY input { key++; }
| OP input { op++; }
| DIGIT { dig++; }
| ID { id++; }
| KEY { key++; }
| OP { op++; };
% %
#include <stdio.h>
    externintyylex();
externintyyparse();
extern FILE *yyin;
main()
{
    FILE *myfile = fopen("a.c", "r");
    if (!myfile)
    {
        printf("I cant open sam_input.c !");
        return -1;
    }
    yyin = myfile;
    do
    {
        yyparse();
    } while (!feof(yyin));
    printf("Numbers = %d \n Keywords = %d \n Identifiers=%d \n Operators=%d \n", dig, key, id, op);
}
Void yyerror()
{
    printf("EEk, parse error!Message: ");
    exit(-1);
}
OUTPUT : cd(directory name)
             lex(file name)
                 .l
         yacc
    - d(file name).y cc lex.yy.cy.tab.c - ll./ a.out
