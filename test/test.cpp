/**
 * @file test.cpp
 * @The test file of md5.
 * @author Jiewei Wei
 * @mail weijieweijerry@163.com
 * @github https://github.com/JieweiWei
 * @data Oct 19 2014
 *
 */

#include <iostream>
#include "../src/md5.h"

using std::cout;
using std::endl;

void printMD5(const string& message) {
  cout << "md5(\"" << message << "\") = "
       << MD5(message).toStr() << endl;
}

int main1() {
  printMD5("");
  printMD5("a");
  printMD5("abc");
  printMD5("message digest");
  printMD5("abcdefghijklmnopqrstuvwxyz");
  printMD5("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
	return 0;
}

int main() {
    for (int i = 0; i < 100000; ++i) {
        MD5("abc");
        MD5("message digest");
        MD5("abcdefghijklmnopqrstuvwxyz");
        MD5("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
        MD5("oaisuseroaivmervopazsihejrvancsioerijcdmapsdirtucvopaisdrejhscimdnrmthtaiusoevrnsirtejhnapeiourmntcjhgpaoiwcrejhnpaiwusrhetnciasuehrpoansverjhpoasvinerhwoiserughaoniurvh ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyiruha9irumapoewirumnvaoiprutpavbnosruytbnsperub tsp8or tyosaerthjaoitnb s9oprg artu40 tua9q43u9 0z");
        MD5("oaisuseroaivmervopazsihejrvancsioerijcdmapsdirtucvopaisdrejhscimdnrmthlkahsdfialkseirjaocmerikjasoetaiusoevrnsirtejhnapeiourmntcjhgpaoiwcrejhnpaiwusrhetnciasuehrpoansverjhpoasvinerhwoiserughaoniurvh ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyiruha9irumapoewirumnvaoiprutpavbnosruytbnsperub tsp8or tyosaerthjaoitnb s9oprg artu40 tua9q43u9 0z");
        MD5("oaisuseroaivmervopazsihejrvancsioerijcdmapsdirtucvopaisdrejhscimdnrmthtaiusoevrnsirtejhnapeiourmntcjhgpaoiwcrejhnpaiwusrhetnciasuehrpoansverjhpoasvinerhwoiserughaoniurvh ABCDEFGHIJKLMNOPQRSTUVWXYZablkasjedllkiahhzfdskdfjdjflakzsjfklasjflkazsjdflkz;aoirgjhaiurthvsiufgusvydrngcdefghijklmnopqrstuvwxyiruha9irumapoewirumnvaoiprutpavbnosruytbnsperub lkajsedofljaoisejroacmetsp8or tyosaerthjaoitnb s9oprg artu40 tua9q43u9 0z");
        MD5("oaisuseroaivmervopazsihejrvancsioerijcdmapsdirtucvopaisdrejhscimdnrmthtaiusoevrnsirtejhnapeiourmntcjhgpaoiwcrejhnpaiwusrhetnciasuehrpoansverjhpoasvinerhwoiserughaoniurvh ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyiruha9irumapoewirumnvaoiprutpavbnosruytbnsperub tsp8olkjlkajlskdfjalsdkjf;askdjf;zkdjfklasdjflajefolkasjedllkiahhzfdskdfjdjflakzsjfklasjflkazsjdflkz\n\n\n\t\r\rr tyosaerthjaoitnb s9oprg artu40 tua9q43u9 0z");
        MD5("oaisuseroaivmervopazsilaiksdjfljsadlfkjaslfj   lsdjfkajsdlkfjhnkjzshdfghejrvancsioerijcdmapsdirtucvopaisdrejhscimdnrmthtaiusoevrnsirtejhnapeiourmntcjhgpaoiwcrejhnpaiwusrhetnciasuehrpoansverjhpoasvinerhwoiserughaoniurvh ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyiruha9irumapoewirumnvaoiprutpavbnosruytbnsperub tsp8or tyosaerthjaoitnb s9oprg artu40 tua9q43u9 0z");
        MD5("oaisuseroaivmervopazsihejrvancsioerijcdmapsdirtucvopaisdrejhscimdnrmthtaiusoevrnsirtejhnapeiourmntcjhgpaoiwcrejhnpaiwusrhetnciasuehrpoansverjhpoasvinerhwoiserughaoniurvh ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyiruha9irumapoewirumnvaoiprutpavbnosruytbnsperub tsp8or tyosaerthjaoitnb s9oprg artu40 tua9q43u9laijsdlifjaosidjfoiasjer;ogjhoaerihgohaerthgoizhdiurhgruiodsazhgfubisaaaaaaaaaaaaaaaaaaaaaaaaa;ldfkzhjgbapoirzrzdfgjoaiemv aiyrgivanryitaewmrvcqouiwet pwoietuwpoetywopetypyw4th apwytq894t84y982345 y094370   1Y24 T927Y43TR Q47 0z");
    }
    /*
    printMD5("abc");
    printMD5("message digest");
    printMD5("abcdefghijklmnopqrstuvwxyz");
    printMD5("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
    printMD5("oaisuseroaivmervopazsihejrvancsioerijcdmapsdirtucvopaisdrejhscimdnrmthtaiusoevrnsirtejhnapeiourmntcjhgpaoiwcrejhnpaiwusrhetnciasuehrpoansverjhpoasvinerhwoiserughaoniurvh ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyiruha9irumapoewirumnvaoiprutpavbnosruytbnsperub tsp8or tyosaerthjaoitnb s9oprg artu40 tua9q43u9 0z");
    printMD5("oaisuseroaivmervopazsihejrvancsioerijcdmapsdirtucvopaisdrejhscimdnrmthlkahsdfialkseirjaocmerikjasoetaiusoevrnsirtejhnapeiourmntcjhgpaoiwcrejhnpaiwusrhetnciasuehrpoansverjhpoasvinerhwoiserughaoniurvh ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyiruha9irumapoewirumnvaoiprutpavbnosruytbnsperub tsp8or tyosaerthjaoitnb s9oprg artu40 tua9q43u9 0z");
    printMD5("oaisuseroaivmervopazsihejrvancsioerijcdmapsdirtucvopaisdrejhscimdnrmthtaiusoevrnsirtejhnapeiourmntcjhgpaoiwcrejhnpaiwusrhetnciasuehrpoansverjhpoasvinerhwoiserughaoniurvh ABCDEFGHIJKLMNOPQRSTUVWXYZablkasjedllkiahhzfdskdfjdjflakzsjfklasjflkazsjdflkz;aoirgjhaiurthvsiufgusvydrngcdefghijklmnopqrstuvwxyiruha9irumapoewirumnvaoiprutpavbnosruytbnsperub lkajsedofljaoisejroacmetsp8or tyosaerthjaoitnb s9oprg artu40 tua9q43u9 0z");
    printMD5("oaisuseroaivmervopazsihejrvancsioerijcdmapsdirtucvopaisdrejhscimdnrmthtaiusoevrnsirtejhnapeiourmntcjhgpaoiwcrejhnpaiwusrhetnciasuehrpoansverjhpoasvinerhwoiserughaoniurvh ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyiruha9irumapoewirumnvaoiprutpavbnosruytbnsperub tsp8olkjlkajlskdfjalsdkjf;askdjf;zkdjfklasdjflajefolkasjedllkiahhzfdskdfjdjflakzsjfklasjflkazsjdflkz\n\n\n\t\r\rr tyosaerthjaoitnb s9oprg artu40 tua9q43u9 0z");
    printMD5("oaisuseroaivmervopazsilaiksdjfljsadlfkjaslfj   lsdjfkajsdlkfjhnkjzshdfghejrvancsioerijcdmapsdirtucvopaisdrejhscimdnrmthtaiusoevrnsirtejhnapeiourmntcjhgpaoiwcrejhnpaiwusrhetnciasuehrpoansverjhpoasvinerhwoiserughaoniurvh ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyiruha9irumapoewirumnvaoiprutpavbnosruytbnsperub tsp8or tyosaerthjaoitnb s9oprg artu40 tua9q43u9 0z");
    printMD5("oaisuseroaivmervopazsihejrvancsioerijcdmapsdirtucvopaisdrejhscimdnrmthtaiusoevrnsirtejhnapeiourmntcjhgpaoiwcrejhnpaiwusrhetnciasuehrpoansverjhpoasvinerhwoiserughaoniurvh ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyiruha9irumapoewirumnvaoiprutpavbnosruytbnsperub tsp8or tyosaerthjaoitnb s9oprg artu40 tua9q43u9laijsdlifjaosidjfoiasjer;ogjhoaerihgohaerthgoizhdiurhgruiodsazhgfubisaaaaaaaaaaaaaaaaaaaaaaaaa;ldfkzhjgbapoirzrzdfgjoaiemv aiyrgivanryitaewmrvcqouiwet pwoietuwpoetywopetypyw4th apwytq894t84y982345 y094370   1Y24 T927Y43TR Q47 0z");
    */
    return 0;
}
