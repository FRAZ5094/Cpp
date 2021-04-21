#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel
{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

public:
    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void UnSubscribe()
    {
        if (SubscribersCount > 0)
        {
            SubscribersCount--;
        }
    }

    void Subscribe()
    {
        SubscribersCount++;
    }

    void getInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Ownername: " << OwnerName << endl;
        cout << "SubscriberCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }

    void PublishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }
};

int main()
{
    YouTubeChannel ytChannel("JamieBwodn", "jamie");
    ytChannel.PublishVideo("Lol");
    ytChannel.getInfo();

    return 0;
}