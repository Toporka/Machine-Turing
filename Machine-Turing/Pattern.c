typedef enum
{
    STATE_ZERO = 0,
    STATE_ONE = 1,
    STATE_TWO = 2,
    STATE_THREE = 3,
    STATE_FOUR = 4,
    STATE_FIVE = 5,
    STATE_SIX = 6,
    STATE_SEVEN = 7,
    STATE_EIGHT = 8,

    STATE_MAX = 9,
} RegisterState;

typedef enum
{
    ONE = 0,      //'1',
    SQI = 1,      //'x',
    EQUALLI = 2,  //'=',
    A = 3,        //'a',
    STAR = 4,     //'*',
    END = 5,      //'\000',
} Symbol;

char getSymbol(Symbol symbol)
{
    switch (symbol)
    {
    case ONE:
        return '1';
    case SQI:
        return 'x';
    case EQUALLI:
        return '=';
    case A:
        return 'a';
    case STAR:
        return '*';
    case END:
        return '\000';
    default:
        return ' ';
    }
}
Symbol getIndexSymbol(char symbol)
{
    switch (symbol)
    {
    case '1':
        return ONE;
    case 'x':
        return SQI;
    case '=':
        return EQUALLI;
    case 'a':
        return A;
    case '*':
        return STAR;
    case '\000':
        return END;
    case '\t':
        return END;
    default:
        return -1;
    }
}

typedef enum 
{
    R = 1,
    N = 0,
    L = -1,
} Transition;

typedef struct
{
    RegisterState number;
    Symbol symbol;
    Transition transition;
} Pattern;