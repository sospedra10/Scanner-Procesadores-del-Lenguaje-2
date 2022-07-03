/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <math.h>
	#include <stdlib.h>
	#include "tablaSimbolos.h"
	#include "tablaCuadruplas.h"
	int yylex(void);
	int yyparse(void);
	extern FILE *yyin;
	void yyerror (char const *);

#line 78 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    accion = 258,
    algoritmo = 259,
    tipoBase = 260,
    identificador = 261,
    literalEntero = 262,
    literalCaracter = 263,
    literalBooleano = 264,
    palabraReservada = 265,
    literalCadena = 266,
    literalReal = 267,
    espacio = 268,
    o = 269,
    y = 270,
    no = 271,
    comentario = 272,
    booleano = 273,
    cadena = 274,
    caracter = 275,
    constt = 276,
    continuar = 277,
    de = 278,
    dev = 279,
    divv = 280,
    ent = 281,
    entero = 282,
    es = 283,
    faccion = 284,
    falgoritmo = 285,
    fconst = 286,
    ffuncion = 287,
    fmientras = 288,
    fpara = 289,
    fsi = 290,
    ftipo = 291,
    ftupla = 292,
    funcion = 293,
    fvar = 294,
    hacer = 295,
    hasta = 296,
    mientras = 297,
    mod = 298,
    para = 299,
    real = 300,
    ref = 301,
    sal = 302,
    si = 303,
    tabla = 304,
    tipo = 305,
    tupla = 306,
    var = 307,
    operadorAsignar = 308,
    operadorPuntoComa = 309,
    operadorComa = 310,
    operadorSubRango = 311,
    operadorDefinicionTipo = 312,
    operadorEntonces = 313,
    operadorInicioArray = 314,
    operadorFinArray = 315,
    operadorIgual = 316,
    operadorSiNoSi = 317,
    operadorInicioParentesis = 318,
    operadorFinParentesis = 319,
    operadorMas = 320,
    operadorPor = 321,
    operadorElevado = 322,
    operadorDivisor = 323,
    operadorModulo = 324,
    operadorMenos = 325,
    operadorMayor = 326,
    operadorMenor = 327,
    operadorMayorIgual = 328,
    operadorMenorIgual = 329,
    operadorComparador = 330,
    operadorDistinto = 331,
    operadorAmpersand = 332,
    operadorOr = 333,
    operadorPunto = 334,
    literalNumerico = 335,
    menosu = 336
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 108 "parser.y" /* yacc.c:355  */

	int intValue;
	float floatValue;
	char *stringValue;
  	char cuentaValue;
	char *tipo;

#line 208 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 225 "parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   281

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  230

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   122,   122,   128,   132,   136,   137,   138,   142,   143,
     144,   148,   152,   153,   154,   155,   159,   163,   167,   171,
     172,   176,   177,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   195,   196,   200,   201,   205,   206,   210,
     211,   215,   216,   217,   221,   225,   229,   230,   231,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   248,
     249,   250,   251,   255,   256,   257,   258,   259,   260,   264,
     265,   266,   267,   268,   269,   273,   274,   278,   279,   280,
     281,   282,   286,   290,   294,   295,   299,   300,   304,   308,
     312,   316,   320,   324,   328,   329,   330,   334,   335,   336,
     340,   344,   348,   349,   350
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "accion", "algoritmo", "tipoBase",
  "identificador", "literalEntero", "literalCaracter", "literalBooleano",
  "palabraReservada", "literalCadena", "literalReal", "espacio", "o", "y",
  "no", "comentario", "booleano", "cadena", "caracter", "constt",
  "continuar", "de", "dev", "divv", "ent", "entero", "es", "faccion",
  "falgoritmo", "fconst", "ffuncion", "fmientras", "fpara", "fsi", "ftipo",
  "ftupla", "funcion", "fvar", "hacer", "hasta", "mientras", "mod", "para",
  "real", "ref", "sal", "si", "tabla", "tipo", "tupla", "var",
  "operadorAsignar", "operadorPuntoComa", "operadorComa",
  "operadorSubRango", "operadorDefinicionTipo", "operadorEntonces",
  "operadorInicioArray", "operadorFinArray", "operadorIgual",
  "operadorSiNoSi", "operadorInicioParentesis", "operadorFinParentesis",
  "operadorMas", "operadorPor", "operadorElevado", "operadorDivisor",
  "operadorModulo", "operadorMenos", "operadorMayor", "operadorMenor",
  "operadorMayorIgual", "operadorMenorIgual", "operadorComparador",
  "operadorDistinto", "operadorAmpersand", "operadorOr", "operadorPunto",
  "literalNumerico", "menosu", "$accept", "desc_algoritmo",
  "cabeceraAlgoritmo", "bloqueAlgoritmo", "defGlobales",
  "defAccionesFunciones", "bloque", "declaraciones", "definicionTipo",
  "definicionConst", "definicionVar", "listaDefsTipo", "expresionT",
  "defTipo", "listaCampos", "listaDefsConstantes", "listaDefsVariables",
  "listaId", "defVariablesInteraccion", "defEntrada", "defSalida",
  "expresion", "expArit", "operando", "expBool", "oprel", "instrucciones",
  "instruccion", "asignacion", "alternativa", "listaOpciones", "iteracion",
  "itCotaVariable", "itCotaFija", "defAccion", "defFuncion_d",
  "cabeceraAccion", "cabeceraFuncion", "defParForm", "dParForm",
  "llamadaAccion", "llamadaFuncion", "parametrosReales", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336
};
# endif

