#include "Pattern.c"

typedef struct
{
    Pattern current;
    Pattern next[6];
} State;

State list_states[] = 
{
    // STATE 0
    { 
        {STATE_ZERO},
        {
            {STATE_ZERO, ONE, R},
            {STATE_ONE, SQI, R},
            {},
            {},
            {STATE_ZERO, STAR, R},
            {},
        },
    },

    // STATE 1
    {
        {STATE_ONE},
        {
            {STATE_TWO, A, R},
            {},
            {},
            {},
            {},
            {},
        },
    },

    // STATE 2
    {
        {STATE_TWO},
        {
            {STATE_TWO, ONE, L},
            {STATE_THREE, SQI, L},
            {STATE_TWO, EQUALLI, L},
            {STATE_TWO, A, L},
            {},
            {},
        },
    },
    

    // STATE 3
    {
        {STATE_THREE},
        {
            {STATE_FOUR, A, R},
            {},
            {},
            {STATE_THREE, A, L},
            {STATE_SIX, STAR, R},
            {},
        },
    },

    // STATE 4
    {
        {STATE_FOUR},
        {
            {STATE_FOUR, ONE, R},
            {STATE_FOUR, SQI, R},
            {STATE_FOUR, EQUALLI, R},
            {STATE_FOUR, A, R},
            {STATE_FIVE, ONE, R},
            {},
        }
    },

    // STATE 5
    {
        {STATE_FIVE},
        {
            {},
            {},
            {},
            {},
            {},
            {STATE_TWO, STAR, L},
        },
    },

    // STATE 6
    {
        {STATE_SIX},
        {
            {},
            {STATE_SEVEN, SQI, R},
            {},
            {STATE_SIX, ONE, R},
            {},
            {},
        },
    },
    // STATE 7
    {
        {STATE_SEVEN},
        {
            {STATE_TWO, A, R},
            {},
            {STATE_EIGHT, EQUALLI, L},
            {STATE_SEVEN, A, R},
            {},
            {},
        }
    },

    // STATE 8
    {
        {STATE_EIGHT},
        {
            {},
            {STATE_MAX, SQI, N},
            {},
            {STATE_EIGHT, ONE, L},
            {},
            {},
        }
    },

    // STATE 9
    {
        {STATE_MAX},
        {
            {},
            {},
            {},
            {},
            {},
            {STATE_MAX, END, N},
        }
    },
};