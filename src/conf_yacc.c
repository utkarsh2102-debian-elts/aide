/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         confparse
#define yylex           conflex
#define yyerror         conferror
#define yylval          conflval
#define yychar          confchar
#define yydebug         confdebug
#define yynerrs         confnerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "conf_yacc.y"
 

/*	
 * Copyright (C) 1999-2006,2010-2013 Rami Lehti, Pablo Virolainen,
 * Richard van den Berg, Hannes von Haugwitz
 * $Header$
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "aide.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <string.h>
#include "list.h"
#include "gen_list.h"
#include "db.h"
#include "db_config.h"
#include "symboltable.h"
#include "util.h"
#include "commandconf.h"

DB_ATTR_TYPE retval=0;
extern int conflex();
void conferror(const char*);

extern char *conftext;
extern long conf_lineno;



/* Line 371 of yacc.c  */
#line 120 "conf_yacc.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "conf_yacc.h".  */
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
/* Line 387 of yacc.c  */
#line 45 "conf_yacc.y"

  char* s;
  DB_ATTR_TYPE i;


/* Line 387 of yacc.c  */
#line 317 "conf_yacc.c"
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

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 345 "conf_yacc.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   308

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  153

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,     2,    77,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    75,    79,
      83,    86,    90,    92,    94,    98,   102,   104,   106,   108,
     110,   112,   114,   116,   118,   120,   122,   124,   126,   128,
     130,   132,   134,   136,   138,   140,   142,   144,   146,   148,
     150,   152,   154,   156,   158,   162,   165,   166,   171,   172,
     177,   178,   183,   184,   189,   192,   197,   201,   204,   207,
     210,   213,   216,   219,   222,   224,   227,   230,   233,   236,
     239,   242,   245,   248,   251,   254,   257,   260,   263,   266,
     269,   272
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      79,     0,    -1,    79,    80,    -1,    -1,    81,    -1,    82,
      -1,    83,    -1,    89,    -1,    90,    -1,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,   100,    -1,   101,    -1,   102,
      -1,   103,    -1,   106,    -1,   104,    -1,   111,    -1,   118,
      -1,   105,    -1,   116,    -1,   114,    -1,   112,    -1,   117,
      -1,   110,    -1,   113,    -1,   115,    -1,   109,    -1,   107,
      -1,   108,    -1,    75,    -1,    24,    -1,    71,    -1,    14,
      -1,    15,    -1,     1,    -1,    41,    85,    84,    -1,    42,
      85,    84,    -1,    43,    84,    -1,    43,    85,    84,    -1,
      24,    -1,    75,    -1,    85,    76,    85,    -1,    85,    77,
      85,    -1,    86,    -1,    88,    -1,    87,    -1,    18,    -1,
      44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,
      49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,
      54,    -1,    68,    -1,    69,    -1,    55,    -1,    56,    -1,
      57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,
      64,    -1,    65,    -1,    66,    -1,    67,    -1,     3,    18,
      18,    -1,     4,    18,    -1,    -1,     5,    18,    92,    99,
      -1,    -1,     6,    18,    94,    99,    -1,    -1,     8,    18,
      96,    99,    -1,    -1,     7,    18,    98,    99,    -1,    79,
      10,    -1,    79,     9,    79,    10,    -1,    18,    19,    85,
      -1,    29,    18,    -1,    30,    18,    -1,    31,    18,    -1,
      25,    18,    -1,    33,    18,    -1,    32,    85,    -1,    12,
      18,    -1,    13,    -1,    20,    37,    -1,    20,    38,    -1,
      21,    37,    -1,    21,    38,    -1,    26,    37,    -1,    26,
      38,    -1,    27,    37,    -1,    27,    38,    -1,    22,    37,
      -1,    35,    18,    -1,    22,    38,    -1,    23,    37,    -1,
      23,    38,    -1,    34,    37,    -1,    34,    38,    -1,    39,
      18,    -1,    40,    18,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   152,   152,   152,   154,   154,   154,   154,   154,   155,
     155,   155,   155,   156,   156,   156,   156,   156,   156,   156,
     156,   157,   157,   157,   157,   157,   157,   157,   158,   158,
     158,   158,   159,   163,   164,   168,   172,   175,   180,   183,
     186,   188,   191,   192,   197,   198,   199,   201,   202,   203,
     213,   213,   214,   214,   215,   215,   215,   216,   216,   217,
     217,   217,   218,   218,   218,   219,   219,   221,   221,   221,
     222,   222,   222,   223,   225,   227,   229,   229,   236,   236,
     243,   243,   250,   250,   257,   258,   260,   262,   264,   266,
     268,   270,   272,   281,   288,   292,   300,   308,   312,   316,
     320,   324,   328,   332,   336,   338,   342,   346,   350,   357,
     363,   368
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TDEFINE", "TUNDEF", "TIFDEF", "TIFNDEF",
  "TIFNHOST", "TIFHOST", "TELSE", "TENDIF", "TINCLUDE", "TBEGIN_CONFIG",
  "TEND_CONFIG", "TBEGIN_DB", "TEND_DB", "TEND_DBNOMD", "TID", "TSTRING",
  "'='", "TACLNOSYMLINKFOLLOW", "TWARNDEADSYMLINKS", "TGROUPED",
  "TSUMMARIZECHANGES", "TNEWLINE", "TVERBOSE", "TREPORTDETAILEDINIT",
  "TREPORTBASE16", "TCONFIG_FILE", "TDATABASE", "TDATABASE_OUT",
  "TDATABASE_NEW", "TDATABASE_ATTRS", "TREPORT_URL", "TGZIPDBOUT",
  "TROOT_PREFIX", "TUMASK", "TTRUE", "TFALSE", "TRECSTOP",
  "TCONFIG_VERSION", "TSELRXRULE", "TEQURXRULE", "TNEGRXRULE", "TRIGHTS",
  "TUSER", "TGROUP", "TINODE", "TLINKCOUNT", "TFTYPE", "TSIZE",
  "TGROWINGSIZE", "TATIME", "TCTIME", "TMTIME", "TACL", "TXATTRS",
  "TSELINUX", "TE2FSATTRS", "TTIGER", "TSHA1", "TRMD160", "TMD2", "TMD4",
  "TMD5", "TSHA256", "TSHA512", "TWHIRLPOOL", "TL", "TR", "TGZIPHEADER",
  "TDBSPEC", "TUNKNOWN", "TNAME", "TERROR", "TEOF", "'+'", "'-'",
  "$accept", "lines", "line", "rule", "equrule", "negrule", "newlineoreof",
  "expr", "primary", "other", "hash", "definestmt", "undefstmt",
  "ifdefstmt", "$@1", "ifndefstmt", "$@2", "ifhoststmt", "$@3",
  "ifnhoststmt", "$@4", "ifstmtlist", "groupdef", "db_in", "db_out",
  "db_new", "verbose", "report", "db_attrs", "beginconfigstmt",
  "endconfigstmt", "acl_no_symlink_follow", "warn_dead_symlinks",
  "report_detailed_init", "report_base16", "grouped", "root_prefix",
  "summarize_changes", "gzipdbout", "recursion_stopper", "config_version", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    61,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,    43,    45
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    78,    79,    79,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    81,    82,
      83,    83,    84,    84,    85,    85,    85,    86,    86,    86,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    89,    90,    92,    91,    94,    93,
      96,    95,    98,    97,    99,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   114,   113,   115,   115,   116,   116,
     117,   118
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     3,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     0,     4,     0,     4,
       0,     4,     0,     4,     2,     4,     3,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,    37,     0,     0,     0,     0,     0,     0,
       0,    94,    35,    36,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    32,     2,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    18,    21,    17,    30,    31,    29,    26,    19,    24,
      27,    23,    28,    22,    25,    20,     0,    75,    76,    78,
      82,    80,    93,     0,    95,    96,    97,    98,   103,   105,
     106,   107,    90,    99,   100,   101,   102,    87,    88,    89,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    61,    62,    92,    46,    48,    47,    91,
     108,   109,   104,   110,   111,     0,     0,    42,    43,    40,
       0,    74,     3,     3,     3,     3,    86,     0,     0,    38,
      39,    41,     0,    77,    79,    83,    81,    44,    45,     3,
      84,     0,    85
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   142,    37,    38,    39,    40,   129,   115,   116,   117,
     118,    41,    42,    43,   132,    44,   133,    45,   135,    46,
     134,   143,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -121
