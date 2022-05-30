#include <lexical/lexicaltable.h>
U64 lexicaltable_hint[] = {
    0,33,36,39,42,44,47,50,//0~7
    53,55,58,61,63,66,70,73,//8~15
    75,79,82,85,88,90,93,96,//16~23
    99,102,105,108,111,0,113,114,//24~31
    115,0,116,0,0,117,0,0,//32~39
    118,0,0,119,120,0,0,0,//40~47
    0,121,122,0,0,0,0,0,//48~55
    0,0,0,0,123,126,128,131,//56~63
    134,137,140,143,146,149,152,154,//64~71
    157,160,163,166,0,169,170,172,//72~79
    0,174 //80~81
};
transrule lexicaltable[] = {
    {0,{VALUE_RAW,'b'},1},
    {0,{VALUE_RAW,'c'},5},
    {0,{VALUE_RAW,'i'},9},
    {0,{VALUE_RAW,'l'},12},
    {0,{VALUE_RAW,'s'},16},
    {0,{VALUE_RAW,'u'},21},
    {0,{VALUE_RAW,'r'},71},
    {0,{VALUE_RAW,'$'},TOKEN_DOLLAR|ACCEPTED},
    {0,{VALUE_RAW,'>'},TOKEN_GREATER_THAN|ACCEPTED},
    {0,{VALUE_RAW,'<'},TOKEN_LOWER_THAN|ACCEPTED},
    {0,{VALUE_RAW,'='},32},
    {0,{VALUE_RAW,'!'},TOKEN_REVERSE|ACCEPTED},
    {0,{VALUE_RAW,'+'},TOKEN_ADD|ACCEPTED},
    {0,{VALUE_RAW,'-'},TOKEN_SUB|ACCEPTED},
    {0,{VALUE_RAW,'*'},TOKEN_MULTIPLY|ACCEPTED},
    {0,{VALUE_RAW,'/'},TOKEN_DIVIDE|ACCEPTED},
    {0,{VALUE_RAW,'&'},TOKEN_BIT_AND|ACCEPTED},
    {0,{VALUE_RAW,'|'},TOKEN_BIT_OR|ACCEPTED},
    {0,{VALUE_RAW,'~'},TOKEN_BIT_NOT|ACCEPTED},
    {0,{VALUE_RAW,'\''},TOKEN_SINGLE_QUOTE|ACCEPTED},
    {0,{VALUE_RAW,'\"'},TOKEN_DOUBLE_QUOTE|ACCEPTED},
    {0,{VALUE_RAW,','},TOKEN_COMMA|ACCEPTED},
    {0,{VALUE_RAW,'@'},TOKEN_AT|ACCEPTED},
    {0,{VALUE_RAW,';'},TOKEN_SEMICOLON|ACCEPTED},
    {0,{VALUE_RAW,'{'},TOKEN_BRACE_LEFT|ACCEPTED},
    {0,{VALUE_RAW,'['},TOKEN_BRACKETS_LEFT|ACCEPTED},
    {0,{VALUE_RAW,'('},TOKEN_PARENTHESIS_LEFT|ACCEPTED},
    {0,{VALUE_RAW,')'},TOKEN_PARENTHESIS_RIGHT|ACCEPTED},
    {0,{VALUE_RAW,']'},TOKEN_BRACKETS_RIGHT|ACCEPTED},
    {0,{VALUE_RAW,'}'},TOKEN_BRACE_RIGHT|ACCEPTED},
    {0,{VALUE_RAW,'_'},TOKEN_VAR_NAME|ACCEPTED},
    {0,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_NUMBER|ACCEPTED},
    {0,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {1,{VALUE_RAW,'y'},2},
    {1,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {1,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {2,{VALUE_RAW,'t'},3},
    {2,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {2,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {3,{VALUE_RAW,'e'},TOKEN_BYTE|ACCEPTED},
    {3,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {3,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {4,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {4,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {5,{VALUE_RAW,'h'},6},
    {5,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {5,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {6,{VALUE_RAW,'a'},7},
    {6,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {6,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {7,{VALUE_RAW,'r'},TOKEN_CHAR|ACCEPTED},
    {7,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {7,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {8,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {8,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {9,{VALUE_RAW,'n'},10},
    {9,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {9,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {10,{VALUE_RAW,'t'},TOKEN_INT|ACCEPTED},
    {10,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {10,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {11,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {11,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {12,{VALUE_RAW,'o'},13},
    {12,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {12,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {13,{VALUE_RAW,'n'},14},
    {13,{VALUE_RAW,'a'},60},
    {13,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {13,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {14,{VALUE_RAW,'g'},TOKEN_LONG|ACCEPTED},
    {14,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {14,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {15,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {15,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {16,{VALUE_RAW,'h'},17},
    {16,{VALUE_RAW,'u'},62},
    {16,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {16,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {17,{VALUE_RAW,'o'},18},
    {17,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {17,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {18,{VALUE_RAW,'r'},19},
    {18,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {18,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {19,{VALUE_RAW,'t'},TOKEN_SHORT|ACCEPTED},
    {19,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {19,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {20,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {20,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {21,{VALUE_RAW,'n'},22},
    {21,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {21,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {22,{VALUE_RAW,'s'},23},
    {22,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {22,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {23,{VALUE_RAW,'i'},24},
    {23,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {23,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {24,{VALUE_RAW,'g'},25},
    {24,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {24,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {25,{VALUE_RAW,'n'},26},
    {25,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {25,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {26,{VALUE_RAW,'e'},27},
    {26,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {26,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {27,{VALUE_RAW,'d'},TOKEN_UNSIGNED|ACCEPTED},
    {27,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {27,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {28,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {28,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {30,{VALUE_RAW,'='},TOKEN_GREATER_EQUAL|ACCEPTED},
    {31,{VALUE_RAW,'='},TOKEN_LOWER_EQUAL|ACCEPTED},
    {32,{VALUE_RAW,'='},TOKEN_EQUAL|ACCEPTED},
    {34,{VALUE_RAW,'='},TOKEN_ASSIGN|ACCEPTED},
    {37,{VALUE_RAW,'='},TOKEN_NOT_EQUAL|ACCEPTED},
    {40,{VALUE_RAW,'>'},TOKEN_TYPE_INDICATOR|ACCEPTED},
    {43,{VALUE_RAW,'&'},TOKEN_LOGICAL_AND|ACCEPTED},
    {44,{VALUE_RAW,'|'},TOKEN_LOGICAL_OR|ACCEPTED},
    {49,{VALUE_CATEGORY,CATEGORY_ANY},81},
    {50,{VALUE_CATEGORY,CATEGORY_ANY},79},
    {60,{VALUE_RAW,'d'},TOKEN_LOAD|ACCEPTED},
    {60,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {60,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {61,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {61,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {62,{VALUE_RAW,'b'},63},
    {62,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {62,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {63,{VALUE_RAW,'r'},64},
    {63,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {63,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {64,{VALUE_RAW,'o'},65},
    {64,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {64,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {65,{VALUE_RAW,'u'},66},
    {65,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {65,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {66,{VALUE_RAW,'t'},67},
    {66,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {66,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {67,{VALUE_RAW,'i'},68},
    {67,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {67,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {68,{VALUE_RAW,'n'},69},
    {68,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {68,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {69,{VALUE_RAW,'e'},TOKEN_SUBROUTINE|ACCEPTED},
    {69,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {69,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {70,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {70,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {71,{VALUE_RAW,'e'},72},
    {71,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {71,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {72,{VALUE_RAW,'t'},73},
    {72,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {72,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {73,{VALUE_RAW,'u'},74},
    {73,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {73,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {74,{VALUE_RAW,'r'},75},
    {74,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {74,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {75,{VALUE_RAW,'n'},TOKEN_RETURN|ACCEPTED},
    {75,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_VAR_NAME|ACCEPTED},
    {75,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {77,{VALUE_CATEGORY,CATEGORY_DIGIT},TOKEN_NUMBER|ACCEPTED},
    {78,{VALUE_RAW,'_'},TOKEN_VAR_NAME|ACCEPTED},
    {78,{VALUE_CATEGORY,CATEGORY_CHARACTER},TOKEN_VAR_NAME|ACCEPTED},
    {79,{VALUE_RAW,'\"'},TOKEN_STRING|ACCEPTED},
    {79,{VALUE_CATEGORY,CATEGORY_ANY},79},
    {81,{VALUE_RAW,'\''},TOKEN_CHARACTER|ACCEPTED},
};

