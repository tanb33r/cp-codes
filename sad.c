import pandas as pd
import matplotlib.pyplot as plt

df =pd.read_csv('F:\dataset_lab04.csv')
print(df)

#Lab04_Task_1_2020-1-60-270
#%%
print ('Number of rows: ', df.shape[0])
print ('Number of columns: ', df.shape[1])

#%%
#Lab04_Task_2_2020-1-60-270

print(df[['Time','Amount']].describe())



#%%
#Lab04_Task_3_2020-1-60-270

print("Mean of Time Col: ", df[['Time']].mean())
print("Median of Time COl: ", df[['Time']].median())
print("Standard deviation of Time Col: ", df[['Time']].std())
print("Variance of Time Col: ", df[['Time']].var())
print("Mean of V1 Col: ", df[['V1']].mean())
print("Median of V1 COl: ", df[['V1']].median())
print("Standard deviation of V1 Col: ", df[['V1']].std())
print("Variance of V1 Col: ", df[['V1']].var())

#%%
#Lab04_Task_4_2020-1-60-270

df.boxplot( column = ['Time', 'Amount'])
plt.title("Box plot", color='Blue')
Time_Q1 = df[['Time']].quantile(0.25)
Time_Q3 = df[['Time']].quantile(0.75)
Amount_Q1 = df[['Amount']].quantile(0.25)
Amount_Q3 = df[['Amount']].quantile(0.75)
IQR_Time = Time_Q3 - Time_Q1
IQR_Amount = Amount_Q3 - Amount_Q1
print("Q1 of Time: " ,Time_Q1)
print("Median of Time: ", df[['Time']].median())
print("Q3 of Time: ", Time_Q3)
print("IQR of Time: ", IQR_Time)
print("Q1 of Amount: " ,Amount_Q1)
print("Median of Amount: ", df[['Amount']].median())
print("Q3 of Amount: ", Amount_Q3)
print("IQR of Amount: ", IQR_Amount)

print ("There is no outliers for time boxplot but asmount boxplot has some outliers")

#%%
#Lab04_Task_5_2020-1-60-270


df.hist( column = ['Time'] , bins = 100)
print("Skewness of Time Col: ", df[['Time']].skew())
print("Kurtosis of Time Col: ", df[['Time']].kurtosis())
df.hist( column = ['Amount'] , bins = 100)
print("Skewness of Amount Col: ", df[['Amount']].skew())
print("Kurtosis of Amount Col: ", df[['Amount']].kurtosis())
print("The dataset of Time column is neither positively skewed nor negatively skewed and not even bell shaped and has a lots of extreme values")
print("The dataset of Amount Column is positively skewed and mean is greater than median")

#%%
#Lab04_Task_6_2020-1-60-270

class_zero  = df.loc[df['Class'] == 0]
class_one = df.loc[df['Class'] == 1]

percent_class_zero = class_zero.size/(df.size)*100
percent_class_one = class_one.size/(df.size)*100

#%%
#Lab04_Task_7_2020-1-60-270

print(percent_class_zero)
print(percent_class_one)


#%%
#Lab04_Task_8_2020-1-60-270

a1 = [0,1]
a2 = [class_zero.size ,class_one.size]
x_tick_label = ['zero','one']
plt.bar(a1,a2, tick_label=x_tick_label , width= 0.5, color=['blue','green'])
plt.xlabel('Class', color = 'black')
plt.ylabel('Frequency', color = 'black')
plt.title('Histogram Frequency', color = 'black')
plt.show()

#%%
#Lab04_Task_9_2020-1-60-270

c = [1,2]
d = [class_zero.size ,class_one.size]
x1_tick_label = ['zero','one']
plt.bar(c,d, tick_label = x1_tick_label , width = 0.5, color = ['green', 'blue'])
plt.xlabel('Class', color = 'black')
plt.ylabel('percentage', color = 'black')
plt.title('Bar Percentage', color = 'black')
plt.show()

c = [1,2]
d = [percent_class_zero.size ,percent_class_one.size]
x1_tick_label = ['zero','one']
plt.bar(c,d, tick_label = x1_tick_label , width = 0.5, color = ['green', 'blue'])
plt.xlabel('Class', color = 'black')
plt.ylabel('percentage', color = 'black')
plt.title('Bar Percentage', color = 'black')
plt.show()

#%%
#Lab04_Task_10_2020-1-60-270

df.hist( column = ['V17'], bins = 100)
print("V17 column is positively skewed")
df.hist( column = ['V12'], bins = 100)
print("V12 column is negatively skewed")
df.hist( column = ['V15'], bins = 100)
print("V15 column is Leptokurtic")
df.hist( column = ['Time'], bins = 100)
print("Time Column is platykurtic")

#%%
#Lab04_Task_11_2020-1-60-270

correlation= df.corr()
positive_corr= correlation[correlation>0]
st=positive_corr.unstack()
sort= st.sort_values(kind="quicksort",ascending=False)
print(sort)
print('Highest positive correlation among all attributes: ')
print(sort[32:33])

#%%
#Lab04_Task_12_2020-1-60-270

correlation= df.corr()
positive_corr= correlation[correlation>0]
positive_corr.plot.scatter(x='Amount', y='V7')

#%%
#Lab04_Task_13_2020-1-60-270

correlation= df.corr()
negative_corr= correlation[correlation<0]
st=negative_corr.unstack()
sort= st.sort_values(kind="quicksort", ascending=False, na_position='last')
print(sort)
print('Highest negative correlation among all attributes: ')
print(sort[1:2])

#%%
#Lab04_Task_14_2020-1-60-270

correlation= df.corr()
negative_corr= correlation[correlation<0]
negative_corr.plot.scatter(x ='V6', y='V22')


#%%
#Lab04_Task_15_2020-1-60-270

df.boxplot( column = ['Amount'])


