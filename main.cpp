/*  T02: Collaboration Teamwork

    Have yov ever heard of rubber duck debugging?
    See https://en.wikipedia.org/wiki/Rubber_duck_debugging 
    Original code and ASCII art by Dr. Jan Pearce, Berea College

    Edits made by:
    Zhytkov Denys
    TODO: <Add name of student 2 Here> -- to be added by student 2
    TODO: <Add name of student 3 Here> -- to be added by student 3 (if relevant otherwise, student 2 should remove this line)
 */
#include <iostream>
using namespace std;

int main() {

    int ducknum;

    cout << " Have you ever hver heard of rubber duck debugging?" << endl;
    cout  << " If not, see See https://en.wikipedia.org/wiki/Rubber_duck_debugging.\n" << endl;
    cout << " How many rubber ducks do you want to see? ";
    cin >> ducknum;

    for (int i = 0; i < ducknum; i++) { 
        cout << "                __     " << endl;
        cout << "              aw  __     " << endl; 
        cout << "              <(o )_dw__-" << endl; 
        cout << "               ( .__> /" << endl; 
        cout << "                `---dsd-' " << endl; 
    }

    return 0;
}