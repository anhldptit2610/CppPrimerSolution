unsigned buf_size = 1024;
int ia[buf_size];           // illegal, buf_size is not constant

int ia[4 * 7 - 14];         // legal

int ia[txt_size()];         // if using constexpr then it maybe not raise error

char st[11] = "fundamental";        // error, still missing null-terminated character