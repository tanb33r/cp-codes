from this import d
import pandas as pd
  
# importing numpy as np
import numpy as np
  
# dictionary of lists
dict = {'First Score':[100, 90, np.nan, 95],
        'Second Score': [30, 45, 56, np.nan],
        'Third Score':[np.nan, 40, 80, 98]}
   
df = pd.DataFrame(dict)
  
print(df)
df = df.drop('column_name', 1)
print(df)

