string func(string S)
{
    vector<string> mapping = {"2", "22", "222", "3", "33", "333", "4", "44", "444", "5", "55", "555", "6", "66", "666", "7", "77", "777", "7777", "8", "88", "888", "9", "99", "999", "9999"};

    string result;
    for (auto i : S) {
        if (i == ' ') {
            result += '0';
            continue;
        }
        result += mapping[i - 'A'];
    }
    return result;
}