static const yytype_int16 yypact[] =
{
    -121,     4,  -121,  -121,     5,    14,    34,    38,    50,    51,
      52,  -121,  -121,  -121,    53,   -17,     3,    13,    17,  -121,
      55,    23,    25,    56,    58,    59,   239,    60,    27,    62,
      63,    64,   239,   239,   195,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,    65,  -121,  -121,  -121,
    -121,  -121,  -121,   239,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,   -10,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,   -18,   -18,  -121,  -121,  -121,
     -18,  -121,  -121,  -121,  -121,  -121,   -10,   239,   239,  -121,
    -121,  -121,    90,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,   163,  -121
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -121,     0,  -121,  -121,  -121,  -121,   -77,   -31,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -120,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       1,   125,   126,   130,     2,     3,   127,     4,     5,     6,
       7,     8,     9,   144,   145,   146,    10,    11,    12,    13,
      74,    75,    14,    66,    15,    16,    17,    18,    19,    20,
      21,    22,    67,    23,    24,    25,    26,    27,    28,    29,
      76,    77,   136,    30,    31,    32,    33,    34,   139,   140,
      78,    79,    68,   141,    80,    81,    69,   128,   137,   138,
      83,    84,    85,    86,   120,   121,   137,   138,    70,    71,
      72,     0,    73,    82,    87,    35,    88,    89,   119,    36,
     122,   123,   124,   131,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     4,     5,     6,     7,     8,     9,   149,
     150,     0,    10,    11,    12,    13,   147,   148,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    23,
      24,    25,    26,    27,    28,    29,     0,     0,     0,    30,
      31,    32,    33,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   151,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     3,    36,     4,     5,     6,     7,
       8,     9,     0,   152,     0,    10,    11,    12,    13,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,    30,    31,    32,    33,    34,     0,     0,     0,
       0,     0,     0,    90,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,    36,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    90,     0,   109,
     110,   111,   112,   113,   114,     0,     0,     0,     0,     0,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     0,     0,   109,   110,   111,   112,   113,   114
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-121)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    32,    33,    34,     0,     1,    24,     3,     4,     5,
       6,     7,     8,   133,   134,   135,    12,    13,    14,    15,
      37,    38,    18,    18,    20,    21,    22,    23,    24,    25,
      26,    27,    18,    29,    30,    31,    32,    33,    34,    35,
      37,    38,    73,    39,    40,    41,    42,    43,   125,   126,
      37,    38,    18,   130,    37,    38,    18,    75,    76,    77,
      37,    38,    37,    38,    37,    38,    76,    77,    18,    18,
      18,    -1,    19,    18,    18,    71,    18,    18,    18,    75,
      18,    18,    18,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,   137,   138,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,     1,    75,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    13,    14,    15,    -1,
      -1,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    18,    -1,    64,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    64,    65,    66,    67,    68,    69
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    79,     0,     1,     3,     4,     5,     6,     7,     8,
      12,    13,    14,    15,    18,    20,    21,    22,    23,    24,
      25,    26,    27,    29,    30,    31,    32,    33,    34,    35,
      39,    40,    41,    42,    43,    71,    75,    80,    81,    82,
      83,    89,    90,    91,    93,    95,    97,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    18,    18,    18,    18,
      18,    18,    18,    19,    37,    38,    37,    38,    37,    38,
      37,    38,    18,    37,    38,    37,    38,    18,    18,    18,
      18,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    64,
      65,    66,    67,    68,    69,    85,    86,    87,    88,    18,
      37,    38,    18,    18,    18,    85,    85,    24,    75,    84,
      85,    18,    92,    94,    98,    96,    85,    76,    77,    84,
      84,    84,    79,    99,    99,    99,    99,    85,    85,     9,
      10,    79,    10
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 32:
/* Line 1787 of yacc.c  */
#line 159 "conf_yacc.y"
    {
            newlinelastinconfig=1;
	    YYACCEPT;
          }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 164 "conf_yacc.y"
    {
          error(220,"Got @@dbspec.Stopping\n");
	  YYACCEPT;
          }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 168 "conf_yacc.y"
    {
	  error(220,"Got @@begin_db. Stopping\n");
	  YYACCEPT;
          }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 172 "conf_yacc.y"
    {
	  conferror("Error while reading configuration");
          }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 175 "conf_yacc.y"
    {
	  conferror("Error while reading configuration");
	  YYABORT;
          }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 181 "conf_yacc.y"
    { decode_string((yyvsp[(1) - (3)].s)); conf->selrxlst=append_rxlist((yyvsp[(1) - (3)].s),(yyvsp[(2) - (3)].i),conf->selrxlst); }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 184 "conf_yacc.y"
    { decode_string((yyvsp[(1) - (3)].s)); conf->equrxlst=append_rxlist((yyvsp[(1) - (3)].s),(yyvsp[(2) - (3)].i),conf->equrxlst); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 187 "conf_yacc.y"
    { decode_string((yyvsp[(1) - (2)].s)); conf->negrxlst=append_rxlist((yyvsp[(1) - (2)].s),0,conf->negrxlst); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 189 "conf_yacc.y"
    { decode_string((yyvsp[(1) - (3)].s)); conf->negrxlst=append_rxlist((yyvsp[(1) - (3)].s),0,conf->negrxlst); }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 192 "conf_yacc.y"
    {
            newlinelastinconfig=0;
	    YYACCEPT;
          }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 197 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (3)].i)  | (yyvsp[(3) - (3)].i) ; }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 198 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (3)].i)  & (~(yyvsp[(3) - (3)].i) ); }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 199 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 201 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ; }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 202 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ; }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 203 "conf_yacc.y"
    { if((retval=get_groupval((yyvsp[(1) - (1)].s))) != DB_ATTR_UNDEF) {
	    (yyval.i)=retval;
	  }
	  else {
		  conf_lineno++; // Hack
	    conferror("Error in expression");
	    YYABORT;
	  }
	  }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 213 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 213 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 214 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 214 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 215 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 215 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 215 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 216 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 216 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 217 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 217 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 217 "conf_yacc.y"
    {(yyval.i) = (yyvsp[(1) - (1)].i);}
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 218 "conf_yacc.y"
    {(yyval.i) = (yyvsp[(1) - (1)].i);}
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 218 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 218 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 219 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 219 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 221 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 221 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 221 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 222 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 222 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 222 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 223 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 225 "conf_yacc.y"
    { do_define((yyvsp[(2) - (3)].s),(yyvsp[(3) - (3)].s)); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 227 "conf_yacc.y"
    { do_undefine((yyvsp[(2) - (2)].s)); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 229 "conf_yacc.y"
    { 
  if(do_ifxdef(1,(yyvsp[(2) - (2)].s))==-1){
    error(0,"ifdef error\n");
    YYABORT; 
  };
 }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 236 "conf_yacc.y"
    { 
  if(do_ifxdef(0,(yyvsp[(2) - (2)].s))==-1){
    error(0,"ifndef error\n");
    YYABORT; 
  };
 }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 241 "conf_yacc.y"
    { error(220,"Ifndef statement ended\n");}
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 243 "conf_yacc.y"
    { 
  if(do_ifxhost(1,(yyvsp[(2) - (2)].s))==-1){
    error(0,"ifhost error\n");
    YYABORT;
  };
 }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 250 "conf_yacc.y"
    { 
  if(do_ifxhost(0,(yyvsp[(2) - (2)].s))==-1){
    error(0,"ifnhost error\n");
    YYABORT; 
  };
 }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 257 "conf_yacc.y"
    { error(220,"Endif stmt matched\n");}
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 258 "conf_yacc.y"
    {error(220,"Endifelse stmt matched\n");}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 260 "conf_yacc.y"
    { do_groupdef((yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].i)); }
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 262 "conf_yacc.y"
    { do_dbdef(DB_OLD,(yyvsp[(2) - (2)].s)); }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 264 "conf_yacc.y"
    { do_dbdef(DB_WRITE,(yyvsp[(2) - (2)].s)); }
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 266 "conf_yacc.y"
    { do_dbdef(DB_NEW,(yyvsp[(2) - (2)].s)); }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 268 "conf_yacc.y"
    { do_verbdef((yyvsp[(2) - (2)].s)); }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 270 "conf_yacc.y"
    { do_repurldef((yyvsp[(2) - (2)].s)); }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 272 "conf_yacc.y"
    {
  DB_ATTR_TYPE attr;
  if((attr = (yyvsp[(2) - (2)].i)&(~DB_HASHES))){
    error(0, "%li: invalid attribute(s) in database_attrs: %llx\n", conf_lineno-1, attr);
    YYABORT;
  }
  conf->db_attrs=(yyvsp[(2) - (2)].i);
}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 281 "conf_yacc.y"
    {
#ifdef WITH_MHASH
  conf->do_configmd=1;
  conf->old_confmdstr=strdup((yyvsp[(2) - (2)].s));
#endif
}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 288 "conf_yacc.y"
    {
  YYACCEPT;
}
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 292 "conf_yacc.y"
    { 
#ifdef WITH_ACL
  conf->no_acl_on_symlinks=1;
#else
  error(0,"ACL-support not compiled in.\n");
#endif
}
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 300 "conf_yacc.y"
    { 
#ifdef WITH_ACL
  conf->no_acl_on_symlinks=0;
#else
  error(0,"ACL-support not compiled in.\n");
#endif
}
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 308 "conf_yacc.y"
    {
  conf->warn_dead_symlinks=1;
}
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 312 "conf_yacc.y"
    {
  conf->warn_dead_symlinks=0;
}
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 316 "conf_yacc.y"
    {
  conf->report_detailed_init=1;
}
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 320 "conf_yacc.y"
    {
  conf->report_detailed_init=0;
}
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 324 "conf_yacc.y"
    {
  conf->report_base16=1;
}
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 328 "conf_yacc.y"
    {
  conf->report_base16=0;
}
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 332 "conf_yacc.y"
    {
  conf->grouped=1;
}
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 336 "conf_yacc.y"
    { do_rootprefix((yyvsp[(2) - (2)].s)); }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 338 "conf_yacc.y"
    {
  conf->grouped=0;
}
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 342 "conf_yacc.y"
    {
  conf->summarize_changes=1;
}
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 346 "conf_yacc.y"
    {
  conf->summarize_changes=0;
}
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 350 "conf_yacc.y"
    { 
#ifdef WITH_ZLIB
conf->gzip_dbout=1; 
#else 
 error(0,"Gzip-support not compiled in.\n");
#endif
}
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 357 "conf_yacc.y"
    { 
#ifdef WITH_ZLIB
conf->gzip_dbout=0; 
#endif
}
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 363 "conf_yacc.y"
    {
  /* FIXME implement me */  
  
}
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 368 "conf_yacc.y"
    {
  conf->config_version=strdup((yyvsp[(2) - (2)].s));
}
    break;


/* Line 1787 of yacc.c  */
#line 2294 "conf_yacc.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 372 "conf_yacc.y"



void conferror(const char *msg){
  error(0,"%li:%s:%s\n",conf_lineno-1,msg,conftext);

}

const char* aide_key_1=CONFHMACKEY_01;
const char* db_key_1=DBHMACKEY_01;

