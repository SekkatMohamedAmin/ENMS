import random

#algerien names 
names = ["ahmed", "ali" , "abdouAllah" ,  " abdou" , "abdelkader" , "abdelhak" , "abdelhakim" , "abdelhamid" , "abdelkrim" , "abdelmalek" , "abdelmajid" , "abdelmoumen" , "abdelmoumene" , "abdelouahab" , "abdelouahed" , "abdelouahid" , "basta", "boualem" , "boumediene" , "bouzid" , "bouziane" , "chafik" , "chahid" , "chakib" , "chakir" , "charef" , "chawki" , "chihab" , "chihoub" , "chouaib" , "choukri" , "choukry" , "dahmane" , "dahou" , "dahoum" , "dahman" , "dahmane" , "dahman"
         , "choukri" , "chamsou" , "chamseddine" , "chamsdine" , "chamsdine" ,"chahinese", "chahinez" , "chahrazed" , "djamila" , "djamel", "elhadi" , "farid", "fouad ", "faycel" , "faycal" , "jamel" , "kamel" ,"khaled" , "khalid" , "khalil" , "kheireddine" , "kheirredine" , "kheirredine" , "kheirreddine" , "kheirredine","amel","amal","amina","amira","asma","asmaa","asmae" ,"hafsa","rokia","soumia","soumaya","soume" ,"soumeya","zohra", "zohra","tahar","taher","salah","salim","salima","salma","sami","samir","samira","sara","sarah","taha" , ""]
#algerien last names
lastnames = ["hammoudi" , "hammouda" , "hammo" , "hammou" , "hammouche" , "hammoud" , "hammoum" , "hammoumi" , "hammouche" , "hammoudene" , "hammoudeh" , "hammoudi" , "hammouda" , "hammoud" , "maachou" , "maachou" , "maachouk" ,"marbouh" , "rabah" , "aghiles" , "gechhir" , "dechirri" ,
             "dschirri" , "gechir" , "gechiri" , "gechirri" , "gechirry" , "gechir","medjouj","belhout","horregmi","merrad",]
cities =  [
    "Algiers", "Oran", "Constantine", "Annaba", "Batna",
    "Blida", "Setif", "Chlef", "Djelfa", "Biskra",
    "Tebessa", "Tlemcen", "Ouargla", "Bejaia", "Skikda",
    "Tiaret", "Tizi Ouzou", "El Oued", "Béchar", "Mostaganem",
    "Bordj Bou Arreridj", "El Achir", "Médéa", "Sidi Bel Abbès",
    "Laghouat", "Mascara", "Tizi Gheniff", "Tiaret", "Oum el Bouaghi",
    "Béjaïa", "Ain Temouchent", "Guelma", "Relizane", "Tamanrasset",
    "El Bayadh", "Ghardaia", "Illizi", "Bechar", "Adrar",
    "Ain Defla", "Tindouf", "Bouira", "El Taref", "Souk Ahras",
    "Ghardaïa", "Mila", "Laghouat", "Tissemsilt", "Tizi Ouzou",
    "Relizane", "Jijel", "Boumerdes", "Tipaza", "Skikda",
    "Tébessa", "Béchar", "Adrar", "Djanet"
]

file = open("AlgerienCustomers.csv", "w")
id = 1
for i in range(100000):
    name = random.choice(names)
    lastname = random.choice(lastnames)
    age = random.randint(18, 60)
    address = str(random.randint(1, 100)) 
    file.write(str(id) + "," + name + "," + lastname + "," + str(address) + str(age) + "," +"\n")
    id += 1
    
    
    
