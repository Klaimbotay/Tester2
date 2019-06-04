#ifndef MPWEB_TEST_H
#define MPWEB_TEST_H
#include "shared.h"

extern "C" {
#include "common.h"
}


TEST(mpweb_test, test1) {

    FILE *outputFile;
    outputFile = fopen("tests/output/output7.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "tests/input/input7.txt", MAXLINE);
    load(txt, inFile);



   mwcrsr(txt, 1, 3);
   mpweb(txt);
   show(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("tests/expected/expected7.txt", "r");
    FILE *outputData;
    outputData = fopen("tests/output/output7.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mpweb_test, test2) {

    FILE *outputFile;
    outputFile = fopen("tests/output/output8.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "tests/input/input8.txt", MAXLINE);
    load(txt, inFile);



   mwcrsr(txt, 3, 3);
   mpweb(txt);
   show(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("tests/expected/expected8.txt", "r");
    FILE *outputData;
    outputData = fopen("tests/output/output8.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mpweb_test, test3) {

    FILE *outputFile;
    outputFile = fopen("tests/output/output9.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);


    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "tests/input/input9.txt", MAXLINE);
    load(txt, inFile);



   mpweb(txt);
   show(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("tests/expected/expected9.txt", "r");
    FILE *outputData;
    outputData = fopen("tests/output/output9.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}




/*


TEST(mpweb_test, test1) {

    FILE *outputFile;
    outputFile = fopen("../../testing2/tests/output/output7.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
   int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "../../testing2/tests/input/input7.txt", MAXLINE);
    load(txt, inFile);



   mwcrsr(txt, 1, 3);
   mpweb(txt);
   show(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("../../testing2/tests/expected/expected7.txt", "r");
    FILE *outputData;
    outputData = fopen("../../testing2/tests/output/output7.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}


TEST(mpweb_test, test2) {

    FILE *outputFile;
    outputFile = fopen("../../testing2/tests/output/output8.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "../../testing2/tests/input/input8.txt", MAXLINE);
    load(txt, inFile);



   mwcrsr(txt, 3, 3);
   mpweb(txt);
   show(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("../../testing2/tests/expected/expected8.txt", "r");
    FILE *outputData;
    outputData = fopen("../../testing2/tests/output/output8.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mpweb_test, test3) {

    FILE *outputFile;
    outputFile = fopen("../../testing2/tests/output/output9.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);



    text txt = create_text();
    char inFile[MAXLINE];
    strncpy(inFile, "../../testing2/tests/input/input9.txt", MAXLINE);
    load(txt, inFile);



   mpweb(txt);
   show(txt);



    returnStream(outputFile, oldstdOut);



    FILE *expectedData;
    expectedData = fopen("../../testing2/tests/expected/expected9.txt", "r");
    FILE *outputData;
    outputData = fopen("../../testing2/tests/output/output9.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
*/

#endif // MPWEB_TEST_H





