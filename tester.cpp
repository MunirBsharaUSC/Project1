#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream myfile;
    myfile.open("person_template.txt");

    string temp;
    string line;
    string type;
    int counter=1;
    if(myfile.is_open()){
        std::getline(myfile,line);
        std::getline(myfile,line);
        std::getline(myfile, line);

        std::getline(myfile, line);
        while(line[counter]){
            if(line[counter]==')'){
                type = temp;
                temp ="";
                counter++;
            }
            else {
                temp = temp + line[counter];
            }
            counter++;
        }
        cout << type << endl;
        cout << temp << endl;
        temp ="";
        type ="";
        counter=1;
        std::getline(myfile, line);
        while(line[counter]){
            if(line[counter]==')' || line[counter]=='\n'){
                type = temp;
                temp ="";
                counter++;
            }
            else {
                temp = temp + line[counter];
            }
            counter++;
        }
        cout << type << endl;
        cout << temp;
    }
}
