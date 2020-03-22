/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "XxX") == string("xxx"));
    CHECK(find(text, "XXX") == string("xxx"));
}

TEST_CASE("No Diggity by Blackstreet") {
string text = "i like the way you work it No digGitY I GOT to bag it up bag it up sHES got class and style StReEt knovledJe by the pound BABY never act wild very loV key on the brobyle";

    CHECK(find(text, "I") == string("i"));
    CHECK(find(text, "diggity") == string("digGitY"));
    CHECK(find(text, "got") == string("GOT"));
    CHECK(find(text, "Shes") == string("sHES"));
    CHECK(find(text, "knowledge") == string("knovledJe"));
    CHECK(find(text, "profile") == string("brobyle"));
    CHECK(find(text, "baby") == string("BABY"));
    CHECK(find(text, "Street") == string("StReEt"));
    CHECK(find(text, "low") == string("loV"));

}


TEST_CASE("Hello by Adele"){
string text = "Hellu brum dhe udher zide y mosdwe qallet a dhouzant dimez dell iuo ym zurri pur eweridhyng dhad ywe tone pud vhen kall newer zeem do fe hume";
/**the right text:
Hello from the other side I must've called a thousand times to tell you I'm sorry, for everything that I've done But when I call you never seem to be home
**/ 
CHECK(phonetic::find(text, "hello") =="Hellu");
CHECK(phonetic::find(text, "from") =="brum");
CHECK(phonetic::find(text, "the") =="dhe");
CHECK(phonetic::find(text, "other") =="udher");
CHECK(phonetic::find(text, "side") =="zide");
CHECK(phonetic::find(text, "i") =="y");
CHECK(phonetic::find(text, "mustve") =="mosdwe");
CHECK(phonetic::find(text, "called") =="qallet");
CHECK(phonetic::find(text, "thousand") =="dhouzant");
CHECK(phonetic::find(text, "times") =="dimez");
CHECK(phonetic::find(text, "to") =="do");
CHECK(phonetic::find(text, "tell") =="dell");
CHECK(phonetic::find(text, "you") =="iuo");
CHECK(phonetic::find(text, "im") =="ym");
CHECK(phonetic::find(text, "sorry") =="zurri");
CHECK(phonetic::find(text, "for") =="pur");
CHECK(phonetic::find(text, "everything") =="eweridhyng");
CHECK(phonetic::find(text, "that") =="dhad");
CHECK(phonetic::find(text, "ive") =="ywe");
CHECK(phonetic::find(text, "done") =="tone");
CHECK(phonetic::find(text, "but") =="pud");
CHECK(phonetic::find(text, "when") =="vhen");
CHECK(phonetic::find(text, "call") =="kall");
CHECK(phonetic::find(text, "never") =="newer");
CHECK(phonetic::find(text, "seem") =="zeem");
CHECK(phonetic::find(text, "be") =="fe");
CHECK(phonetic::find(text, "home") =="hume");
//27 check
}