#define YYPACT_NINF -108

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-108)))

#define YYTABLE_NINF -48

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,     4,    34,   -12,  -108,    19,    72,    82,    -2,    18,
      19,    19,    46,    67,    48,    83,   120,    97,   146,   100,
      -2,    -2,    -2,   158,   159,    26,    18,    18,  -108,  -108,
     168,  -108,   127,  -108,   122,   140,   129,  -108,  -108,   124,
    -108,     7,   182,     7,   145,  -108,   135,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,   137,    -2,   148,    -2,
     120,   120,   173,   156,  -108,  -108,  -108,   178,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,   127,   150,   204,   177,
     180,   120,  -108,   127,     7,   172,  -108,     7,     7,    -5,
    -108,    84,     6,    64,    22,  -108,   195,   141,  -108,     7,
       7,   243,   100,    -6,   221,   120,   227,  -108,  -108,  -108,
    -108,    72,  -108,    37,   196,   215,    37,    82,  -108,   200,
      95,   191,     7,   155,   171,   -11,     3,  -108,    -5,  -108,
     100,  -108,  -108,  -108,  -108,  -108,  -108,     7,    -5,    -5,
      -5,    -5,    -5,    -5,     7,     7,     7,   100,   155,   165,
    -108,  -108,   120,   120,   120,   192,   203,  -108,   194,     7,
    -108,   205,   127,  -108,  -108,  -108,   120,     7,  -108,   198,
    -108,  -108,   -11,   226,   155,  -108,  -108,     0,  -108,  -108,
       0,    20,   171,   121,   201,  -108,   206,   207,   208,   212,
      -6,   244,    65,    37,   213,  -108,  -108,  -108,  -108,     7,
     209,   235,   127,   127,   127,  -108,  -108,   266,  -108,   214,
     204,   109,     7,  -108,  -108,  -108,  -108,   218,   250,  -108,
     100,   147,  -108,   127,   241,   100,  -108,  -108,   201,  -108
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    36,    20,    15,    10,
       7,     7,     0,     0,     0,     0,    38,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,    17,     0,    16,    40,     0,     0,     2,     4,    59,
      77,     0,     0,     0,     0,    11,    76,    78,    79,    80,
      87,    86,    81,    12,    13,    14,     0,    15,     0,    15,
      38,    38,     0,    41,    43,     8,     9,     0,    25,    21,
      22,    29,    32,    31,    28,    30,     0,     0,    34,     0,
       0,     0,    18,     0,   104,    59,    66,     0,     0,     0,
      58,     0,    46,    56,    47,    48,     0,     0,    62,     0,
       0,     0,     0,    96,     0,    38,     0,    44,    45,     3,
      42,    36,    27,     0,     0,     0,     0,    20,    39,     0,
     103,     0,   104,     0,    65,    46,    47,    59,     0,    57,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
      60,    75,     0,     0,     0,     0,    95,    90,     0,     0,
      35,     0,     0,    23,    26,    19,    38,   104,   100,     0,
      55,    68,     0,     0,    67,    53,    54,    49,    51,    52,
      50,    64,    63,     0,    85,    61,     0,     0,     0,     0,
      96,     0,     0,     0,     0,    37,   102,   101,    88,     0,
       0,     0,     0,     0,     0,    92,    94,     0,    91,     0,
      34,     0,     0,    83,    97,    99,    98,     0,     0,    33,
       0,     0,    93,     0,     0,     0,    24,    89,    85,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,  -108,  -108,    94,   126,   -33,    80,    28,   197,
    -108,   160,  -104,   -72,    66,   167,   -54,   -73,  -108,  -108,
     216,   -38,   -25,   -19,   -59,  -108,  -100,  -108,  -108,  -108,
      52,  -108,  -108,  -108,  -108,  -108,  -108,  -108,    91,  -108,
    -108,  -108,  -107
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    15,    79,    80,   115,    13,    35,    36,    62,    63,
      64,   123,    92,    93,    94,   137,    45,    46,    47,    48,
     201,    49,    50,    51,    26,    27,    57,    59,   155,   156,
      52,    95,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   127,   151,    91,   112,    97,   107,   108,   118,   161,
       3,   119,   164,    85,   138,   169,    86,   144,   145,     6,
     152,    23,   153,    87,   104,   138,   106,     1,   124,   126,
     173,   138,   139,    10,     4,   145,   144,   145,    10,    10,
       6,   154,     5,   139,    69,    70,   120,   184,     7,   139,
      16,   158,    60,   170,   140,   141,    24,   142,   128,   143,
     196,   148,   149,   125,   129,    89,   141,   171,   142,     7,
      88,   140,   141,    61,   142,    90,   143,    89,    12,   186,
     187,   188,   150,    44,   120,   181,   182,    90,    14,   209,
     194,   -47,   -47,   -47,   -47,   -47,   -47,   208,    31,   174,
      53,    54,    55,   172,    28,    29,    39,    30,   183,    32,
      98,    44,   195,   175,   176,   177,   178,   179,   180,    33,
     224,   192,    40,   100,   130,   228,    34,    37,    44,   120,
     214,   215,   216,    68,    69,    70,   131,   132,   133,   134,
     135,   136,    41,   101,    42,    71,    72,    73,    43,   220,
     167,   226,    65,    66,    74,   131,   132,   133,   134,   135,
     136,   211,   199,    38,    56,    58,   131,   132,   133,   134,
     135,   136,    75,    76,   221,    67,    77,    81,    78,    82,
     131,   132,   133,   134,   135,   136,    83,    84,    96,   102,
     109,    98,   131,   132,   133,   134,   135,   136,    99,   147,
     103,    44,    11,    61,   100,   225,    44,    11,    11,   113,
     114,   105,   131,   132,   133,   134,   135,   136,   131,   132,
     133,   134,   135,   136,   101,   185,   131,   132,   133,   134,
     135,   136,   111,   116,   117,   122,   131,   132,   133,   134,
     135,   136,   -47,   -47,   -47,   -47,   -47,   -47,   146,   127,
     157,   159,   163,   162,   166,   168,   189,   190,   191,   198,
     200,   193,   197,   202,   203,   204,   205,   210,   207,   212,
     213,   217,   222,   223,   218,   227,   219,   165,   160,   110,
     229,   206
};

