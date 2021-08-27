/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    BOOL = 292,
    COMPLEX = 293,
    IMAGINARY = 294,
    ID = 295,
    INTEGER_CONST = 296,
    FLOAT_CONST = 297,
    ENUMERATION_CONST = 298,
    CHAR_CONST = 299,
    STRING_LITERAL = 300,
    LBRACKET = 301,
    RBRACKET = 302,
    LBRACE = 303,
    RBRACE = 304,
    LPARENTHESIS = 305,
    RPARENTHESIS = 306,
    DOT = 307,
    ARROW = 308,
    INCREMENT = 309,
    DECREMENT = 310,
    AMPERSAND = 311,
    BITWISE_OR = 312,
    BITWISE_XOR = 313,
    PLUS = 314,
    MINUS = 315,
    STAR = 316,
    DIV = 317,
    MOD = 318,
    BITWISE_NOT = 319,
    LOGICAL_NOT = 320,
    LOGICAL_AND = 321,
    LOGICAL_OR = 322,
    RIGHT_SHIFT = 323,
    LEFT_SHIFT = 324,
    LESSER_THAN = 325,
    GREATER_THAN = 326,
    LESSER_EQUAL = 327,
    GREATER_EQUAL = 328,
    EQUALS = 329,
    NOT_EQUAL = 330,
    QUESTION_MARK = 331,
    COLON = 332,
    SEMICOLON = 333,
    ELLIPSIS = 334,
    ASSIGNMENT = 335,
    MULT_ASSIGN = 336,
    DIV_ASSIGN = 337,
    PLUS_ASSIGN = 338,
    SUB_ASSIGN = 339,
    MOD_ASSIGN = 340,
    LEFT_SHIFT_ASSIGN = 341,
    RIGHT_SHIFT_ASSIGN = 342,
    AND_ASSIGN = 343,
    XOR_ASSIGN = 344,
    OR_ASSIGN = 345,
    COMMA = 346,
    HASH = 347
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define BOOL 292
#define COMPLEX 293
#define IMAGINARY 294
#define ID 295
#define INTEGER_CONST 296
#define FLOAT_CONST 297
#define ENUMERATION_CONST 298
#define CHAR_CONST 299
#define STRING_LITERAL 300
#define LBRACKET 301
#define RBRACKET 302
#define LBRACE 303
#define RBRACE 304
#define LPARENTHESIS 305
#define RPARENTHESIS 306
#define DOT 307
#define ARROW 308
#define INCREMENT 309
#define DECREMENT 310
#define AMPERSAND 311
#define BITWISE_OR 312
#define BITWISE_XOR 313
#define PLUS 314
#define MINUS 315
#define STAR 316
#define DIV 317
#define MOD 318
#define BITWISE_NOT 319
#define LOGICAL_NOT 320
#define LOGICAL_AND 321
#define LOGICAL_OR 322
#define RIGHT_SHIFT 323
#define LEFT_SHIFT 324
#define LESSER_THAN 325
#define GREATER_THAN 326
#define LESSER_EQUAL 327
#define GREATER_EQUAL 328
#define EQUALS 329
#define NOT_EQUAL 330
#define QUESTION_MARK 331
#define COLON 332
#define SEMICOLON 333
#define ELLIPSIS 334
#define ASSIGNMENT 335
#define MULT_ASSIGN 336
#define DIV_ASSIGN 337
#define PLUS_ASSIGN 338
#define SUB_ASSIGN 339
#define MOD_ASSIGN 340
#define LEFT_SHIFT_ASSIGN 341
#define RIGHT_SHIFT_ASSIGN 342
#define AND_ASSIGN 343
#define XOR_ASSIGN 344
#define OR_ASSIGN 345
#define COMMA 346
#define HASH 347

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "ass5_16CS10058.y" /* yacc.c:1909  */
            //yylval is a union of all these types
  int intval;		//integer value 
  char* charval;	//char value
  int instr;		//instruction number: for backpatching
  sym* symp;		//symbol
  symboltype* symtp;	//symbol type
  Expression* expr;		//expression
  Statement* st;		//statement
  array* A;				//array type
  char unaryOperator;	//unaryoperator
  int numpar;			//number of parameters

#line 251 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
