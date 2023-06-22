import 'package:flutter/material.dart';

void main() {
  runApp(const SongsMediaPlayerApp());
}

class SongsMediaPlayerApp extends StatelessWidget {
  const SongsMediaPlayerApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'FOR KAVIN',
      theme: ThemeData.dark(),
      home: SongsMediaPlayerPage(),
    );
  }
}

class SongsMediaPlayerPage extends StatelessWidget {
  final List<Album> albums = [
    Album(
        'You', '',
        'https://i1.sndcdn.com/artworks-000460370490-9lqkyx-t500x500.jpg'),
    Album(
        'Lucifer', '',
        'https://m.media-amazon.com/images/M/MV5BNDJjMzc4NGYtZmFmNS00YWY3LThjMzQtYzJlNGFkZGRiOWI1XkEyXkFqcGdeQXVyMTkxNjUyNQ@@._V1_.jpg'),
    Album(
        'Bridgertons', '',
        'https://www.umusic.ca/wp-content/uploads/2022/03/bridgerton2.jpg'),

    Album(
        'Wednesday', '',
  'https://filmmusicreporter.com/wp-content/uploads/2022/11/va-90.jpeg'),
    Album( 'Resident Evil', '',
  'https://static.wikia.nocookie.net/residentevil/images/8/86/Cover-Artwork.webp/revision/latest?cb=20220708071047'),
  Album(
      'Queen charlotte', '',
      'https://cdn.smehost.net/legacyrecordingscom-hydricprod/wp-content/uploads/2023/05/230504-queen-charlotte-soundtrack.jpg'),
    Album(
        'Ginny & Gergia', '',
        'https://e.snmc.io/i/600/s/92b0d7ab174d0c419542245e143d120f/8891159/lili-haydn-and-ben-bromfield-ginny-and-georgia-music-from-the-netflix-series-cover-art.jpg'),
    Album(
        'Outer Banks', '',
        'https://i.pinimg.com/originals/cf/a9/b6/cfa9b66df693989dea6787ab899b2ffa.jpg'),
    Album(
        'Squid Games', '',
        'https://m.economictimes.com/thumb/msid-100507155,width-1440,height-1080,resizemode-4,imgsize-100374/squid-game-season-2-release-date-on-netflix-all-we-know-so-far.jpg'),

    Album(
        'Riverdale', '',
        'https://d.newsweek.com/en/full/1534545/riverdale-season-4-netflix-release-date.jpg?w=1600&h=1200&l=57&t=30&q=88&f=d4ab5cb176556f333f189579a29d0db6'),
    Album(

  'Peaky Blinder', '',
  'https://i.pinimg.com/originals/27/a5/8b/27a58b1855fc97b0b0fe43f00f60b24e.jpg'),

  ];
  final List<Watching> watching= [
    Watching(
        'The Next 365 Days', '',
        'https://static.wikia.nocookie.net/netflix/images/d/d8/The_Next_365_Days.jpg/revision/latest?cb=20220808180941'),
    Watching(
        'Royalteen', '',
        'https://occ-0-5068-299.1.nflxso.net/dnm/api/v6/evlCitJPPCVCry0BZlEFb5-QjKc/AAAABRJ5fNdxNsjPVptoF7Ofg77Py4TtjzU_96rsGhKWtbCHXgLNlhlcneiW4WegM2PTf7xojmDKT296z2QIhFxtSsVhmmNG0DEwISwkpzcfSuBIpjn6EL2C8Er9JK30NOVpHacuXw.jpg'),

    Watching(
        'No One Gets Out Alive', '',
        'https://www.heavenofhorror.com/wp-content/uploads/2021/09/No-One-Gets-Out-Alive-Netflix-1200x900.jpg'),
    Watching(
        'Eat Pray Love', '',
        'https://occ-0-2567-2568.1.nflxso.net/dnm/api/v6/6gmvu2hxdfnQ55LZZjyzYR4kzGk/AAAABfboV-zHeFHodg1dJPjoA_zZ4aCHqLdKAhvCWYkhGWbE-pORlXrDe6I44kmJ7fYWeFTKfsb3P6_2sRnR5vf9N--HA8f1vzAZJSwz.jpg?r=62d'),
    Watching(
        'Before Sunrise', '',
        'https://m.media-amazon.com/images/S/pv-target-images/0c6696c643dfab0a3ad715090c05103c1bba235d6eda11562d167d4b0eb35d74._UR1920,1080_.jpg'),

    Watching(
        'The Viking Wolf', '',
        'https://i.ytimg.com/vi/vTIVxKr3myE/maxresdefault.jpg'),

    Watching(
        'No Limit', '',
        'https://m.media-amazon.com/images/M/MV5BNTFlNTkxYjQtNjJlOS00ZTAzLTljY2EtMTU1ZTljMWYzZWJhXkEyXkFqcGdeQXVyMTUwOTU0Mw@@._V1_.jpg'),

    Watching(
        'Look Both Ways', '',
        'https://m.media-amazon.com/images/M/MV5BYmU5ZTU3MWUtMmExZi00YjIxLWIyOWUtZTliNjFjMTEzNDEzXkEyXkFqcGdeQXVyMTEzMTI1Mjk3._V1_.jpg'),
    Watching(
        'The litttle Mermaid', '',
        'https://m.media-amazon.com/images/I/81lo95a3KsL._AC_UF1000,1000_QL80_.jpg'),

    Watching(
        'The School of Good and Evil', '',
        'https://m.media-amazon.com/images/M/MV5BNzM1ODI4Y2UtMGYxMS00OTUxLWE4NzItNjgxMTM2NzRjZThkXkEyXkFqcGdeQXVyMTA1OTcyNDQ4._V1_.jpg'),
    Watching(
        'Money Hiest', '',
        'https://static.wikia.nocookie.net/netflix/images/0/0e/MH_S5_Promotional.jpg/revision/latest?cb=20210904021400'),

  ];

