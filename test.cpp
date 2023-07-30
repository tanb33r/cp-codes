vector<string> ReadFile(string _fileName) {
    vector<string> listOut;
    streampos positionInFile = 0;
    bool endOfFile = false;
    while (!endOfFile) {
        ifstream fileIn(_fileName, ifstream::in);
        fileIn.seekg(positionInFile, ios::beg);
        string* tempString = new string();
        getline(fileIn, *tempString);
        endOfFile = fileIn.peek() == EOF;
        positionInFile = endOfFile ? ios::beg : fileIn.tellg();
        if (!endOfFile) listOut.push_back(*tempString);
        fileIn.close();
    }
    return listOut;
}


vector<string> ReadFile(string _fileName) {
    vector<string> listOut;
    streampos positionInFile = 0;
    bool endOfFile = false;
    while (!endOfFile) {
        ifstream fileIn(_fileName, ifstream::in);
        fileIn.seekg(positionInFile, ios::beg);
        string* tempString = new string();
        getline(fileIn, *tempString);
        endOfFile = fileIn.eof() || fileIn.fail();
        positionInFile = endOfFile ? ios::beg : fileIn.tellg();
        if (!endOfFile) listOut.push_back(*tempString);
        fileIn.close();
    }
    return listOut;
}
