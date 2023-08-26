void Top5news () //imprime las primeras 5 noticias
{ for (int a = 1 ,a < 6 , a++) { display(i) } }

void allnews () //imprime todas las noticias
{displayall()}

void thesenews(String frase) //despliega las noticias con las palabras clave
{ if (isin(frase,pos)) { display(i) } }

void notthesenews(String frase) //despliega las noticias que no tienen las palabras clave
{ if (!isin(frase,pos)) { display(i) } }

void rerank (int pos, int rankval) //cambia el ranking de una noticia
{ int newpos = pos + rankval; info traslado = findinfo(pos); errasepos (pos); addpos (traslado,newpos)} 