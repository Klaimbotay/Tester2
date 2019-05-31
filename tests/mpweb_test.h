#ifndef MPWEB_TEST_H
#define MPWEB_TEST_H
#include "shared.h"

extern "C" {
#include "common.h"
}

TEST(mpweb_test, test1) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output7.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output7.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input7.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input7.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt, 1, 3);
   mpweb(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected7.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected7.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output7.txt", "r") : outputData = fopen("../../testing2/tests/output/output7.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mpweb_test, test2) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output8.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output8.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input8.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input8.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt, 3, 3);
   mpweb(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected8.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected8.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output8.txt", "r") : outputData = fopen("../../testing2/tests/output/output8.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mpweb_test, test3) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output9.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output9.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input9.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input9.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mpweb(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected9.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected9.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output9.txt", "r") : outputData = fopen("../../testing2/tests/output/output9.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}




#endif // MPWEB_TEST_H
