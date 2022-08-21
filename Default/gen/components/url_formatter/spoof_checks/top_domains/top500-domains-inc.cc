#include "components/url_formatter/spoof_checks/top_domains/top500_domains.h"
namespace top500_domains {
const char* const kTop500EditDistanceSkeletons[] = {
"acadernia.edu",
"acadernic.ru",
"accuweather.corn",
"adobe.corn",
"agoda.corn",
"airbnb.corn",
"alibaba.corn",
"aliexpress.corn",
"allegro.pl",
"allocine.fr",
"alodokter.corn",
"ancestry.corn",
"anirneflv.net",
"anyxxx.pro",
"apkpure.corn",
"apple.corn",
"appledaily.corn",
"archive.org",
"arnazon.ca",
"arnazon.co.jp",
"arnazon.co.uk",
"arnazon.corn",
"arnazon.corn.rnx",
"arnazon.de",
"arnazon.es",
"arnazon.fr",
"arnazon.in",
"arnazon.it",
"arneblo.jp",
"arnericanexpress.corn",
"asahi.corn",
"autotrader.corn",
"avito.ru",
"azlyrics.corn",
"badoo.corn",
"baidu.corn",
"baixaki.corn.br",
"banggood.corn",
"bankofarnerica.corn",
"battle.net",
"bestbuy.corn",
"bet365.corn",
"biblegateway.corn",
"biglobe.ne.jp",
"bilibili.corn",
"blackboard.corn",
"blogspot.corn",
"bloornberg.corn",
"booking.corn",
"bookrnyshow.corn",
"britannica.corn",
"bukalapak.corn",
"businessinsider.corn",
"bustle.corn",
"buzzfeed.corn",
"caixa.gov.br",
"canada.ca",
"canalrcn.corn",
"canva.corn",
"capitalone.corn",
"cargurus.corn",
"cbsnews.corn",
"cbssports.corn",
"cdiscount.corn",
"ceneo.pl",
"chase.corn",
"chaturbate.corn",
"chegg.corn",
"chinatirnes.corn",
"chron.corn",
"cinecalidad.to",
"clarin.corn",
"collegedunia.corn",
"correios.corn.br",
"craigslist.org",
"cricbuzz.corn",
"dailyrnail.co.uk",
"dailyrnotion.corn",
"depositphotos.corn",
"detik.corn",
"deviantart.corn",
"dhgate.corn",
"dictionary.corn",
"discordapp.corn",
"dropbox.corn",
"ebay-kleinanzeigen.de",
"eksisozluk.corn",
"elconfidencial.corn",
"elintransigente.corn",
"elpais.corn",
"elrnundo.es",
"eluniversal.corn.rnx",
"engadget.corn",
"epicgarnes.corn",
"europa.eu",
"eventbrite.corn",
"excite.co.jp",
"expedia.corn",
"express.co.uk",
"facebook.corn",
"fandango.corn",
"fandorn.corn",
"fedex.corn",
"filrnweb.pl",
"flickr.corn",
"flipkart.corn",
"forbes.corn",
"foxnews.corn",
"francetvinfo.fr",
"gaana.corn",
"garnepedia.corn",
"garnespot.corn",
"gearbest.corn",
"genius.corn",
"gfycat.corn",
"giphy.corn",
"gisrneteo.ru",
"github.corn",
"glassdoor.corn",
"globo.corn",
"glosbe.corn",
"gofundrne.corn",
"goodreads.corn",
"google.ca",
"google.cl",
"google.co.id",
"google.co.in",
"google.co.jp",
"google.co.kr",
"google.co.th",
"google.co.uk",
"google.corn",
"google.corn.ar",
"google.corn.au",
"google.corn.br",
"google.corn.co",
"google.corn.rnx",
"google.corn.tr",
"google.corn.tw",
"google.de",
"google.es",
"google.fr",
"google.it",
"google.nl",
"google.pl",
"google.pt",
"google.ru",
"gotporn.corn",
"gsrnarena.corn",
"gurntree.corn",
"haberler.corn",
"hatenablog.corn",
"hdfcbank.corn",
"hdrezka.ag",
"healthline.corn",
"hilton.corn",
"hindustantirnes.corn",
"hornedepot.corn",
"hotels.corn",
"hotpepper.jp",
"hotstar.corn",
"huawei.corn",
"huffpost.corn",
"icicibank.corn",
"icloud.corn",
"ilovepdf.corn",
"ilrneteo.it",
"indeed.corn",
"indiarnart.corn",
"indiatirnes.corn",
"indiatoday.in",
"infobae.corn",
"instagrarn.corn",
"instructables.corn",
"instructure.corn",
"interia.pl",
"intuit.corn",
"investing.corn",
"investopedia.corn",
"irecornrnend.ru",
"irngur.corn",
"irnpress.co.jp",
"itrnedia.co.jp",
"jobrapido.corn",
"justdial.corn",
"kahoot.it",
"kakaku.corn",
"kakao.corn",
"kayak.corn",
"kenhl4.vn",
"khanacaderny.org",
"kinopoisk.ru",
"kizlarsoruyor.corn",
"kknews.cc",
"kohls.corn",
"kornpas.corn",
"kotobank.jp",
"l7track.net",
"lazada.co.th",
"leagueoflegends.corn",
"leboncoin.fr",
"lenta.ru",
"lernonde.fr",
"letrnejerk.corn",
"lifewire.corn",
"linkedin.corn",
"livedoor.corn",
"livejournal.corn",
"livescore.corn",
"livestrong.corn",
"naver.corn",
"nbcnews.corn",
"nbcsports.corn",
"netflix.corn",
"newsl8.corn",
"nextdoor.corn",
"nicovideo.jp",
"nifty.corn",
"nikkansports.corn",
"nikkei.corn",
"nvidia.corn",
"nypost.corn",
"nytirnes.corn",
"office.corn",
"office365.corn",
"okdiario.corn",
"onlinesbi.corn",
"onlinevideoconverter.corn",
"orange.fr",
"otvfoco.corn.br",
"over-blog.corn",
"pantip.corn",
"passeidireto.corn",
"patreon.corn",
"paypal.corn",
"perfectgirls.net",
"pinterest.co.uk",
"pinterest.corn",
"pinterest.es",
"pixiv.net",
"pixnet.net",
"playstation.corn",
"politico.corn",
"polygon.corn",
"pornhub.corn",
"prezi.corn",
"prirnevideo.corn",
"prograrnrne-tv.net",
"qualtrics.corn",
"quizlet.corn",
"quora.corn",
"rakuten.co.jp",
"ranker.corn",
"rarnbler.ru",
"reddit.corn",
"redtube.corn",
"researchgate.net",
"reverso.net",
"rightrnove.co.uk",
"rnakernytrip.corn",
"rnalavida.corn",
"rnarca.corn",
"rnawdoo3.corn",
"rnayoclinic.org",
"rnediafire.corn",
"rnediurn.corn",
"rnercadolibre.corn",
"rnercadolibre.corn.ar",
"rnercadolibre.corn.co",
"rnercadolibre.corn.rnx",
"rnercadolivre.corn.br",
"rnercari.corn",
"rnessenger.corn",
"rnicrosoft.corn",
"rnicrosoftonline.corn",
"rnilliyet.corn.tr",
"rnobile.de",
"rnobileOl.corn",
"rnonografias.corn",
"rnundodeportivo.corn",
"rnyanirnelist.net",
"rnynavi.jp",
"rnynet.corn",
"roblox.corn",
"rottentornatoes.corn",
"rozetka.corn.ua",
"sabah.corn.tr",
"sahibinden.corn",
"sanook.corn",
"sarkariresult.corn",
"sarnsung.corn",
"sciencedirect.corn",
"scribd.corn",
"sfgate.corn",
"shopee.co.th",
"shutterstock.corn",
"sinoptik.ua",
"skyscanner.net",
"skysports.corn",
"slideshare.net",
"softonic.corn",
"soundcloud.corn",
"sozcu.corn.tr",
"spankbang.corn",
"speedtest.net",
"spiegel.de",
"spotify.corn",
"sputniknews.corn",
"srnallpdf.corn",
"stackexchange.corn",
"stackoverflow.corn",
"stearncornrnunity.corn",
"stearnpowered.corn",
"study.corn",
"surveyrnonkey.corn",
"t-online.de",
"tabelog.corn",
"taleo.net",
"taobao.corn",
"target.corn",
"techradar.corn",
"techtudo.corn.br",
"telegraph.co.uk",
"terrnornetropolitico.it",
"thebalancecareers.corn",
"thedailybeast.corn",
"thefreedictionary.corn",
"theguardian.corn",
"thepiratebay.org",
"thesaurus.corn",
"theverge.corn",
"thoughtco.corn",
"tistory.corn",
"tnaflix.corn",
"tokopedia.corn",
"trello.corn",
"tribunnews.corn",
"tripadvisor.corn",
"trulia.corn",
"trustpilot.corn",
"turnblr.corn",
"tutorialspoint.corn",
"twitch.tv",
"twitter.corn",
"ubisoft.corn",
"uderny.corn",
"ultirnate-guitar.corn",
"uniqlo.corn",
"uptodown.corn",
"urbandictionary.corn",
"usatoday.corn",
"virneo.corn",
"vnexpress.net",
"w3schools.corn",
"walrnart.corn",
"washingtonpost.corn",
"wattpad.corn",
"weather.corn",
"webrnd.corn",
"weebly.corn",
"wellsfargo.corn",
"wetransfer.corn",
"whatsapp.corn",
"wikihow.corn",
"wikipedia.org",
"wiktionary.org",
"wixsite.corn",
"wondershare.corn",
"wordpress.corn",
"wordreference.corn",
"xfinity.corn",
"xharnster.corn",
"xnxx2.pro",
"xozilla.corn",
"xvideos.corn",
"yahoo.co.jp",
"yahoo.corn",
"yandex.ru",
"yenisafak.corn",
"youjizz.corn",
"youporn.corn",
"yourdictionary.corn",
"yourn7.corn",
"youtube.corn",
"zendesk.corn",
"zillow.corn",
"znanija.corn",
"zornato.corn",
};
  constexpr size_t kNumTop500EditDistanceSkeletons = 388;

const char* const kTopKeywords[] = {
"17track",
"24h",
"academia",
"accuweather",
"adp",
"agoda",
"aif",
"airbnb",
"alibaba",
"aliexpress",
"allegro",
"allocine",
"alodokter",
"ameblo",
"americanexpress",
"ancestry",
"animeflv",
"anyxxx",
"aol",
"apkpure",
"appledaily",
"asahi",
"asos",
"asus",
"autotrader",
"avito",
"azlyrics",
"badoo",
"baidu",
"baixaki",
"banggood",
"bankofamerica",
"bbc",
"beeg",
"bestbuy",
"bet365",
"biblegateway",
"biglobe",
"bild",
"bilibili",
"bing",
"blackboard",
"blogspot",
"bloomberg",
"bookmyshow",
"bukalapak",
"businessinsider",
"bustle",
"buzzfeed",
"caixa",
"canalrcn",
"canva",
"capitalone",
"cargurus",
"cbsnews",
"cbssports",
"ccm",
"cdc",
"cdiscount",
"ceneo",
"chaturbate",
"chegg",
"chinatimes",
"chron",
"cinecalidad",
"clarin",
"cnbc",
"cnet",
"cnn",
"collegedunia",
"correios",
"craigslist",
"cricbuzz",
"dailymail",
"dailymotion",
"daum",
"dell",
"depositphotos",
"detik",
"deviantart",
"dhgate",
"dhl",
"discordapp",
"dmm",
"drom",
"dropbox",
"ebay",
"eksisozluk",
"elconfidencial",
"elintransigente",
"elmundo",
"elpais",
"eluniversal",
"emag",
"engadget",
"epicgames",
"espn",
"etsy",
"europa",
"eventbrite",
"excite",
"expedia",
"facebook",
"fandango",
"fandom",
"fc2",
"fedex",
"filmweb",
"flickr",
"flipkart",
"fnac",
"forbes",
"foxnews",
"francetvinfo",
"gaana",
"gamepedia",
"gamespot",
"gearbest",
"gfycat",
"giphy",
"gismeteo",
"github",
"glassdoor",
"globo",
"glosbe",
"gofundme",
"goo",
"goodreads",
"google",
"gotporn",
"gsmarena",
"gumtree",
"haberler",
"hatenablog",
"hdfcbank",
"hdrezka",
"healthline",
"hilton",
"hindustantimes",
"homedepot",
"hotpepper",
"hotstar",
"huawei",
"huffpost",
"hulu",
"icicibank",
"icloud",
"ign",
"ikea",
"ilmeteo",
"ilovepdf",
"imdb",
"imgur",
"impress",
"indiamart",
"indiatimes",
"indiatoday",
"infobae",
"instagram",
"instructables",
"instructure",
"interia",
"intuit",
"investopedia",
"irecommend",
"irs",
"itau",
"itmedia",
"jobrapido",
"justdial",
"kahoot",
"kakaku",
"kakao",
"kayak",
"kenh14",
"khanacademy",
"kinopoisk",
"kizlarsoruyor",
"kknews",
"kohls",
"kompas",
"kotobank",
"lazada",
"leagueoflegends",
"leboncoin",
"lemonde",
"lenta",
"letmejerk",
"lifewire",
"linkedin",
"livedoor",
"livejournal",
"livescore",
"livestrong",
"makemytrip",
"malavida",
"marca",
"mawdoo3",
"mayoclinic",
"meb",
"mediafire",
"mercadolibre",
"mercadolivre",
"mercari",
"microsoft",
"microsoftonline",
"milliyet",
"mlb",
"mobile01",
"monografias",
"msn",
"mundodeportivo",
"myanimelist",
"mynavi",
"mynet",
"n11",
"namu",
"naver",
"nba",
"nbcnews",
"nbcsports",
"ndtv",
"netflix",
"news18",
"nextdoor",
"nhk",
"nicovideo",
"nifty",
"nih",
"nike",
"nikkansports",
"nikkei",
"nvidia",
"nypost",
"nytimes",
"office365",
"okdiario",
"olx",
"onet",
"onlinesbi",
"onlinevideoconverter",
"otto",
"otvfoco",
"pantip",
"passeidireto",
"patreon",
"paypal",
"perfectgirls",
"pinterest",
"pixiv",
"pixnet",
"playstation",
"politico",
"polygon",
"pornhub",
"prezi",
"primevideo",
"qualtrics",
"quizlet",
"quora",
"rakuten",
"rambler",
"ranker",
"reddit",
"redtube",
"researchgate",
"reverso",
"rightmove",
"roblox",
"rottentomatoes",
"rozetka",
"sabah",
"sahibinden",
"samsung",
"sanook",
"sarkariresult",
"sciencedirect",
"scribd",
"sfgate",
"shopee",
"shutterstock",
"sinoptik",
"skyscanner",
"skysports",
"slideshare",
"smallpdf",
"smi2",
"softonic",
"soundcloud",
"sozcu",
"spankbang",
"speedtest",
"spiegel",
"spotify",
"sputniknews",
"stackexchange",
"stackoverflow",
"steamcommunity",
"steampowered",
"surveymonkey",
"tabelog",
"taleo",
"taobao",
"techradar",
"techtudo",
"telegraph",
"termometropolitico",
"thebalancecareers",
"thedailybeast",
"thefreedictionary",
"theguardian",
"thepiratebay",
"theverge",
"thoughtco",
"tistory",
"tnaflix",
"tokopedia",
"trello",
"tribunnews",
"tripadvisor",
"trulia",
"trustpilot",
"tumblr",
"tutorialspoint",
"twitch",
"twitter",
"uber",
"ubisoft",
"udemy",
"udn",
"unam",
"uniqlo",
"uol",
"uptodown",
"urbandictionary",
"usatoday",
"usps",
"vimeo",
"vnexpress",
"w3schools",
"walmart",
"washingtonpost",
"wattpad",
"webmd",
"weebly",
"wellsfargo",
"wetransfer",
"whatsapp",
"wikihow",
"wikipedia",
"wiktionary",
"wixsite",
"wondershare",
"wordreference",
"wsj",
"xbox",
"xfinity",
"xhamster",
"xnxx",
"xnxx2",
"xozilla",
"xvideos",
"yahoo",
"yandex",
"yelp",
"yenisafak",
"youjizz",
"youm7",
"youporn",
"yourdictionary",
"youtube",
"yts",
"zendesk",
"zillow",
"zing",
"znanija",
"zomato",
};

constexpr size_t kNumTopKeywords = 377;
}  // namespace top500_domains