
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Deedy - One Page Two Column Resume
% LaTeX Template
% Version 1.1 (30/4/2014)
%
% Original author:
% Debarghya Das (http://debarghyadas.com)
%
% Original repository:
% https://github.com/deedydas/Deedy-Resume
%
% IMPORTANT: THIS TEMPLATE NEEDS TO BE COMPILED WITH XeLaTeX
%
% This template uses several fonts not included with Windows/Linux by
% default. If you get compilation errors saying a font is missing, find the line
% on which the font is used and either change it to a font included with your
% operating system or comment the line out to use the default font.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% TODO:
% 1. Integrate biber/bibtex for article citation under publications.
% 2. Figure out a smoother way for the document to flow onto the next page.
% 3. Add styling information for a "Projects/Hacks" section.
% 4. Add location/address information
% 5. Merge OpenFont and MacFonts as a single sty with options.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% CHANGELOG:
% v1.1:
% 1. Fixed several compilation bugs with \renewcommand
% 2. Got Open-source fonts (Windows/Linux support)
% 3. Added Last Updated
% 4. Move Title styling into .sty
% 5. Commented .sty file.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% Known Issues:
% 1. Overflows onto second page if any column's contents are more than the
% vertical limit
% 2. Hacky space on the first bullet point on the second column.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\documentclass[]{deedy-resume-openfont}


\begin{document}

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%     LAST UPDATED DATE
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%\lastupdated

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%     TITLE NAME
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


\namesection{Tanvir}{Taher}{
\href{mailto:tanbeer.taher@gmail.com}{tanbeer.taher@gmail.com} | 01517074875
}

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%     COLUMN ONE
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\begin{minipage}[t]{0.33\textwidth}

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     EDUCATION
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\section{Education}

\subsection{East West University,}
\subsection{Dhaka}
\descript{Bachelors in CSE }
Major: Data Science \\
\location{2021(10th sem)}
\sectionsep

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     LINKS
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\section{Links}
Github:// \href{https://github.com/tanbeertaher}{\custombold{tanbeertaher}} \\
LinkedIn://  \href{https://www.linkedin.com/in/tanbeertaher}{\custombold{tanbeertaher}} \\
\sectionsep

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     COURSEWORK
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\section{Coursework}
\subsection{Coursera}
Machine Learning by Stanford\\
\sectionsep

\subsection{Undergraduate}
Data Structures and Algorithms \\
Operating Systems \\
Database Management System\\
Software Design \& Engineering \\
Object Oriented Programming \\
Linux Programming \\
\sectionsep

%\subsection{Moocs Certification}
%Data Science Methodology by IBM \\
%Google Analytics Individual Exam\\
%\sectionsep


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     SKILLS
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\section{Skills}
\subsection{Programming}
C++ \textbullet{} Java \textbullet{} Python\\
\sectionsep
\subsection{Operating System}
Win-7/8/10 \textbullet{} Ubuntu\\
\sectionsep


%\subsection{Java Framework}
%J2EE\textbullet{} Spring\textbullet{} Hibernate\textbullet{} JDBC
%\sectionsep
\subsection{Web Technologies}
HTML\textbullet{} CSS\textbullet{} JavaScript
\sectionsep
\subsection{Tools}
Eclipse\textbullet{} Docker\textbullet{} Anaconda
\sectionsep
\subsection{Others}
Django \textbullet{} PL/SQL\textbullet{} Google Colab\\ Web.


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     Interest
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\section{Interest}
%Reading \textbullet{} Travelling\\
%Health care \textbullet{} Hydroponics
\textbullet{} Competitive Programming \\
Problem solving \textbullet{Philosophy} \\
 \textbullet{}Math \\
%Afforestation \textbullet{}Recycling\\
\sectionsep

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%     COLUMN TWO
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\end{minipage}
\hfill
\begin{minipage}[t]{0.66\textwidth}

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     EXPERIENCE
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\section{Statement}
Currently learning to develop accurate and fast machine learning models, and looking for roles in the intersection of data science and software engineering.Hands on experience with a degree in computer science and a heavy background in using Machine
Learning Algorithms to solve different problems\sectionsep



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     EXPERIENCE
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\section{ACADEMIC PROJECTS}

\runsubsection{Handwritten Digit Recognition }
\descript{| Using CNN}
\location{Aug 2021 - Sep 2021 | Dhaka}
\sectionsep
\runsubsection{}
%\descript{ Customer service platform | for clients: touch lebanon, poland polkomtel, tlf columbia, peru claro,  h3i indonesia}
Turns any form of
text or text-containing documents such as handwritten text, printed or scanned text images, into
an editable digital format for deeper and further processing.\\
\vspace{\topsep} % Hacky fix for awkward extra vertical space

\runsubsection{Social Media Clone}
\descript{| Using Django}
\location{Jan 2021 - April 2021 | Dhaka}
\sectionsep
\runsubsection{}
%\descript{ Customer service platform | for clients: touch lebanon, poland polkomtel, tlf columbia, peru claro,  h3i indonesia}
Using Django Web Framework, I made a Facebook clone that has user login, registration, follow profile and search features.\\
\vspace{\topsep} % Hacky fix for awkward extra vertical space



\runsubsection{Pharmacy Management System}
\descript{| Using Javafx}
\location{Nov 2020 - Jan 2021 | Dhaka}
\sectionsep
\runsubsection{}
Deals with the maintenance of university, faculty, student, course
information within the university using javafx
\vspace{\topsep}

%\descript{ Continous Integration \& Devops | ci master}

 %I have built projects, pipelines/tasks and integrating as well as maintaining static check and security tools for about 20 different projects using Apache Ant and ICP framework  for customization team.  \\ I have built new CI Server, configured standalone base CI version, developed new auto deployment feature, automated all packaging process and reduce build time by half for baseline team.
%\sectionsep

\runsubsection{COURSE OUTLINE PREPARATION SYSTEM}
\descript{| using Oracle Apex}

Store different data of a course outline and mapping course outcome
and program outcome for every course through Oracle Apex.\\
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     PROJECTS
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\section{DATA SCIENCE PROJECTS
}
\runsubsection{LIST OF DATASETS USED FOR CLASSFICATION AND REGRESSION PROBLEMS}
\descript{| final year project }
Boston House Price using XGBregressor • Diabetes Prediction using
Support Vector Machine • Fake News Prediction • Loan Status
Prediction • Wine Quality Prediction using Logistic Regression
\sectionsep

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     ACHIEVEMENTS AND ACTIVITIES
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
\section{Achievements and Activities}

7th GCC Science Mania'17 - Project Display - \descript{Champion}\\
BUET Creative Mind Poster Presentation -  \descript{Champion}\\
EWU In-House Programming Battle Spring 2021 - \descript{Champion}\\
IUT 9th ICT Fest'17 - Math Olympiad \descript{Champion}\\
AIUB Idea Contest'16 - ICT Olympiad \descript{Champion}\\
UIU CSE Festival'17 - ICT Olympiad \descript{1st Runner-up}\\
Active on programming sites - \descript{\href{https://codeforces.com/profile/GoodFella}{CodeForces}, CodeChef} \\
\sectionsep
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     SOCIETIES
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
\end{minipage}
\end{document}
