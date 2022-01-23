/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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

#ifndef YY_CONF_CONF_YACC_H_INCLUDED
# define YY_CONF_CONF_YACC_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int confdebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TDEFINE = 258,
     TUNDEF = 259,
     TIFDEF = 260,
     TIFNDEF = 261,
     TIFNHOST = 262,
     TIFHOST = 263,
     TELSE = 264,
     TENDIF = 265,
     TINCLUDE = 266,
     TBEGIN_CONFIG = 267,
     TEND_CONFIG = 268,
     TBEGIN_DB = 269,
     TEND_DB = 270,
     TEND_DBNOMD = 271,
     TID = 272,
     TSTRING = 273,
     TACLNOSYMLINKFOLLOW = 274,
     TWARNDEADSYMLINKS = 275,
     TGROUPED = 276,
     TSUMMARIZECHANGES = 277,
     TNEWLINE = 278,
     TVERBOSE = 279,
     TREPORTDETAILEDINIT = 280,
     TREPORTBASE16 = 281,
     TCONFIG_FILE = 282,
     TDATABASE = 283,
     TDATABASE_OUT = 284,
     TDATABASE_NEW = 285,
     TDATABASE_ATTRS = 286,
     TREPORT_URL = 287,
     TGZIPDBOUT = 288,
     TROOT_PREFIX = 289,
     TUMASK = 290,
     TTRUE = 291,
     TFALSE = 292,
     TRECSTOP = 293,
     TCONFIG_VERSION = 294,
     TSELRXRULE = 295,
     TEQURXRULE = 296,
     TNEGRXRULE = 297,
     TRIGHTS = 298,
     TUSER = 299,
     TGROUP = 300,
     TINODE = 301,
     TLINKCOUNT = 302,
     TFTYPE = 303,
     TSIZE = 304,
     TGROWINGSIZE = 305,
     TATIME = 306,
     TCTIME = 307,
     TMTIME = 308,
     TACL = 309,
     TXATTRS = 310,
     TSELINUX = 311,
     TE2FSATTRS = 312,
     TTIGER = 313,
     TSHA1 = 314,
     TRMD160 = 315,
     TMD2 = 316,
     TMD4 = 317,
     TMD5 = 318,
     TSHA256 = 319,
     TSHA512 = 320,
     TWHIRLPOOL = 321,
     TL = 322,
     TR = 323,
     TGZIPHEADER = 324,
     TDBSPEC = 325,
     TUNKNOWN = 326,
     TNAME = 327,
     TERROR = 328,
     TEOF = 329
   };
#endif
/* Tokens.  */
#define TDEFINE 258
#define TUNDEF 259
#define TIFDEF 260
#define TIFNDEF 261
#define TIFNHOST 262
#define TIFHOST 263
#define TELSE 264
#define TENDIF 265
#define TINCLUDE 266
#define TBEGIN_CONFIG 267
#define TEND_CONFIG 268
#define TBEGIN_DB 269
#define TEND_DB 270
#define TEND_DBNOMD 271
#define TID 272
#define TSTRING 273
#define TACLNOSYMLINKFOLLOW 274
#define TWARNDEADSYMLINKS 275
#define TGROUPED 276
#define TSUMMARIZECHANGES 277
#define TNEWLINE 278
#define TVERBOSE 279
#define TREPORTDETAILEDINIT 280
#define TREPORTBASE16 281
#define TCONFIG_FILE 282
#define TDATABASE 283
#define TDATABASE_OUT 284
#define TDATABASE_NEW 285
#define TDATABASE_ATTRS 286
#define TREPORT_URL 287
#define TGZIPDBOUT 288
#define TROOT_PREFIX 289
#define TUMASK 290
#define TTRUE 291
#define TFALSE 292
#define TRECSTOP 293
#define TCONFIG_VERSION 294
#define TSELRXRULE 295
#define TEQURXRULE 296
#define TNEGRXRULE 297
#define TRIGHTS 298
#define TUSER 299
#define TGROUP 300
#define TINODE 301
#define TLINKCOUNT 302
#define TFTYPE 303
#define TSIZE 304
#define TGROWINGSIZE 305
#define TATIME 306
#define TCTIME 307
#define TMTIME 308
#define TACL 309
#define TXATTRS 310
#define TSELINUX 311
#define TE2FSATTRS 312
#define TTIGER 313
#define TSHA1 314
#define TRMD160 315
#define TMD2 316
#define TMD4 317
#define TMD5 318
#define TSHA256 319
#define TSHA512 320
#define TWHIRLPOOL 321
#define TL 322
#define TR 323
#define TGZIPHEADER 324
#define TDBSPEC 325
#define TUNKNOWN 326
#define TNAME 327
#define TERROR 328
#define TEOF 329



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 45 "conf_yacc.y"

  char* s;
  DB_ATTR_TYPE i;


/* Line 2053 of yacc.c  */
#line 211 "conf_yacc.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE conflval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int confparse (void *YYPARSE_PARAM);
#else
int confparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int confparse (void);
#else
int confparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_CONF_CONF_YACC_H_INCLUDED  */