  final List<Artist> artist= [
    Artist(
        'How to sell drugs online fast', '',
        'https://flxt.tmsimg.com/assets/p16852051_b_v13_ad.jpg'),

    Artist(
        'Choose or Die', '',
        'https://m.media-amazon.com/images/M/MV5BMTRkN2ZkOWMtYzYzMS00OGQzLTljZTAtYmI1MjQ0NjUzYjJhXkEyXkFqcGdeQXVyMTk3NjY1NjM@._V1_FMjpg_UX1000_.jpg'),
    Artist(
        'After Ever Happy', '',
        'https://upload.wikimedia.org/wikipedia/en/6/63/AfterEverHappy.jpg'),

    Artist(
        'Friends', '',
        'https://m.media-amazon.com/images/M/MV5BNDVkYjU0MzctMWRmZi00NTkxLTgwZWEtOWVhYjZlYjllYmU4XkEyXkFqcGdeQXVyNTA4NzY1MzY@._V1_.jpg'),

    Artist(
        '13 Reasons Why', '',
  'https://www.usatoday.com/gcdn/-mm-/cabde9733a6570e3949adcfbbc887823de70cf63/c=0-138-1650-2338/local/-/media/2017/04/11/USATODAY/USATODAY/636275235624531106-13ReasonsWhy-MTI-cover.jpg?width=660&height=880&fit=crop&format=pjpg&auto=webp'),

    Artist(
        'Lucifer', '',
  'https://images.gids.tv/series/1158/lucifer-1622389480746.jpg?w=1800&watermark%5Btext%5D=Bron%3A+Netflix'),

    Artist(
        'Ginny and Georgia', '',
        'https://rosshightimes.com/wp-content/uploads/2023/02/ginny-607x900.jpg'),
    Artist(
        'Vampire Dairies', '',
        'https://www.whats-on-netflix.com/wp-content/uploads/2022/12/the-vampire-diaries-leaving-netflix-uk-again-january-2022-jpg.webp'),

    Artist(
        'The Blond', '',
        'https://people.com/thmb/vvUyQgvMPfYyWu3sWE4Ucve1ewQ=/1500x0/filters:no_upscale():max_bytes(150000):strip_icc():focal(599x0:601x2)/marilyn-monroe-ana-de-armas-7-b1a25cfff3894cff8af94795b2df6b43.jpg'),

    Artist(
        'After', '',
        'https://www.streamingrant.com/wp-content/uploads/2021/11/After.png'),

    Artist(
        'Stranger Things', '',
        'https://imagesvc.meredithcorp.io/v3/mm/image?url=https%3A%2F%2Fstatic.onecms.io%2Fwp-content%2Fuploads%2Fsites%2F6%2F2016%2F06%2Fstranger-things-1.jpg&q=60'),
    Artist(
        'Purple Hearts', '',
        'https://variety.com/wp-content/uploads/2022/04/PH_SG_0001A.jpeg?crop=304px%2C0px%2C3896px%2C2190px&resize=1000%2C563'),

  ];

