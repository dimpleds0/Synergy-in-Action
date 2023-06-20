1. class Synergy {
   constructor(){
      this.numActions = 0;
   }
   initiateAction(){
      this.numActions++;
   }
}
2. class Participant {
   constructor(name){
      this.name = name;
      this.actionsTaken = 0;
   }
   takeAction(){
      this.actionsTaken++;
   }
   getName(){
      return this.name;
   }
}
3. class Meeting {
   constructor(name){
      this.name = name;
      this.participants = []; 
      this.synergy = new Synergy();
   }
   addParticipant(participant){
      this.participants.push(participant);
   }
   startMeeting(){
      for (let participant of this.participants) {
         participant.takeAction();
         this.synergy.initiateAction();
      }
   }
}
4. let meeting = new Meeting('Synergy in Action');
5. let p1 = new Participant('John');
6. let p2 = new Participant('Eric');
7. let p3 = new Participant('Anne');
8. let p4 = new Participant('Sammy');
9. meeting.addParticipant(p1);
10. meeting.addParticipant(p2);
11. meeting.addParticipant(p3);
12. meeting.addParticipant(p4);
13. meeting.startMeeting();
14. console.log(`${p1.getName()} took ${p1.actionsTaken} action(s).`);
15. console.log(`${p2.getName()} took ${p2.actionsTaken} action(s).`);
16. console.log(`${p3.getName()} took ${p3.actionsTaken} action(s).`);
17. console.log(`${p4.getName()} took ${p4.actionsTaken} action(s).`);
18. console.log(`Synergy achieved ${meeting.synergy.numActions} action(s).`);
19. 
20. // Activity function
21. function synergyInAction(meeting) {
22     meeting.startMeeting();
23     console.log(`Synergy achieved ${meeting.synergy.numActions} action(s).`);
24     
25     for (let participant of meeting.participants) {
26         console.log(`${participant.getName()} took ${participant.actionsTaken} action(s).`);
27     }
28 }
29. 
30. // Create a new meeting
31. let meeting2 = new Meeting('Synergy Rules');
32. 
33. // Add 4 participants
34. let p5 = new Participant('Mike');
35. let p6 = new Participant('Sarah');
36. let p7 = new Participant('Evan');
37. let p8 = new Participant('Sharon');
38. meeting2.addParticipant(p5);
39. meeting2.addParticipant(p6);
40. meeting2.addParticipant(p7);
41. meeting2.addParticipant(p8);
42. 
43. // Start the meeting
44. synergyInAction(meeting2);
45. 
46. // Output should be something like:
47. // Mike took 1 action(s).
48. // Sarah took 1 action(s).
49. // Evan took 1 action(s).
50. // Sharon took 1 action(s).
51. // Synergy achieved 4 action(s).
52. 
53. // Function to add a participant to meeting
54. function addParticipantToMeeting(meeting, participant) {
55     meeting.addParticipant(participant);
56     console.log(`${participant.getName()} has been added to the meeting.`)
57 }
58. 
59. // Create new participant
60. let p9 = new Participant('Alfred');
61. 
62. // Add Alfred to meeting 2
63. addParticipantToMeeting(meeting2, p9);
64. // Output should be something like:
65. // Alfred has been added to the meeting.
66. 
67. // Start meeting 2 again
68. synergyInAction(meeting2);
69. 
70. // Output should be something like:
71. // Mike took 2 action(s).
72. // Sarah took 2 action(s).
73. // Evan took 2 action(s).
74. // Sharon took 2 action(s).
75. // Alfred took 1 action(s).
76. // Synergy achieved 8 action(s).
77. 
78. // Function to calculate synergy
79. function calculateSynergy(meeting) {
80     let totalActions = 0;
81     for (let participant of meeting.participants) {
82         totalActions += participant.actionsTaken;
83     }
84     return totalActions;
85 }
86. 
87. // Calculate synergy for meeting 1
88. console.log(`Synergy in meeting 1 achieved ${calculateSynergy(meeting)} action(s).`);
89. 
90. // Calculate synergy for meeting 2
91. console.log(`Synergy in meeting 2 achieved ${calculateSynergy(meeting2)} action(s).`);
92. 
93. // Output should be something like:
94. // Synergy in meeting 1 achieved 4 action(s).
95. // Synergy in meeting 2 achieved 8 action(s).
96. 
97. // Create a text file to write out summary
98. let fs = require('fs');
99. let fileName = 'synergy_summary.txt';
100. let synergySummary = `Synergy achieved in Meeting 1: ${meeting.synergy.numActions} action(s)\nSynergy achieved in Meeting 2: ${meeting2.synergy.numActions} action(s)`;
101. fs.writeFile(fileName, synergySummary, (err) => {
102     if (err) throw err;
103     console.log(`The synergy summary has been saved to ${fileName}.`);
104 });
105. 
106. // Output should be something like:
107. // The synergy summary has been saved to synergy_summary.txt.