class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v;
        istringstream iss(path);
        string buf;
        while(getline(iss,buf,'/')){
            if(!buf.empty() and buf != "." and buf != "..")
                v.push_back(buf);
            else if(!v.empty() and buf == "..")
                v.pop_back();
        }
        if(v.empty())
            return "/";
        buf.clear();
        for(string s : v){
            buf += "/";
            buf += s;
        }
        return buf;
    }
};
