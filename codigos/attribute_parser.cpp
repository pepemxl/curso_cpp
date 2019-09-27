/** 
 * Problem from HR: 
 * We have defined our own markup language HRML. 
 * In HRML, each element consists of a starting and ending tag, 
 * and there are attributes associated with each tag. 
 * Only starting tags can have attributes. 
 * We can call an attribute by referencing the tag, 
 * followed by a tilde, '~' and the name of the attribute. 
 * The tags may also be nested.
 * 
 * The opening tags follow the format:
 * <tag-name attribute1-name = "value1" attribute2-name = "value2" ...>
 * The closing tags follow the format:
 * </tag-name>
 * 
 * For example:  
 * <tag1 value = "HelloWorld">
 * <tag2 name = "Name1">
 * </tag2>
 * </tag1>
 * The attributes are referenced as:
 * tag1~value 
 * tag1.tag2~name
 * 
 * You are given the source code in HRML format consisting of $N$ lines. 
 * You have to answer $Q$ queries. 
 * Each query asks you to print the value of the attribute specified. 
 * Print "Not Found!" if there isn't any such attribute.
 * 
 * Input format:
 * The first line consists of two space separated integers, $N$ and $Q$. 
 * $N$ specifies the number of lines in the HRML source program. 
 * $Q$ specifies the number of queries.
 * 
 * 
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;

vector<string> parseStrings(string str) {
  string aux;
  vector<string> lista;
  stringstream ss(str);
  while(ss >> aux){
    lista.push_back(aux);
    ss.ignore();// ignore the next caracter
  }
  return lista;
}

class Tag{
    private:
        string m_strName;
        string m_strValue; 
    public:
        string GetName();
        void SetName(string strName);
};

int main(int argc, char *argv[]) {
    int N, Q;
    cin >> N >> Q;
    cout << N << ", " << Q << "\n";
    std::map<string, string> tagMap;
    std::map<string, string>::iterator it;
    string currentTag = "";
    for(int i = 0;i < N;++i){
        string tag;
        string key;
        string value;
        stringstream ss;
        cin.getline(tag);
        // cin >> tag;
        if(tag[0]=='<'){
            cout << tag << endl;
        }else{
            cout << "No es un tag" << endl;
        }
    //     tag.replace(0,1,"");
    //     if(tag.length() > 0 && tag[0] !='/'){
    //         if(currentTag.length() > 0){
    //             currentTag += "."+tag;
    //         }else{
    //             currentTag += tag;
    //         }
    //         while(cin >> key && key.back() != '>'){
    //             cin >> value;
    //             cin >> value;
    //             value.replace(0,1,"");
    //             if(value.back() == '>'){
    //                 int position = value.length()-2;
    //                 value.replace(position,2,"");
    //                 if(currentTag.length() > 1){
    //                     std::size_t foundDot = currentTag.find("..");
    //                     if(foundDot != std::string::npos){
    //                         currentTag.replace(foundDot,1,"");
    //                         // std::cout << "jojo" <<found <<" " <<currentTag<<'\n';
    //                     }
    //                 }
    //                 // cout << currentTag << "~" << key << ":" << value << endl;
    //                 tagMap.insert(std::pair<string,string>(currentTag+"~"+key,value));
    //                 break;
    //             }else{
    //                 int position = value.length()-1;
    //                 value.replace(position,1,"");
    //                 if(currentTag.length() > 1){
    //                     std::size_t foundDot = currentTag.find("..");
    //                     if(foundDot != std::string::npos){
    //                         currentTag.replace(foundDot,1,"");
    //                         // std::cout << "jojo" <<found <<" " <<currentTag<<'\n';
    //                     }
    //                 }
    //                 // cout << currentTag << "~" << key << ":" << value << endl;
    //                 tagMap.insert(std::pair<string,string>(currentTag+"~"+key,value));
    //             }
    //         }
    //     }else{
    //         //find position of /tag inside of currentTag and replace with ""
    //         if(tag[0] == '/'){
    //             int position = tag.length()-1;
    //             int length = tag.length();
    //             tag.replace(position,1,"");
    //             tag.replace(0,1,"");
    //             // cout << tag << endl;
    //             std::size_t found = currentTag.find(tag);
    //             if(found != std::string::npos){
    //                 // std::cout << found << '\n';
    //                 currentTag.replace(found,length,"");
    //             }
    //             if(currentTag.length() > 1){
    //                 std::size_t foundDot = currentTag.find("..");
    //                 if(foundDot != std::string::npos){
    //                     currentTag.replace(foundDot,1,"");
    //                     // std::cout << "jojo" <<found <<" " <<currentTag<<'\n';
    //                 }
    //             }
    //         }
    //     }
    // }
    // // for (it=tagMap.begin(); it!=tagMap.end(); ++it)
    // //     std::cout << (*it).first << " => " << (*it).second << '\n';
    // for(int i = 0;i < Q;++i){
    //     string query;
    //     cin >> query;
    //     if(tagMap[query] == ""){
    //         cout << "Not Found!" << endl;
    //     }else{
    //         cout << tagMap[query] << endl;
    //     }
    }
    return 0;
}