  final List<Song> songs = [
    Song('Next in Fashion ', '',
        'https://cdn.sortiraparis.com/images/80/83043/851535-gigi-hadid-co-presentera-la-saison-2-du-concours-de-mode-next-in-fashion-sur-netflix.jpg'),
    Song('Glow up', '',
        'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTq4WB88lup53FTnWWW2WGy5q3SoSR9DX3FBmmdIpfTfRtAVOalYQHYoXgBAlhCPLHwG64&usqp=CAU'),
    Song('Baking Impossible', '',
        'https://www.comingsoon.net/wp-content/uploads/sites/3/2023/02/Baking_Impossible_Key_Art.jpg?w=450'),
    Song('Drink masters', '',
        'https://m.media-amazon.com/images/M/MV5BZTE3ZTVhYWMtNGQ1MC00MDM0LTg3ZmYtZjU3MzcwY2RiNmNhXkEyXkFqcGdeQXVyMzMxODg2NjY@._V1_.jpg'),
    Song('Love is Blind', '',
        'https://resizing.flixster.com/NRC4rkyAvPI531OPhWaUBbmQ7BE=/ems.cHJkLWVtcy1hc3NldHMvdHZzZWFzb24vMGJlYmY1MDktNDdmMy00ZTMxLWJiZjEtZjliMjYyYzY0ZjFmLmpwZw=='),
    Song('Sugar Rush ', '',
        'https://m.media-amazon.com/images/M/MV5BNzdlMzI5OGEtNzNiNC00OTA5LTg2MGUtYmFkNmZmZjkxNWI5XkEyXkFqcGdeQXVyMjQzOTM1NTc@._V1_.jpg'),
    Song('School of Chocolate', '',
        'https://flxt.tmsimg.com/assets/p20804921_b_v13_aa.jpg'),
    Song('Best Leftover Ever', '',
        'https://m.media-amazon.com/images/M/MV5BNDViYjE0OWUtMjNlOC00OWQ4LTkwMWQtYjI1MjBlODI4MWE4XkEyXkFqcGdeQXVyNjEwNTM2Mzc@._V1_.jpg'),
    Song('Nailed it', '',
        'https://upload.wikimedia.org/wikipedia/en/5/5c/Nailed_It_-_Netflix_Show_Poster.jpg'),
    Song('Supermodelme', '',
        'https://occ-0-806-299.1.nflxso.net/dnm/api/v6/oQyw8Fv9eE41UPapt7zHvdUdzrE/AAAABckxkfbBYadCbBhXbOwpTliVqY9ojGwvgutvblCwds8O08l0oVt5EN63dsyU4M0cyFf19XfA0aWyymQ431yNWmL2qE1R1FEcNbZV.jpg'),
  ];

