#include <iostream>
#include <fstream>

void file_start(std::ofstream& f) {
	f << "#include <iostream>\n"
"#include \"../tester/Window.cpp\"\n"
"#include \"../tester/Browser.cpp\"\n"
"#include \"../tester/LinkedList.cpp\"\n"

"long long _Total_Memory_Deallocated;\n"
"long long _Total_Memory_Allocated;\n"
"long long line;\n"
"std::string file;\n"
"std::string func;\n"


"int main() {\n"
"    _Total_Memory_Deallocated = 0;\n"
"    _Total_Memory_Allocated = 0;\n"
"    line = 0;\n{\n";
}

void file_end(std::ofstream& f) {
	f << "}\nstd::cout << \"\\n\";\n"
"std::cout << \"Total Memory Allocated: \" << _Total_Memory_Allocated << \" bytes.\\n\"\n"
" << \"Total Memory Deallocated: \" << _Total_Memory_Deallocated << \" bytes.\\n\";\n"
"	return 0;\n};";
}

// ----------------------------
// BROWSER

void newBrowserPointer(std::ofstream& f, std::string name) {
	f << "Browser* " << name << " = new Browser();\n";
}

void deleteBrowserPointer(std::ofstream& f, std::string name) {
	f << "delete " << name << ";\n";
}

void newBrowser(std::ofstream& f, std::string& name) {
	f << "Browser " << name << ";\n";
}

void browserNewWindow(std::ofstream& f, std::string name, bool ptr) {
	f << name << (ptr ? "->" : ".") << "newWindow();\n";
}

void browserCloseWindow(std::ofstream& f, std::string name, bool ptr) {
	f << name << (ptr ? "->" : ".") << "closeWindow();\n";
}

void browserSwitchToWindow(std::ofstream& f, std::string name, int index, bool ptr) {
	f << name << (ptr ? "->" : ".") << "switchToWindow(" << index << ");\n";
}

void browserGetWindow(std::ofstream& f, std::string name, int index, bool ptr) {
	f << name << (ptr ? "->" : ".") << "getWindow(" << index << ");\n";
}

void browserMoveTab(std::ofstream& f, std::string name, const std::string& from, const std::string& to, bool ptr) {
	f << name << (ptr ? "->" : ".") << "moveTab(" << from << ", " << to << ");\n";
}

void browserMergeWindows(std::ofstream& f, std::string name, const std::string& window1, const std::string& window2, bool ptr) {
	f << name << (ptr ? "->" : ".") << "mergeWindows(" << window1 << ", " << window2 << ");\n";
}
void browserMergeAllWindows(std::ofstream& f, std::string name, bool ptr) {
	f << name << (ptr ? "->" : ".") << "mergeAllWindows();\n";
}
void browserCloseAllWindows(std::ofstream& f, std::string name, bool ptr) {
	f << name << (ptr ? "->" : ".") << "closeAllWindows();\n";
}
void browserCloseEmptyWindows(std::ofstream& f, std::string name, bool ptr) {
	f << name << (ptr ? "->" : ".") << "closeEmptyWindows();\n";
}
void browserPrint(std::ofstream& f, std::string name, bool ptr) {
	f << name << (ptr ? "->" : ".") << "print();\n";
}

void browserAddWindow(std::ofstream& f, std::string name, std::string w, bool ptr) {
	f << name << (ptr ? "->" : ".") << "addWindow(" << w << ");\n";
}

// BROWSER
// -----------------------

// -----------------------
// TAB
void newTabPointer(std::ofstream& f, std::string name) {
	f << "Tab* " << name << " = new Tab();\n";
}

void deleteTabPointer(std::ofstream& f, std::string name) {
	f << "delete " << name << ";\n";
}

void new_Tab(std::ofstream& f, std::string name) {
	f << "Tab " << name << ";\n";
}

void newTabParametrized(std::ofstream& f, std::string name, const std::string& _url, const std::string& title, const std::string& contents) {
	f << "Tab " << name << " = Tab(\"" << _url << "\", \"" << title << "\",\"" << contents << "\");\n";
}

void newTabPointerParametrized(std::ofstream& f, std::string name, const std::string& _url, const std::string& title, const std::string& contents) {
	f << "Tab* " << name << " = new Tab(\"" << _url << "\", \"" << title << "\", \"" << contents << "\");\n";
}

void tabGetUrl(std::ofstream& f, std::string name, bool ptr) {
	f << name << (ptr ? "->" : ".") << "getUrl();\n";
}

void tabGetTitle(std::ofstream& f, std::string name, bool ptr) {
	f << name << (ptr ? "->" : ".") << "getTitle();\n";
}

void tabGetContents(std::ofstream& f, std::string name, bool ptr) {
	f << name << (ptr ? "->" : ".") << "getContents();\n";
}

// TAB
// -----------------------
// -----------------------
// WINDOW

void newWindowPointer(std::ofstream& f, std::string name) {
	f << "Window* " << name << " = new Window();\n";
}

void new_Window(std::ofstream& f, std::string name) {
	f << "Window " << name << ";\n";
}

void deleteWindowPointer(std::ofstream& f, std::string name) {
	f << "delete " << name << ";\n";
}

void windowGetActiveTab(std::ofstream& f, std::string name, bool ptr) {
	f << name << (ptr ? "->" : ".") << "getActiveTab();\n";
}
void windowIsEmpty(std::ofstream& f, std::string name, bool ptr) {
	f << name << (ptr ? "->" : ".") << "isEmpty();\n";
}

void windowNewTab(std::ofstream& f, std::string name, char tab, bool ptr) {
	f << name << (ptr ? "->" : ".") << "newTab(" << tab << ");\n";
}
void windowCloseTab(std::ofstream& f, std::string name, bool ptr) {
	f << name << (ptr ? "->" : ".") << "closeTab();\n";
}

void windowMoveActiveTabTo(std::ofstream& f, std::string name, int index, bool ptr) {
	f << name << (ptr ? "->" : ".") << "moveActiveTabTo(" << index << ");\n";
}

void windowChangeActiveTabTo(std::ofstream& f, std::string name, int index, bool ptr) {
	f << name << (ptr ? "->" : ".") << "changeActiveTabTo(" << index << ");\n";
}

void windowAddTab(std::ofstream& f, std::string name, char tab, bool ptr) {
	f << name << (ptr ? "->" : ".") << "addTab(" << tab << ");\n";
}

void windowPrint(std::ofstream& f, std::string name, bool ptr) {
	f << name << (ptr ? "->" : ".") << "print();\n";
}

// WINDOW
// -----------------------








