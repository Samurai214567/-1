#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    cout << "Введите 5 целых: ";
    for (int i = 0, x; i < 5; ++i) { cin >> x; st.push(x); }

    if (st.empty()) { cout << "Стек пуст\n"; return 0; }

    cout << "Верхний: " << st.top() << "\n"; // последний введённый
    st.pop();                                // убираем верхний
    cout << "Новый верхний: " << st.top() << "\n";
    return 0;
}