static const yytype_uint8 yycheck[] =
{
      19,     6,   102,    41,    76,    43,    60,    61,    81,   113,
       6,    83,   116,     6,    25,   122,     9,    14,    15,    21,
      26,     3,    28,    16,    57,    25,    59,     4,    87,    88,
     130,    25,    43,     5,     0,    15,    14,    15,    10,    11,
      21,    47,    54,    43,     7,     8,    84,   147,    50,    43,
      52,   105,    26,    64,    65,    66,    38,    68,    63,    70,
     167,    99,   100,    88,    89,    70,    66,    64,    68,    50,
      63,    65,    66,    47,    68,    80,    70,    70,     6,   152,
     153,   154,   101,   102,   122,   144,   145,    80,     6,   193,
     162,    71,    72,    73,    74,    75,    76,    32,    31,   137,
      20,    21,    22,   128,    10,    11,     6,    61,   146,    61,
      46,   130,   166,   138,   139,   140,   141,   142,   143,    36,
     220,   159,    22,    59,    40,   225,     6,    30,   147,   167,
     202,   203,   204,     6,     7,     8,    71,    72,    73,    74,
      75,    76,    42,    79,    44,    18,    19,    20,    48,    40,
      55,   223,    26,    27,    27,    71,    72,    73,    74,    75,
      76,   199,    41,    17,     6,     6,    71,    72,    73,    74,
      75,    76,    45,    46,   212,     7,    49,    55,    51,    39,
      71,    72,    73,    74,    75,    76,    57,    63,     6,    54,
      17,    46,    71,    72,    73,    74,    75,    76,    53,    58,
      63,   220,     5,    47,    59,    58,   225,    10,    11,    59,
       6,    63,    71,    72,    73,    74,    75,    76,    71,    72,
      73,    74,    75,    76,    79,    60,    71,    72,    73,    74,
      75,    76,    54,    56,    54,    63,    71,    72,    73,    74,
      75,    76,    71,    72,    73,    74,    75,    76,    53,     6,
      29,    24,    37,    57,    54,    64,    64,    54,    64,    33,
      59,    56,    64,    57,    57,    57,    54,    54,    24,    60,
      35,     5,    54,    23,    60,    34,   210,   117,   111,    63,
     228,   190
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    83,     6,     0,    54,    21,    50,    84,    86,
      90,    91,     6,    97,     6,    93,    52,    85,    88,    89,
      90,    91,    92,     3,    38,    87,   116,   117,    86,    86,
      61,    31,    61,    36,     6,    98,    99,    30,    17,     6,
      22,    42,    44,    48,   105,   108,   109,   110,   111,   113,
     114,   115,   122,    89,    89,    89,     6,   118,     6,   119,
      26,    47,   100,   101,   102,    87,    87,     7,     6,     7,
       8,    18,    19,    20,    27,    45,    46,    49,    51,    94,
      95,    55,    39,    57,    63,     6,     9,    16,    63,    70,
      80,   103,   104,   105,   106,   123,     6,   103,    46,    53,
      59,    79,    54,    63,    88,    63,    88,    98,    98,    17,
     102,    54,    95,    59,     6,    96,    56,    54,    99,    95,
     103,   124,    63,   103,   106,   104,   106,     6,    63,   104,
      40,    71,    72,    73,    74,    75,    76,   107,    25,    43,
      65,    66,    68,    70,    14,    15,    53,    58,   103,   103,
     105,   108,    26,    28,    47,   120,   121,    29,    98,    24,
      97,    94,    57,    37,    94,    93,    54,    55,    64,   124,
      64,    64,   104,   108,   103,   104,   104,   104,   104,   104,
     104,   106,   106,   103,   108,    60,    99,    99,    99,    64,
      54,    64,   103,    56,    95,    98,   124,    64,    33,    41,
      59,   112,    57,    57,    57,    54,   120,    24,    32,    94,
      54,   103,    60,    35,    95,    95,    95,     5,    60,    96,
      40,   103,    54,    23,   108,    58,    95,    34,   108,   112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    84,    85,    86,    86,    86,    87,    87,
      87,    88,    89,    89,    89,    89,    90,    91,    92,    93,
      93,    94,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    96,    96,    97,    97,    98,    98,    99,
      99,   100,   100,   100,   101,   102,   103,   103,   103,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   105,
     105,   105,   105,   106,   106,   106,   106,   106,   106,   107,
     107,   107,   107,   107,   107,   108,   108,   109,   109,   109,
     109,   109,   110,   111,   112,   112,   113,   113,   114,   115,
     116,   117,   118,   119,   120,   120,   120,   121,   121,   121,
     122,   123,   124,   124,   124
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     3,     3,     3,     5,
       0,     1,     1,     3,     8,     1,     3,     2,     1,     1,
       1,     1,     1,     5,     0,     5,     0,     5,     0,     3,
       1,     1,     2,     1,     2,     2,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     1,     1,
       3,     4,     2,     3,     3,     2,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     6,     6,     0,     1,     1,     5,     9,
       4,     6,     5,     7,     3,     1,     0,     4,     4,     4,
       4,     4,     3,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 122 "parser.y" /* yacc.c:1646  */
    {
		printf("Encontrado algoritmo\n");
	}
#line 1493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("Algoritmo declarado\n");}
#line 1499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 132 "parser.y" /* yacc.c:1646  */
    {printf("Bloque algoritmo\n");}
#line 1505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 136 "parser.y" /* yacc.c:1646  */
    {printf("Definición tipo global\n");}
#line 1511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 137 "parser.y" /* yacc.c:1646  */
    {printf("Definición const global\n");}
#line 1517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 142 "parser.y" /* yacc.c:1646  */
    {printf("Definición acción\n");}
#line 1523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 143 "parser.y" /* yacc.c:1646  */
    {printf("Definición función\n");}
#line 1529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 148 "parser.y" /* yacc.c:1646  */
    {printf("Declaración instrucciones\n");}
#line 1535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 152 "parser.y" /* yacc.c:1646  */
    {printf("Definición tipo declaraciones\n");}
#line 1541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 153 "parser.y" /* yacc.c:1646  */
    {printf("Definición const declaraciones\n");}
#line 1547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 154 "parser.y" /* yacc.c:1646  */
    {printf("Definición var declaraciones\n");}
#line 1553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 159 "parser.y" /* yacc.c:1646  */
    {printf("Definición tipo\n");}
#line 1559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("Definición const\n");}
#line 1565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 167 "parser.y" /* yacc.c:1646  */
    {printf("Definición var\n");}
#line 1571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 171 "parser.y" /* yacc.c:1646  */
    {printf("Definición lista tipos\n");}
#line 1577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 176 "parser.y" /* yacc.c:1646  */
    {printf("Literal entero\n");}
#line 1583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 177 "parser.y" /* yacc.c:1646  */
    {printf("Definición caracter\n");}
#line 1589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 181 "parser.y" /* yacc.c:1646  */
    {printf("Definición tipo Lista campos\n");}
#line 1595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 182 "parser.y" /* yacc.c:1646  */
    {printf("Definición tipo tabla\n");}
#line 1601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 183 "parser.y" /* yacc.c:1646  */
    {printf("Definición tipo identificador\n");}
#line 1607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 184 "parser.y" /* yacc.c:1646  */
    {printf("Definición tipo\n");}
#line 1613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 185 "parser.y" /* yacc.c:1646  */
    {printf("Definición ref tipo\n");}
#line 1619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("Tipo entero\n");}
#line 1625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 187 "parser.y" /* yacc.c:1646  */
    {printf("Tipo booleano\n");}
#line 1631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 188 "parser.y" /* yacc.c:1646  */
    {printf("Tipo real\n");}
#line 1637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 189 "parser.y" /* yacc.c:1646  */
    {printf("Tipo caracter\n");}
#line 1643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 190 "parser.y" /* yacc.c:1646  */
    {printf("Tipo cadena\n");}
#line 1649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 195 "parser.y" /* yacc.c:1646  */
    {printf("Lista campos\n");}
#line 1655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 200 "parser.y" /* yacc.c:1646  */
    {printf("Lista Definción constantes\n");}
#line 1661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 205 "parser.y" /* yacc.c:1646  */
    {printf("Lista Definción ariables\n");}
#line 1667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 210 "parser.y" /* yacc.c:1646  */
    {}
#line 1673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 211 "parser.y" /* yacc.c:1646  */
    {}
#line 1679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 215 "parser.y" /* yacc.c:1646  */
    {}
#line 1685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 216 "parser.y" /* yacc.c:1646  */
    {}
#line 1691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 217 "parser.y" /* yacc.c:1646  */
    {}
#line 1697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 221 "parser.y" /* yacc.c:1646  */
    {}
#line 1703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 225 "parser.y" /* yacc.c:1646  */
    {}
#line 1709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 229 "parser.y" /* yacc.c:1646  */
    {}
#line 1715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 230 "parser.y" /* yacc.c:1646  */
    {}
#line 1721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 231 "parser.y" /* yacc.c:1646  */
    {}
#line 1727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 235 "parser.y" /* yacc.c:1646  */
    {}
#line 1733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 236 "parser.y" /* yacc.c:1646  */
    {}
#line 1739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 237 "parser.y" /* yacc.c:1646  */
    {}
#line 1745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 238 "parser.y" /* yacc.c:1646  */
    {}
#line 1751 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 239 "parser.y" /* yacc.c:1646  */
    {}
#line 1757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 240 "parser.y" /* yacc.c:1646  */
    {}
#line 1763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 241 "parser.y" /* yacc.c:1646  */
    {}
#line 1769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 242 "parser.y" /* yacc.c:1646  */
    {}
#line 1775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 243 "parser.y" /* yacc.c:1646  */
    {}
#line 1781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 244 "parser.y" /* yacc.c:1646  */
    {}
#line 1787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 248 "parser.y" /* yacc.c:1646  */
    {}
#line 1793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 249 "parser.y" /* yacc.c:1646  */
    {}
#line 1799 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 250 "parser.y" /* yacc.c:1646  */
    {}
#line 1805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 251 "parser.y" /* yacc.c:1646  */
    {}
#line 1811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 255 "parser.y" /* yacc.c:1646  */
    {}
#line 1817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 256 "parser.y" /* yacc.c:1646  */
    {}
#line 1823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 257 "parser.y" /* yacc.c:1646  */
    {}
#line 1829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 258 "parser.y" /* yacc.c:1646  */
    {}
#line 1835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 259 "parser.y" /* yacc.c:1646  */
    {}
#line 1841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 260 "parser.y" /* yacc.c:1646  */
    {}
#line 1847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 264 "parser.y" /* yacc.c:1646  */
    {}
#line 1853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 265 "parser.y" /* yacc.c:1646  */
    {}
#line 1859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 266 "parser.y" /* yacc.c:1646  */
    {}
#line 1865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 267 "parser.y" /* yacc.c:1646  */
    {}
#line 1871 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 268 "parser.y" /* yacc.c:1646  */
    {}
#line 1877 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 269 "parser.y" /* yacc.c:1646  */
    {}
#line 1883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 273 "parser.y" /* yacc.c:1646  */
    {}
#line 1889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 274 "parser.y" /* yacc.c:1646  */
    {}
#line 1895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 278 "parser.y" /* yacc.c:1646  */
    {}
#line 1901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 279 "parser.y" /* yacc.c:1646  */
    {}
#line 1907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 280 "parser.y" /* yacc.c:1646  */
    {}
#line 1913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 281 "parser.y" /* yacc.c:1646  */
    {}
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 282 "parser.y" /* yacc.c:1646  */
    {}
#line 1925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 294 "parser.y" /* yacc.c:1646  */
    {}
#line 1931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 299 "parser.y" /* yacc.c:1646  */
    {}
#line 1937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 300 "parser.y" /* yacc.c:1646  */
    {}
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 328 "parser.y" /* yacc.c:1646  */
    {}
#line 1949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 329 "parser.y" /* yacc.c:1646  */
    {}
#line 1955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 334 "parser.y" /* yacc.c:1646  */
    {}
#line 1961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 335 "parser.y" /* yacc.c:1646  */
    {}
#line 1967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 336 "parser.y" /* yacc.c:1646  */
    {}
#line 1973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 348 "parser.y" /* yacc.c:1646  */
    {}
#line 1979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 349 "parser.y" /* yacc.c:1646  */
    {}
#line 1985 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1989 "parser.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 353 "parser.y" /* yacc.c:1906  */


void yyerror(char const * error){
  printf("Error: %s\n", error);
  exit(-1);
}

int main(int argc, char *argv[]) {
  if ( argc > 0 ) {
    FILE *myfile = fopen(argv[1], "r");
    yyin=myfile;
  }
  else {
      yyin = stdin;
  }

  do{
    yyparse();
  } while(!feof(yyin));
}