TEST_CASE("Let it go to Ivgeni"){
string text2="Led yd jo qand holt pack animure dorn avai ant zlam dhe toor  tond qare whad theire goyng zai zdurm raje un qult newer fodheret me anivai";
/**the right text:
Let it go, let it go Can't hold it back anymore Let it go, let it go Turn away and slam the door I don't care what they're going to say Let the storm rage on The cold never bothered me anyway**/
CHECK(phonetic::find(text2, "let") =="Led");
CHECK(phonetic::find(text2, "it") =="yd");
CHECK(phonetic::find(text2, "go") =="jo");
CHECK(phonetic::find(text2, "cant") =="qand");
CHECK(phonetic::find(text2, "hold") =="holt");
CHECK(phonetic::find(text2, "back") =="pack");
CHECK(phonetic::find(text2, "anymore") =="animure");
CHECK(phonetic::find(text2, "turn") =="dorn");
CHECK(phonetic::find(text2, "away") =="avai");
CHECK(phonetic::find(text2, "and") =="ant");
CHECK(phonetic::find(text2, "slam") =="zlam");
CHECK(phonetic::find(text2, "the") =="dhe");
CHECK(phonetic::find(text2, "door") =="toor");
CHECK(phonetic::find(text2, "dont") =="tond");
CHECK(phonetic::find(text2, "care") =="qare");
CHECK(phonetic::find(text2, "what") =="whad");
CHECK(phonetic::find(text2, "theyre") =="theire");
CHECK(phonetic::find(text2, "going") =="goyng");
CHECK(phonetic::find(text2, "say") =="zai");
CHECK(phonetic::find(text2, "storm") =="zdurm");
CHECK(phonetic::find(text2, "rage") =="raje");
CHECK(phonetic::find(text2, "on") =="un");
CHECK(phonetic::find(text2, "cold") =="qult");
CHECK(phonetic::find(text2, "never") =="newer");
CHECK(phonetic::find(text2, "bothered") =="fodheret");
CHECK(phonetic::find(text2, "anyway") =="anivai");
//28 check
}
TEST_CASE("Tudo bom by static and ben el"){
string text3="uh kan dell dhat dunight vere jonna peel lice cinjz op worlt aynd nu vay op ztobfing oz ve jotta taxy farti yn dhe facq zead hawyng a jood dime feyng iuonj tomb dudu pom";
/** the right text:Oh I can tell that tonight we're gonna feel like kings of the world, ain’t no way of stopping us we gotta taxi, party in the back seat tonight, we’re having a good time, being young and dumb and Tudo Tudo Bom**/

CHECK(phonetic::find(text3, "oh") =="uh");
CHECK(phonetic::find(text3, "can") =="kan");
CHECK(phonetic::find(text3, "tell") =="dell");
CHECK(phonetic::find(text3, "that") =="dhat");
CHECK(phonetic::find(text3, "tonight") =="dunight");
CHECK(phonetic::find(text3, "were") =="vere");
CHECK(phonetic::find(text3, "gonna") =="jonna");
CHECK(phonetic::find(text3, "feel") =="peel");
CHECK(phonetic::find(text3, "like") =="lice");
CHECK(phonetic::find(text3, "kings") =="cinjz");
CHECK(phonetic::find(text3, "of") =="op");
CHECK(phonetic::find(text3, "world") =="worlt");
CHECK(phonetic::find(text3, "aint") =="aynd");
CHECK(phonetic::find(text3, "no") =="nu");
CHECK(phonetic::find(text3, "way") =="vay");
CHECK(phonetic::find(text3, "stopping") =="ztobfing");
CHECK(phonetic::find(text3, "us") =="oz");
CHECK(phonetic::find(text3, "we") =="ve");
CHECK(phonetic::find(text3, "gotta") =="jotta");
CHECK(phonetic::find(text3, "taxi") =="taxy");
CHECK(phonetic::find(text3, "party") =="farti");
CHECK(phonetic::find(text3, "in") =="yn");
CHECK(phonetic::find(text3, "back") =="facq");
CHECK(phonetic::find(text3, "seat") =="zead");
CHECK(phonetic::find(text3, "having") =="hawyng");
CHECK(phonetic::find(text3, "good") =="jood");
CHECK(phonetic::find(text3, "time") =="dime");
CHECK(phonetic::find(text3, "being") =="feyng");
CHECK(phonetic::find(text3, "young") =="iuonj");
CHECK(phonetic::find(text3, "dumb") =="tomb");
CHECK(phonetic::find(text3, "tudo") =="dudu");
CHECK(phonetic::find(text3, "bom") =="pom");

//31 check
}

TEST_CASE("The lazy song by Bruno Mars"){
string text4="Dotai dont beel lyke anithyng I guzt vanna lai in mi pet fikcing of fhone zo leawe a mezzage ad  done kause I svear Im nod toynj";
 /** the right text:
Today I don't feel like doing anything I just wanna lay in my bed Don't feel like picking up my phone So leave a message at the tone Cause today I swear I'm not doing anything**/

CHECK(phonetic::find(text4, "today") =="Dotai");
CHECK(phonetic::find(text4, "dont") =="dont");
CHECK(phonetic::find(text4, "feel") =="beel");
CHECK(phonetic::find(text4, "like") =="lyke");
CHECK(phonetic::find(text4, "anything") =="anithyng");
CHECK(phonetic::find(text4, "i") =="I");
CHECK(phonetic::find(text4, "just") =="guzt");
CHECK(phonetic::find(text4, "wanna") =="vanna");
CHECK(phonetic::find(text4, "lay") =="lai");
CHECK(phonetic::find(text4, "in") =="in");
CHECK(phonetic::find(text4, "my") =="mi");
CHECK(phonetic::find(text4, "bed") =="pet");
CHECK(phonetic::find(text4, "picking") =="fikcing");
CHECK(phonetic::find(text4, "up") =="of");
CHECK(phonetic::find(text4, "phone") =="fhone");
CHECK(phonetic::find(text4, "so") =="zo");
CHECK(phonetic::find(text4, "leave") =="leawe");
CHECK(phonetic::find(text4, "a") =="a");
CHECK(phonetic::find(text4, "message") =="mezzage");
CHECK(phonetic::find(text4, "at") =="ad");
CHECK(phonetic::find(text4, "tone") =="done");
CHECK(phonetic::find(text4, "cause") =="kause");
CHECK(phonetic::find(text4, "swear") =="svear");
CHECK(phonetic::find(text4, "not") =="nod");
CHECK(phonetic::find(text4, "doing") =="toynj");
//25 check
}

TEST_CASE("Extrem test") {
string text = "Wekdor quFI yz weri hard Koeue is zYmBler you dont do it for fun it is work";
/**
vector copy is very hard queue is simpler you dont do it for fun it is work
**/

    CHECK(find(text, "vector") == string("Wekdor"));
    CHECK(find(text, "copy") == string("quFI"));
    CHECK(find(text, "is") == string("yz"));
    CHECK(find(text, "very") == string("weri"));
    CHECK(find(text, "queue") == string("Koeue"));
    CHECK(find(text, "simpler") == string("zYmBler"));
    CHECK(find(text, "you") == string("you"));

}









