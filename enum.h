#ifndef ENUM_H
#define ENUM_H

// define node type
typedef enum _nodeType {
    TOKEN_INT,
    TOKEN_HEX,
    TOKEN_OCT,
    TOKEN_FLOAT,
    TOKEN_ID,
    TOKEN_TYPE,
    TOKEN_OTHER,
    NOT_A_TOKEN

}NodeType;

typedef enum _kind { BASIC, ARRAY, STRUCTURE, FUNCTION } Kind;
typedef enum _basicType { INT_TYPE, FLOAT_TYPE } BasicType;
typedef enum _errorType {
    UNDEF_VAR = 1,         // Undefined Variable
    REDEF_VAR = 3,             // Redefined Variable
    TYPE_MISMATCH_ASSIGN = 5,  // Type mismatchedfor assignment.
    LEFT_VAR_ASSIGN = 6,       // The left-hand side of an assignment must be a variable.
    TYPE_MISMATCH_OP = 7,      // Type mismatched for operands.
    NOT_A_ARRAY = 10,           // Variable is not a Array
    NOT_A_INT = 12,             // Variable is not a Integer
} ErrorType;

#endif
