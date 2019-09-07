text = "Mr. and Mrs. Dursley, of number four, Privet Drive, were proud to say that they were perfectly normal, thank you very much. They were the last people you'd expect to be involved in anything strange or mysterious, because they just didn't hold with such nonsense. Mr. Dursley was the director of a firm called Grunnings, which made drills. He was a big, beefy man with hardly any neck, although he did have a very large mustache. Mrs. Dursley was thin and blonde and had nearly twice the usual amount of neck, which came in very useful as she spent so much of her time craning over garden fences, spying on the neighbors. The Dursleys had a small son called Dudley and in their opinion there was no finer boy anywhere."
letter = "e" 
ecount = text.count(letter) #counting occurences of string "letter" in string "text"
print(ecount)

import pandas as pd
Df_grades = pd.DataFrame(
                {"Name":["Paul","Arthur","Emma","Lisa","Edoardo","Ben"],
                 "Grade":[87,35,42,87,65,53]}
                        )

Edoardo = Df_grades.iloc[4] # extracting Edoardo's grades
print(Edoardo)

print"\nthe minimum grade is: \n", Df_grades.min() # extracting and printing the data of student with lowest grade
df_good_students=Df_grades.loc[(Df_grades.Grade >= 50)] # creating new dataframe with students who scored more than 50
df_good_students


import pandas as pd
Df_grades = pd.DataFrame(
                {"Name":["Paul","Arthur","Emma","Lisa","Edoardo","Ben"],
                 "Grade":[87,35,42,87,65,53]}
                        )

Df_citizenship = pd.DataFrame(
                {"Name":["Paul","Arthur","Emma","Lisa","Edoardo","Ben"],
                 "Citizenship":["French","English","French","Italian","Italian","Polish"]}
                             )
df_combined= pd.merge(Df_grades, Df_citizenship) #merging the two dataframes to combine data for citizenship and grades

print df_combined

df_italian=df_combined.loc[(df_combined.Citizenship =="Italian")] #creating new dataframe with only italian students

ita_mean= df_italian.mean() # computing mean for the italian students

print "\n\n The mean of the Italian students score is: ", ita_mean

df_combined["Rank"] = df_combined["Grade"].rank(method='min', ascending=False)
df_combined.sort_values("Rank", inplace = True) 
print df_combined

hist = df_combined.hist()
hist
