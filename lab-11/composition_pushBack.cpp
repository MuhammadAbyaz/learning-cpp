#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song
{
    string title;
    string artist;
    int duration;

public:
    Song(string t, string a, int d) : title(t), artist(a), duration(d) {}
    void getDetails()
    {
        cout << "Title: " << title << endl;
        cout << "Artist: " << artist << endl;
        cout << "Duration: " << duration << endl;
    }
};
class Playlist
{
    vector<Song> songs;

public:
    Playlist() {}
    void addSongs(string t, string a, int d)
    {
        songs.push_back(Song(t, a, d));
    }
    void displayPlaylist()
    {
        for (auto &s : songs)
        {
            s.getDetails();
        }
    }
};
void intro()
{
    cout << "Name: Muhammad Abyaz Khalid" << endl;
    cout << "Roll Number: SE-23053" << endl;
}
int main()
{
    intro();
    Playlist p;
    p.addSongs("idk", "idk", 25);
    p.addSongs("idk", "idk", 25);
    p.addSongs("idk", "idk", 25);
    p.addSongs("idk", "idk", 25);
    p.displayPlaylist();
    return 0;
}