  final List<Podcasts> podcasts = [
    Podcasts(
        '', '',
        'https://www.kakuchopurei.com/wp-content/uploads/2023/04/Demon-Slayer-Season-3-Netflix-Malaysia.jpg'),
    Podcasts(
        '', '',
        'https://assets.fireside.fm/file/fireside-images/podcasts/images/0/02211927-a9c4-418a-9a28-054ed299eec3/cover_medium.jpg'),
    Podcasts(
        '', '',
        'https://m.media-amazon.com/images/M/MV5BZDM1ZWY4Y2EtNWQzOC00MTk5LWJjYWQtYjU0ZWI0Y2Q3Mzk2XkEyXkFqcGdeQXVyMTEzMTI1Mjk3._V1_.jpg'),
    Podcasts(
        '', '',
        'https://m.economictimes.com/thumb/msid-100656966,width-1200,height-900,resizemode-4,imgsize-76038/black-mirror-season-6-netflix-unveils-official-trailer-featuring-salma-hayek-pinault.jpg'),
    Podcasts(
        '', '',
        'https://koreanbinge.files.wordpress.com/2023/03/netflix-bloodhounds.jpg?w=1024'),

    Podcasts(
        '', '',
        'https://static.wikia.nocookie.net/netflix/images/a/aa/XO%2C_Kitty_poster.jpg/revision/latest?cb=20230505101911'),
    Podcasts(
        '', '',
        'https://m.media-amazon.com/images/M/MV5BODNiNWQxMmMtMjIwNC00NDU2LTgwYzctNTI1ZDcyODBjZTNiXkEyXkFqcGdeQXVyMTkxNjUyNQ@@._V1_FMjpg_UX1000_.jpg'),

    Podcasts(
        '', '',
        'https://www.bollywoodhungama.com/wp-content/uploads/2022/12/Jenna-Ortegas-Wednesday-becomes-Netflixs-third-most-popular-English-language-series-of-all-time-with-752.52-million-hours-viewed.jpg'),
    Podcasts(
        '', '',
        'https://image.fresherslive.com/latestnews/2023/06/fake-profile-netflix-ending-explained-647897178b74a7673263-900.webp'),
    Podcasts(
        '', '',
        'https://papyrus.greenville.edu/wp-content/uploads/2019/03/Netflix-Our-Planet.jpg'),
  ];
  final List<Me> me = [
    Me('Manifest ', '',
        'images/manifest.jpg'),
    Me('Stranger Things ', '',
        'images/stranger.jpg'),
    Me('Dork Diaries', '',
        'images/hi.jpg'),
    Me('Before Sunrise', '',
        'images/before.jpg'),
    Me('Mismatched', '',
        'images/mis.jpg'),
    Me('Pieces of a Women', '',
        'images/lol.jpg'),
    Me('After We Fell ', '',
        'images/after.jpg'),



  ];

