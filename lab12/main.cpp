#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

class Track{
    int pozitie;
    int durata;//secunde
    string nume;
    //const cu param
    //friend bool operator <(const track &, const track &)
    //afis
    //get durata
public:
    Track(int p, int d, string n):pozitie(p), durata(d), nume(n){}

    friend bool operator <(const Track& a, const Track& b){
        if(a.pozitie < b.pozitie)
            return true;
        else
            return false;
    }

    void afis() const{
        cout<<pozitie<<". "<<durata<<"s "<<nume<<'\n';
    }

    int get_durata() const{
        return durata;
    }
};

  class Album{
      int an;
      string nume;
      set<Track> tracks;
      //const cu param
      //get_nume
      //insert_track
      //afis
      //get durata
      //cate mai lungi de *parametru*
  public:
    Album(int a, string n, set<Track> t):an(a),nume(n),tracks(t){

    }
    string get_nume(){
        return nume;
    }
    void insert_track(Track t){
        tracks.insert(t);
    }
    void afis(){
        cout<<an<<" "<<nume<<" ";

        set<Track>::iterator i;
        for(i=tracks.begin(); i!=tracks.end(); i++)
        {
            i->afis();
        }
    }
    int get_durata(){
        int s = 0;

        set<Track>::iterator i;
        for(i=tracks.begin(); i!=tracks.end(); i++)
        {
            s+=(*i).get_durata();
        }
        return s;
    }
    int get_an(){return an;}

  };

class Artist{
      string nume;
      multimap<int, Album> albume;
      //const cu param
      //insert/delete_album
      //afis cronologica
      //afis nume albume intre an1 si an2
  public:
    Artist(string n, multimap<int, Album> a):nume(n), albume(a){}
    void afis(){
        cout<<nume<<" ";
        multimap<int, Album>::iterator i;
        for(i=albume.begin(); i!=albume.end(); i++)
        {
            (*i).second.afis();
        }
    }
    void insert_album(Album a){
        pair <int, Album> aux(a.get_an(), a);
        albume.insert(aux);
    }

  };

int main()
{
    Track t1(1, 180, "nume cantec"), t2(2, 200, "alt nume cantec"), t3(3, 220, "nmcntc");
    set <Track> tracks;
    tracks.insert(t1);
    tracks.insert(t2);
    tracks.insert(t3);

    Album a1(2021, "nume album", tracks), a2(2020, "alt nume album", tracks);
    multimap<int, Album> albume;
    pair <int, Album> aux1(a1.get_an(), a1);
    albume.insert(aux1);
    pair <int, Album> aux2(a2.get_an(), a2);
    albume.insert(aux2);


    Artist art("nume artist", albume);
    art.afis();

    return 0;
}
