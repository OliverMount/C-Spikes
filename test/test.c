#include <R.h>
#include <Rinternals.h>

struct MyStruct {
    int data;
};

void myStructFinalizer(SEXP ptr) {
    struct MyStruct *obj = (struct MyStruct *)R_ExternalPtrAddr(ptr);
    free(obj);
}

SEXP createMyStruct() {
    struct MyStruct *obj = malloc(sizeof(struct MyStruct));
    obj->data = 0;

    SEXP result = PROTECT(R_MakeExternalPtr(obj, R_NilValue, R_NilValue));
    R_RegisterCFinalizerEx(result, myStructFinalizer, TRUE);
    UNPROTECT(1);
    return result;
}

SEXP getData(SEXP ptr) {
    struct MyStruct *obj = (struct MyStruct *)R_ExternalPtrAddr(ptr);
    return ScalarInteger(obj->data);
}

SEXP setData(SEXP ptr, SEXP value) {
    struct MyStruct *obj = (struct MyStruct *)R_ExternalPtrAddr(ptr);

    if (TYPEOF(value) == INTSXP) {
        obj->data = INTEGER(value)[0];
    } else if (TYPEOF(value) == REALSXP) {
        obj->data = (int)REAL(value)[0];
    } else {
        error("Invalid argument type for setData");
    }

    return R_NilValue;
}

