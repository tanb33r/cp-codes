#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    int lineCount = 1;
    freopen("outputf.cpp","w",stdout);
//    cout << "Enter lines of text (enter '###' to stop):\n";
    cout << "Add-Type -AssemblyName System.Windows.Forms" << endl;
    cout << "Start-Sleep -Seconds 3" << endl;
    cout << "$delayInSeconds = 0.2" << endl;
    cout << "$lines = @(" << endl;
    while (true) {
        getline(cin, input);

        if (input == "###") {
            break;
        }

        cout << "\"";
        for(auto c:input) {
            if(c=='{')
                cout<<"##";
            else if(c=='}')
                cout<<"@@";
            else if(c=='"')
                cout<<"*";
            else if(c=='(')
                cout<<"&&";
            else if(c==')')
                cout<<"!!";
            else if(c=='`')
                cout<<">>";
            else
                cout<<c;
        }
        cout<< "\"," << endl;
    }
    cout << "\"\")" << endl;
    cout << "[System.Windows.Forms.SendKeys]::SendWait(\"+\")" << endl;
    cout << "Start-Sleep -Seconds $delayInSeconds" << endl;
    cout << endl;
    cout << "foreach ($line in $lines) {" << endl;
    cout << "    foreach ($char in $line.ToCharArray()) {" << endl;
    cout << "        $escapedChar = if ($char -match '([\"`$%+{}])') { \"$char\" } else { $char }" << endl;
    cout << "        [System.Windows.Forms.SendKeys]::SendWait(\"$escapedChar\")" << endl;
    cout << "        Start-Sleep -Seconds $delayInSeconds" << endl;
    cout << "    }" << endl;
    cout << endl;
    cout << "    [System.Windows.Forms.SendKeys]::SendWait(\"{ENTER}\")" << endl;
    cout << "    Start-Sleep -Seconds $delayInSeconds" << endl;
    cout << "}" << endl;
}
