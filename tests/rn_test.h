#ifndef RN_TEST_H
#define RN_TEST_H
#include "shared.h"

TEST(rn_test, test1) {

    FILE *outputFile;
    outputFile = fopen("tests/output/output4.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "tests/input/input4.txt", MAXLINE);
    load(txt, inFile);



   rn(txt);
   show(txt);



    returnStream(outputFile, oldstdOut);


    FILE *expectedData;
    expectedData = fopen("tests/expected/expected4.txt", "r");
    FILE *outputData;
    outputData = fopen("tests/output/output4.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(rn_test, test2) {

    FILE *outputFile;
    outputFile = fopen("tests/output/output5.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "tests/input/input5.txt", MAXLINE);
    load(txt, inFile);



   rn(txt);
   show(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("tests/expected/expected5.txt", "r");
    FILE *outputData;
    outputData = fopen("tests/output/output5.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(rn_test, test3) {

    FILE *outputFile;
    outputFile = fopen("tests/output/output6.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "tests/input/input6.txt", MAXLINE);
    load(txt, inFile);



   rn(txt);
   show(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("tests/expected/expected6.txt", "r");
    FILE *outputData;
    outputData = fopen("tests/output/output6.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

/*
TEST(rn_test, test1) {

    FILE *outputFile;
    outputFile = fopen("../../testing2/tests/output/output4.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "../../testing2/tests/input/input4.txt", MAXLINE);
    load(txt, inFile);


   rn(txt);
   show(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("../../testing2/tests/expected/expected4.txt", "r");
    FILE *outputData;
    outputData = fopen("../../testing2/tests/output/output4.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(rn_test, test2) {

    FILE *outputFile;
    outputFile = fopen("../../testing2/tests/output/output5.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "../../testing2/tests/input/input5.txt", MAXLINE);
    load(txt, inFile);



   rn(txt);
   show(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("../../testing2/tests/expected/expected5.txt", "r");
    FILE *outputData;
    outputData = fopen("../../testing2/tests/output/output5.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(rn_test, test3) {

    FILE *outputFile;
    outputFile = fopen("../../testing2/tests/output/output6.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "../../testing2/tests/input/input6.txt", MAXLINE);
    load(txt, inFile);



   rn(txt);
   show(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("../../testing2/tests/expected/expected6.txt", "r");
    FILE *outputData;
    outputData = fopen("../../testing2/tests/output/output6.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

*/


#endif // RN_TEST_H
