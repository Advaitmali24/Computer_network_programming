#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n, frame;
    int lostFrame;

    cout << "Enter number of frames: ";
    cin >> n;

    // Generate a random frame number to be lost
    srand(time(0));
    lostFrame = rand() % n + 1;

    cout << endl <<    "Randomly selected lost frame: " << lostFrame << endl;

    for (frame = 1; frame <= n; frame++)
    {
        cout << endl <<"Sender: Sending Frame " << frame << endl;

        // Simulate random frame loss
        if (frame == lostFrame)
        {
            cout << "Receiver: Frame " << frame << " lost!" << endl;
            cout << "Sender: Waiting for ACK..." << endl;
            cout << "Sender: Timeout!" << endl;

            // Retransmission
            cout << "Sender: Retransmitting Frame " << frame << endl;
            cout << "Receiver: Frame " << frame << " received." << endl;
        }
        else
        {
            cout << "Receiver: Frame " << frame << " received." << endl;
        }

        cout << "Receiver: Sending ACK for Frame " << frame << endl;
        cout << "Sender: ACK received for Frame " << frame << endl;
    }

    cout << endl <<"All frames transmitted successfully." << endl;

    return 0;
}

