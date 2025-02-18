#include <iostream>
#include <vector>

using namespace std;

vector<int> find2sComplement(vector<int> binary)
{
    int n = binary.size();
    vector<int> twosComp(n, 0);

    // Step 1: flip the bits
    for (int i = 0; i < n; i++)
    {
        twosComp[i] = binary[i] ^ 1;
    }

    // Step 2: add 1
    int carry = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        int sum = twosComp[i] + carry;
        twosComp[i] = sum % 2;
        carry = sum / 2;

        if (carry == 0)
        {
            // optimization
            break;
        }
    }

    // Handling overflow if needed
    if (carry)
    {
        twosComp[0]=1;
    }

    return twosComp;
}

int main()
{
    vector<int> binary = {0, 1, 1, 0, 1};
    vector<int> twosComp = find2sComplement(binary);
    for (int i = 0; i < twosComp.size(); i++)
    {
        cout << twosComp[i] << " ";
    }
    cout << endl;
    return 0;
}