  SongsMediaPlayerPage({Key? key}) : super(key: key);


  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          title: const Text('For Kavin'),
          backgroundColor: Colors.black87,

        ),

        body: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Expanded(
                child: ListView(
                  children: [
                    const Padding(
                      padding: EdgeInsets.all(16.0),
                      child: Text(
                        'TV Shows ,Movies and Much More',
                        textAlign: TextAlign.left,
                        style: TextStyle(
                          fontSize: 20.0,
                          fontWeight: FontWeight.bold,
                        ),
                      ),
                    ),
                    SizedBox(
                      height: 480,
                      child: ListView.builder(
                        scrollDirection: Axis.horizontal,
                        itemCount: albums.length,
                        itemBuilder: (context, index) {
                          return Card(
                            shape: RoundedRectangleBorder(
                              borderRadius: BorderRadius.circular(10.0),
                            ),
                            elevation: 10.0,
                            child: Column(
                              crossAxisAlignment: CrossAxisAlignment.center,
                              mainAxisSize: MainAxisSize.max,
                              children: [
                                Container(
                                  width: 420.0,
                                  height: 420.0,
                                  decoration: BoxDecoration(
                                    borderRadius: BorderRadius.circular(10.0),
                                    image: DecorationImage(
                                      image: NetworkImage(
                                          albums[index].imageUrl),
                                      fit: BoxFit.fill,
                                    ),
                                  ),
                                ),
                                Expanded(
                                  child: Container(
                                    width: 420,
                                    decoration: BoxDecoration(
                                      color: Colors.black.withOpacity(0.6),
                                      borderRadius: const BorderRadius.only(
                                        bottomLeft: Radius.circular(0.0),
                                        bottomRight: Radius.circular(0.0),
                                      ),
                                    ),
                                    padding: const EdgeInsets.fromLTRB(
                                        4.0, 4.0, 4.0, 4.0),
                                    child: Column(
                                      crossAxisAlignment: CrossAxisAlignment
                                          .start,
                                      children: [
                                        Text(
                                          albums[index].title,
                                          style: const TextStyle(
                                            fontWeight: FontWeight.bold,
                                            color: Colors.white,

                                          ),
                                        ),
                                        const SizedBox(height: 2.0),
                                        Text(
                                          albums[index].artist,
                                          style: const TextStyle(
                                            color: Colors.white,
                                          ),
                                        ),
                                      ],
                                    ),
                                  ),
                                ),
                              ],
                            ),
                          );
                        },
                      ),
                    ),

                    const Padding(
                      padding: EdgeInsets.all(16.0),
                      child: Text(
                        'Continue Watching for Kavin',
                        textAlign: TextAlign.left,
                        style: TextStyle(
                          fontSize: 20.0,
                          fontWeight: FontWeight.bold,
                        ),
                      ),
                    ),
                    SizedBox(
                      height: 230,
                      child: ListView.builder(
                        scrollDirection: Axis.horizontal,
                        itemCount: watching.length,
                        itemBuilder: (context, index) {
                          return Card(
                            shape: RoundedRectangleBorder(
                              borderRadius: BorderRadius.circular(10.0),
                            ),
                            elevation: 10.0,
                            child: Column(
                              crossAxisAlignment: CrossAxisAlignment.center,
                              mainAxisSize: MainAxisSize.max,
                              children: [
                                Container(
                                  width: 135.0,
                                  height: 135.0,
                                  decoration: BoxDecoration(
                                    borderRadius: BorderRadius.circular(10.0),
                                    image: DecorationImage(
                                      image: NetworkImage(
                                          watching[index].imageUrl),
                                      fit: BoxFit.fill,
                                    ),
                                  ),
                                ),
                                Expanded(
                                  child: Container(
                                    width:135,
                                    decoration: BoxDecoration(
                                      color: Colors.black.withOpacity(0.6),
                                      borderRadius: const BorderRadius.only(
                                        bottomLeft: Radius.circular(10.0),
                                        bottomRight: Radius.circular(10.0),
                                      ),
                                    ),
                                    padding: const EdgeInsets.fromLTRB(
                                        8.0, 4.0, 8.0, 8.0),
                                    child: Column(
                                      crossAxisAlignment: CrossAxisAlignment
                                          .start,
                                      children: [
                                        Text(
                                          watching[index].title,
                                          style: const TextStyle(
                                            fontWeight: FontWeight.bold,
                                            color: Colors.white,
                                          ),
                                        ),
                                        const SizedBox(height: 2.0),
                                        Text(
                                          watching[index].artist,
                                          style: const TextStyle(
                                            color: Colors.white,
                                          ),
                                        ),
                                      ],
                                    ),
                                  ),
                                ),
                              ],
                            ),
                          );
                        },
                      ),
                    ),

    const Padding(
    padding: EdgeInsets.all(16.0),
    child: Text(
    'New Releases',
    textAlign: TextAlign.left,
    style: TextStyle(
    fontSize: 20.0,
    fontWeight: FontWeight.bold,
    ),
    ),
    ),
    SizedBox(
    height: 260,
    child: ListView.builder(
    scrollDirection: Axis.horizontal,
    itemCount: artist.length,
    itemBuilder: (context, index) {
    return Card(
    shape: RoundedRectangleBorder(
    borderRadius: BorderRadius.circular(10.0),
    ),
    elevation: 10.0,
    child: Column(
    crossAxisAlignment: CrossAxisAlignment.center,
    mainAxisSize: MainAxisSize.max,
    children: [
    Container(
    width: 180.0,
    height: 180.0,
    decoration: BoxDecoration(
    borderRadius: BorderRadius.circular(10.0),
    image: DecorationImage(
    image: NetworkImage(
        artist[index].imageUrl),
    fit: BoxFit.fill,
    ),
    ),
    ),
    Expanded(
    child: Container(
    width:180,
    decoration: BoxDecoration(
    color: Colors.black.withOpacity(0.6),
    borderRadius: const BorderRadius.only(
    bottomLeft: Radius.circular(10.0),
    bottomRight: Radius.circular(10.0),
    ),
    ),
    padding: const EdgeInsets.fromLTRB(
    8.0, 4.0, 8.0, 8.0),
    child: Column(
    crossAxisAlignment: CrossAxisAlignment
        .start,
    children: [
    Text(
      artist[index].title,
    style: const TextStyle(
    fontWeight: FontWeight.bold,
    color: Colors.white,
    ),
    ),
    const SizedBox(height: 2.0),
    Text(
      artist[index].artist,
    style: const TextStyle(
    color: Colors.white,
    ),
    ),
    ],
    ),
    ),
    ),
    ],
    ),
    );
    },
    ),
    ),


                    const Padding(
                      padding: EdgeInsets.all(16.0),
                      child: Text(
                        'Competition Reality TV',
                        textAlign: TextAlign.left,
                        style: TextStyle(
                          fontSize: 20.0,
                          fontWeight: FontWeight.bold,
                        ),
                      ),
                    ),
                    SizedBox(
                      height: 255.0,
                      child: ListView.builder(
                        scrollDirection: Axis.horizontal,
                        itemCount: songs.length,
                        itemBuilder: (context, index) {
                          return Padding(
                            padding: const EdgeInsets.all(8.0),
                            child: Column(
                              children: [
                                Container(
                                  width: 200.0,
                                  height: 200.0,
                                  decoration: BoxDecoration(
                                      shape: BoxShape.rectangle,
                                      image: DecorationImage(
                                          image:
                                          NetworkImage(songs[index].imageUrl))),
                                ),
                                const SizedBox(height: 4.0),
                                Text(songs[index].title),
                                Text(songs[index].artist),
                              ],
                            ),
                          );
                        },
                      ),
                    ),

                    const Padding(
                      padding: EdgeInsets.all(16.0),
                      child: Text(
                        'Top 10 TV Shows in India Today',
                        textAlign: TextAlign.left,
                        style: TextStyle(
                          fontSize: 20.0,
                          fontWeight: FontWeight.bold,
                        ),
                      ),
                    ),
                    SizedBox(
                      height: 220,
                      child: ListView.builder(
                        scrollDirection: Axis.horizontal,
                        itemCount: podcasts.length,
                        itemBuilder: (context, index) {
                          return Card(
                            shape: RoundedRectangleBorder(
                              borderRadius: BorderRadius.circular(10.0),
                            ),
                            elevation: 10.0,
                            child: Column(
                              crossAxisAlignment: CrossAxisAlignment.center,
                              mainAxisSize: MainAxisSize.max,
                              children: [
                                Container(
                                  width: 200.0,
                                  height: 200.0,
                                  decoration: BoxDecoration(
                                    borderRadius: BorderRadius.circular(10.0),
                                    image: DecorationImage(
                                      image: NetworkImage(
                                          podcasts[index].imageUrl),
                                      fit: BoxFit.fill,
                                    ),
                                  ),
                                ),
                                Expanded(
                                  child: Container(
                                    width: 200,
                                    decoration: BoxDecoration(
                                      color: Colors.black.withOpacity(0.6),
                                      borderRadius: const BorderRadius.only(
                                        bottomLeft: Radius.circular(10.0),
                                        bottomRight: Radius.circular(10.0),
                                      ),
                                    ),
                                    padding: const EdgeInsets.fromLTRB(
                                        8.0, 4.0, 8.0, 8.0),
                                    child: Column(
                                      crossAxisAlignment: CrossAxisAlignment
                                          .start,
                                      children: [
                                        Text(
                                          podcasts[index].title,
                                          style: const TextStyle(
                                            fontWeight: FontWeight.bold,
                                            color: Colors.white,
                                          ),
                                        ),
                                        const SizedBox(height: 2.0),
                                        Text(
                                          podcasts[index].artist,
                                          style: const TextStyle(
                                            color: Colors.white,
                                          ),
                                        ),
                                      ],
                                    ),
                                  ),
                                ),
                              ],
                            ),
                          );
                        },
                      ),
                    ),


                    const Padding(
                      padding: EdgeInsets.all(16.0),
                      child: Text(
                        'Lets Watch Again',
                        textAlign: TextAlign.left,
                        style: TextStyle(
                          fontSize: 20.0,
                          fontWeight: FontWeight.bold,
                        ),
                      ),
                    ),
                    SizedBox(
                      height: 250,
                      child: ListView.builder(
                        scrollDirection: Axis.horizontal,
                        itemCount: me.length,
                        itemBuilder: (context, index) {
                          return Card(
                            shape: RoundedRectangleBorder(
                              borderRadius: BorderRadius.circular(10.0),
                            ),
                            elevation: 10.0,
                            child: Column(
                              crossAxisAlignment: CrossAxisAlignment.center,
                              mainAxisSize: MainAxisSize.max,
                              children: [
                                Container(
                                  width: 190.0,
                                  height: 190.0,
                                  decoration: BoxDecoration(
                                    borderRadius: BorderRadius.circular(10.0),
                                    image: DecorationImage(
                                      image: AssetImage(
                                          me[index].imageUrl),
                                      fit: BoxFit.fill,
                                    ),
                                  ),
                                ),
                                Expanded(
                                  child: Container(
                                    width: 190,
                                    decoration: BoxDecoration(
                                      color: Colors.black.withOpacity(0.6),
                                      borderRadius: const BorderRadius.only(
                                        bottomLeft: Radius.circular(10.0),
                                        bottomRight: Radius.circular(10.0),
                                      ),
                                    ),
                                    padding: const EdgeInsets.fromLTRB(
                                        8.0, 4.0, 8.0, 8.0),
                                    child: Column(
                                      crossAxisAlignment: CrossAxisAlignment
                                          .start,
                                      children: [
                                        Text(
                                          me[index].title,
                                          style: const TextStyle(
                                            fontWeight: FontWeight.bold,
                                            color: Colors.white,
                                          ),
                                        ),
                                        const SizedBox(height: 2.0),
                                        Text(
                                          me[index].artist,
                                          style: const TextStyle(
                                            color: Colors.white,
                                          ),
                                        ),
                                      ],
                                    ),
                                  ),
                                ),
                              ],
                            ),
                          );
                        },
                      ),
                    ),
                  ],
                ),
              ),

            ]
        )
    );
  }
}





class Album {
  final String title;
  final String artist;
  final String imageUrl;

  Album(this.title, this.artist, this.imageUrl);
}
class Watching {
  final String title;
  final String artist;
  final String imageUrl;

  Watching(this.title, this.artist, this.imageUrl);
}
class Artist {
  final String title;
  final String artist;
  final String imageUrl;

  Artist(this.title, this.artist, this.imageUrl);
}

class Song {
  final String title;
  final String artist;
  final String imageUrl;

  Song(this.title, this.artist, this.imageUrl);
}

class Podcasts {
  final String title;
  final String artist;
  final String imageUrl;

  Podcasts(this.title, this.artist, this.imageUrl);
}
class Me {
  final String title;
  final String artist;
  final String imageUrl;

  Me(this.title, this.artist, this.imageUrl);
}
