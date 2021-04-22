#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel
{
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

protected: //variables in here can be accessed through inheritance
    string OwnerName;

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

class CookingYoutubeChannel : public YouTubeChannel
{
public:
    CookingYoutubeChannel(string name, string OwnerName) : YouTubeChannel(name, OwnerName)
    {
    }
    void Pracitce()
    {
        cout << "blah blah " << OwnerName << endl;
    }
};

class SingersYoutubeChannel : public YouTubeChannel
{
public:
    SingersYoutubeChannel(string name, string OwnerName) : YouTubeChannel(name, OwnerName)
    {
    }
    void Pracitce()
    {
        cout << "blah blah " << OwnerName << endl;
    }
};
int main()
{
    //YouTubeChannel ytChannel("hello", "bruh");
    //ytChannel.PublishVideo("Lol");
    //ytChannel.getInfo();

    CookingYoutubeChannel ytChannel("Amy's kitchen", "Amy");
    CookingYoutubeChannel ytChannel2("Amy's kitchen", "Amy");

    cout << &ytChannel << endl;

    int n = 5;
    cout << &n << endl;

    return 0;
}