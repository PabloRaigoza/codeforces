#include <bits/stdc++.h>
using namespace std;

const string code = 
"#include <bits/stdc++.h>\n"
"using namespace std;\n"
"int main() {\n"
"    ios::sync_with_stdio(0);\n"
"    cin.tie(0); cout.tie(0);\n"
"    \n"
"    \n"
"}"
;

int getUserInp(const int argc, const char *argv[]) {
    int num = -1;
    if (argc >= 2) {
        try {
            string num_str = argv[1];
            size_t size;
            num = stoi(num_str, &size);
            if (num_str.length() != 4 or size != 4)
                throw invalid_argument("Not four digits!");
        } catch (invalid_argument e){
            cout << e.what() << " : Not a valid path!\n";
            cout << "Input should be numbers of form XXXX.\n";
            num = -1;
        }
    }
    return num;
}

void sys_call(string exec) {
    system(exec.c_str());
}

void generateFileCpp(string path, string name) {
    string full_path = path + name;;
    if (!filesystem::exists(full_path)) {
        cout << "Creating file: " << full_path << '\n';
        sys_call("touch " + full_path);
        sys_call("echo \"" + code + "\" > " + full_path);
    }
}

int main(const int argc, const char *argv[]) {
    int num = getUserInp(argc, argv);
    if (num != -1) {
        string num_str = to_string(num);
        string n0(1,num_str[0]); string n1(1,num_str[1]);
        string n2(1,num_str[2]); string n3(1,num_str[3]);
        string path = n0 + "/" + n1 + "/" + n2 + "/" + n3 + "/";
        sys_call("mkdir -p " + path);
        sys_call("touch " + path + "in");
        for (int i = 2; i < argc; i++) {
            string cur = argv[i];
            if (i == 2 and cur == "-all") {
                generateFileCpp(path, "A.cpp");
                generateFileCpp(path, "B.cpp");
                generateFileCpp(path, "C.cpp");
                generateFileCpp(path, "D.cpp");
                generateFileCpp(path, "E.cpp");
            } else {
                transform(cur.begin(), cur.end(),cur.begin(), ::toupper);
                generateFileCpp(path,cur+".cpp");
            }
        }

        if (argc >= 3) {
            sys_call("cd " + path);
            if (string(argv[2]) == "-all") {
                sys_call("code " + path + "A.cpp");
            } else {
                string curFile = argv[2];
                transform(curFile.begin(), curFile.end(),curFile.begin(), ::toupper);
                sys_call("code " + path + curFile + ".cpp");
            }
        }
    }
}