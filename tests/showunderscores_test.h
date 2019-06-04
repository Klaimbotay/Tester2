#ifndef SHOWUNDERSCORES_TEST_H
#define SHOWUNDERSCORES_TEST_H
#include "shared.h"

extern "C" {
#include "common.h"
}


TEST(showUnderscores_test, test1) {

    FILE *outputFile;
    outputFile = fopen("tests/output/output1.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "tests/input/input1.txt", MAXLINE);
    load(txt, inFile);


    showunderscores(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("tests/expected/expected1.txt", "r");
    FILE *outputData;
    outputData = fopen("tests/output/output1.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(showUnderscores_test, test2) {

    FILE *outputFile;
    outputFile = fopen("tests/output/output2.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "tests/input/input2.txt", MAXLINE);
    load(txt, inFile);



    showunderscores(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("tests/expected/expected2.txt", "r");
    FILE *outputData;
    outputData = fopen("tests/output/output2.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(showUnderscores_test, test3) {

    FILE *outputFile;
    outputFile = fopen("tests/output/output3.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "tests/input/input3.txt", MAXLINE);
    load(txt, inFile);



    showunderscores(txt);



    returnStream(outputFile, oldstdOut);


    FILE *expectedData;
    expectedData = fopen("tests/expected/expected3.txt", "r");
    FILE *outputData;
    outputData = fopen("tests/output/output3.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

/*
TEST(showUnderscores_test, test1) {

    FILE *outputFile;
    outputFile = fopen("../../testing2/tests/output/output1.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "../../testing2/tests/input/input1.txt", MAXLINE);
    load(txt, inFile);


    showunderscores(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("../../testing2/tests/expected/expected1.txt", "r");
    FILE *outputData;
    outputData = fopen("../../testing2/tests/output/output1.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(showUnderscores_test, test2) {

    FILE *outputFile;
    outputFile = fopen("../../testing2/tests/output/output2.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "../../testing2/tests/input/input2.txt", MAXLINE);
    load(txt, inFile);



    showunderscores(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("../../testing2/tests/expected/expected2.txt", "r");
    FILE *outputData;
    outputData = fopen("../../testing2/tests/output/output2.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(showUnderscores_test, test3) {

    FILE *outputFile;
    outputFile = fopen("../../testing2/tests/output/output3.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "../../testing2/tests/input/input3.txt", MAXLINE);
    load(txt, inFile);



    showunderscores(txt);



    returnStream(outputFile, oldstdOut);


    FILE *expectedData;
    expectedData = fopen("../../testing2/tests/expected/expected3.txt", "r");
    FILE *outputData;
    outputData = fopen("../../testing2/tests/output/output3.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
*/


#endif // SHOWUNDERSCORES_TEST_H
