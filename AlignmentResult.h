//
// Created by wyl on 2022/8/8.
//

#ifndef GSAM_ALIGNMENTRESULT_H
#define GSAM_ALIGNMENTRESULT_H
#include<iostream>
#include<cstdio>
#include<sstream>
#include "json/json/json.h"
using namespace std;
struct AlignmentResult{
    string queryName;
    int queryLen;
    int start;
    int end;
    char direction;
    string path;
    string s;
    int pathLen;
    int startPos;
    int endPos;
    int matches;
    int blockLen;
    int mappingQuality;

    //cigar
    double alignmentScore;
    int mismatches;
    int deletes;
    int inserts;
    AlignmentResult alignmentResult();
    string cigarStr;
    string getGFALine(bool include_cigar);
    string getJsonLine(bool beautiful_json);
};
#endif //GSAM_ALIGNMENTRESULT_H
