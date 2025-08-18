# Chas Advance – Specialist Logistics Inc.

## Översikt
**Chas Advance** är ett logistiksystem för garanterad klimatkontrollerad leverans av specialvaror.  
Projektet hanterar hela flödet – från utcheckning i lager, via transport med sensordata, till mottagning i destinationslager – med full spårbarhet.

---

## Flöde
1. **Utleverans från lager**  
   - Streckkodsläsning och mobil terminal aktiverar paketets sensor- och loggningsenhet.  
2. **Transport (lastbil/tåg/flyg)**  
   - Möjlighet till omlastning och överlämning via ny streckkod.  
3. **Loggning & styrning**  
   - Fordonets styrenhet kopplas mot paketets sensordata (temperatur, fukt, GPS).  
4. **Mottagning**  
   - Inläsning i mottagningslager, där data förs över till backend.

---

## Backend
- Molnbaserad server kopplar samman avsändare, transportör och mottagare.  
- Databas (Azure SQL) loggar:  
  - Paketens status i kedjan  
  - GPS-position  
  - Temperatur och luftfuktighetshistorik  
- Integration mot fordonens styrenheter.  
- Möjlighet till dataanalys och separat spårningsdatabas.  

---

## Frontend
Tre olika frontends:  
- **Logistikflöde** – lager och transportörer, kopplat till fordonens styrenhet.  
- **Spårningsapp** – kund/kontor kan följa leveranser i realtid med sensordata och varningar.  
- **Dataapp (webapp)** – analys och uppföljning för kontor.  

---

## Styrenhet & Sensorer
- **Styrenhet (fordon)**  
  - GPS-sensor  
  - 4G/5G-uppkoppling  
  - Automatisk styrning av temperatur/avfuktning (simulerad)  
  - Lokal loggning  
  - Koppling till paketens sensorer  

- **Sensorpaket (per paket)**  
  - Batteriförsörjd enhet  
  - Temperatur- och luftfuktighetssensor  
  - Lokal loggning  
  - Koppling till fordonets styrenhet  

---

## Infrastruktur
- **Backend**: Azure SQL, datalager, data warehouse för analys  
- **Frontend**: Azure App Service (eller motsvarande), loggning av användardata  
- **CI/CD**: GitHub Actions & Projects, teststruktur för IoT, backend och frontend  
- **Kodstruktur**: Flera repon i en organisation med Git Flow (ev. övergång till GitHub Flow vid deploy)  

---

## Att göra
- Inköp och distribution av sensor- och basenheter  
- Uppbyggnad av CI/CD-flöde  
- Implementering av testkörningsstruktur  

---

## Team
Projektet drivs av **Grupp II – Chas Academy**.  

---

## Licens
MIT License – fritt att använda, modifiera och vidareutveckla.
