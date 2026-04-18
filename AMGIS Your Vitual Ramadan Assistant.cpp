#include <iostream>
using namespace std;

int main(){
	
	string user = "sheby";
	string pin = "1234";
	string username;
	string password;
	int month;
	int date;
	int fast;
	int choice;
	int attempts;
	string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	string ramadan[31] = {"Ramadan    DATE 	  SEHAR 	 IFTAR",
"1st       Mar 02 	05:07 AM	06:04 PM",
"2nd       Mar 03 	05:06 AM	06:05 PM",
"3rd       Mar 04 	05:05 AM	06:05 PM",
"4th       Mar 05 	05:03 AM	06:06 PM",
"5th       Mar 06 	05:02 AM	06:07 PM",
"6th       Mar 07 	05:01 AM	06:08 PM",
"7th       Mar 08 	05:00 AM	06:08 PM",
"8th       Mar 09	04:59 AM	06:09 PM",
"9th       Mar 10 	04:57 AM	06:10 PM",
"10th      Mar 11        04:56 AM  	06:10 PM",
"11th      Mar 12 	04:55 AM	06:11 PM",
"12th      Mar 13 	04:54 AM	06:12 PM",
"13th      Mar 14 	04:52 AM	06:13 PM",
"14th      Mar 15 	04:51 AM	06:13 PM",
"15th      Mar 16 	04:50 AM	06:14 PM",
"16th      Mar 17	04:48 AM	06:15 PM",
"17th      Mar 18	04:47 AM	06:15 PM",
"18th      Mar 19	04:46 AM	06:16 PM",
"19th      Mar 20 	04:44 AM	06:17 PM",
"20th      Mar 21 	04:43 AM	06:17 PM",
"21st      Mar 22 	04:42 AM	06:18 PM",
"22nd      Mar 23 	04:40 AM	06:19 PM",
"23rd      Mar 24 	04:39 AM	06:19 PM",
"24th      Mar 25 	04:38 AM	06:20 PM",
"25th      Mar 26 	04:36 AM	06:21 PM",
"26th      Mar 27 	04:35 AM	06:21 PM",
"27th      Mar 28 	04:34 AM	06:22 PM",
"28th      Mar 29 	04:32 AM	06:23 PM",
"29th      Mar 30        04:31 AM  	06:22 PM",
"30th      Mar 31        04:29 AM  	06:22 PM"  };
	
	cout << "Enter The Username:\n";
	while(attempts < 3){ 
	cin >> username;
	
	cout << "Enter The Password:\n";
	
	cin >> password;
	
	
	
	
	if (username == user && password == pin){
		
		cout << "Successfully Logged In\n Enter the current month(1-12 for jan-dec): \n ";
		cin >> month;
		cout << "Enter the date : \n ";
		cin >> date;
		if (date < 1 || month < 1 || date > 31 || month > 12) { cout << "Invalid Credentials, Please take a second look at your enteries and try again.\n THANKS!"; 
		return 0;
		} else { if ((date < 2 && month == 3) || (month < 3 || month > 3)){
		 cout << "Holy Ramadan Mubarak has Ended or not started yet";
		return 0;
		}else { fast = date - 1; 
		int day = (fast - 1) % 7;
		cout << "Current Date: " << date << " March\n   " << fast << " Ramadan\n" << days[day] <<  "\n________________________________\n What Can I do for you?\n Please make a choice:\n";
		cout << " 1. Today Sehar Aftar Schedule   \n 2. Hadith of the day\n 3. Daily To-Do Tasks\n 4. Current Ramadan Date Significance\n 5. Full Ramadan Calendar\n 6. Ashra Info \n 0. Exit\n";
		while(true){
		cin >> choice;
		
		if (choice > 6 ){ 
	 cout << "Invalid input! \n Please take a second look at your input and try again\n You can just input numbers from 0 to 5\n";
							cout << "Your Input: " <<choice<< endl << "Enter again: ";
		} else if (choice == 5){
							cout << "FULL RAMADAN CALENDAR\n\n\n";
			for (int i=0; i < 31; i++){
				cout << ramadan[i] << endl;
	
}
cout << "					Note: Please have a margin of about 2-3 mins as a safety measure";
return 0;
		} 
		else if(choice == 4){
				cout << "CURRENT RAMADAN DATE SIGNIFICANCE\n\n\n";
		  if (fast == 10){ cout << "Today does not have a good history as on this day(10th Ramadan, 3 BH (April 20, 620) ) The First Wife of our beloved HAZRAT MUHAMMAD(PBUH), Hazrat Khadija(RA) died";
		  } else if (fast == 17){ cout << "On this day, Our beloved Prophet Hazrat Muhammad(PBUH) and his companions fought their first battle against the Meccans on Ramadan 17 (THE BATTLE OF BADAR)";
		  } else if (fast == 20){ cout << "The Conquest of Makkah took place on 20th Ramadan";
		  } else if (fast == 21){ cout << "Today does not have a good history, as Hazrat Imam 'Ali was martyred on Ramadan 21, 40 (January 28, 661)\n Also it is an odd night of ASHRA NIJAAT, Increased prayers and worship recommended";
		  } else if (fast == 23 || fast == 25 || fast == 27){ cout <<"Spiritually Significant Night!\n Seek for Laylat al-Qar\n Increased prayers and worship recommended!";
		  } else if (fast == 29) { cout << "Dua kro chaand nazar ajye\n Note: Na nazar aye to meri pic dekh lena ;)";
		  } else if (day == 5) { cout << "\nToday is Friday, Make the most out of it.\n";
		  }else { cout << "There is no significant history information found on internet about today, Research in process, will be updated once found.";
		  } return 0;
		} 
		else if(choice == 2){
			cout << "DAILY HADITH\n\n\n";
		   string hadiths[31] = {
        "Hadith: Whoever fasts in Ramadan with faith and seeking reward from Allah, his previous sins will be forgiven.",
        "Hadith: Fasting is a shield, so when one of you is fasting, he should not engage in obscene speech or argue.",
        "Hadith: Ramadan is a month of blessings in which the gates of Heaven are opened, and the gates of Hell are closed.",
        "Hadith: Seek Laylat al-Qadr in the last ten days of Ramadan, on the odd-numbered nights.",
        "Hadith: When Ramadan begins, the gates of Heaven are opened and the gates of Hell are closed, and the devils are chained.",
        "Hadith: Whoever stands in prayer during Ramadan with faith and seeking his reward from Allah, his previous sins will be forgiven.",
        "Hadith: There is a blessing in Suhoor. Partake in Suhoor, for indeed there is a blessing in it.",
        "Hadith: The fasting person has two moments of joy: when he breaks his fast and when he meets his Lord.",
        "Hadith: When one of you is fasting, he should break his fast with dates, and if there are no dates, then with water.",
        "Hadith: Every act of the son of Adam is for him, except fasting. It is for Me, and I will reward it.",
        "Hadith: If anyone eats or drinks by mistake, let him complete his fast, for what he has eaten or drunk was given to him by Allah.",
        "Hadith: The fasting person's du'a (supplication) will not be rejected.",
        "Hadith: The fasting person's supplication is not rejected.",
        "Hadith: Whoever fasts in Ramadan with sincere faith and expecting reward from Allah will have his past sins forgiven.",
        "Hadith: The fasting person has two moments of joy: one when he breaks his fast and one when he meets his Lord.",
        "Hadith: Ramadan has come to you, a month of blessings, in which Allah has made fasting obligatory, and He has opened the gates of Heaven.",
        "Hadith: Whoever fasts in Ramadan with sincere faith and hope of reward, his previous sins will be forgiven.",
        "Hadith: If anyone argues with him or insults him, he should say: 'I am fasting.'",
        "Hadith: Fasting is a shield, so when one of you is fasting, he should not act in an obscene or ignorant manner.",
        "Hadith: Ramadan is a time for mercy, forgiveness, and liberation from Hellfire.",
        "Hadith: Whoever provides a fasting person with food to break his fast will have a reward like his, without diminishing the reward of the fasting person.",
        "Hadith: The gates of Heaven are opened and the gates of Hell are closed, and the devils are chained during Ramadan.",
        "Hadith: The fasting person's fast is incomplete without the giving of Zakat al-Fitr.",
        "Hadith: Every act of the son of Adam is for him, except fasting. It is for Me, and I will reward it.",
        "Hadith: Ramadan is a month in which the Quran was revealed, and a month of mercy, forgiveness, and liberation from Hellfire.",
        "Hadith: Ramadan is a month of mercy and forgiveness, and it is a time for seeking Allah's pardon.",
        "Hadith: If anyone eats or drinks by mistake, let him continue his fast, for what he has eaten or drunk was given to him by Allah.",
        "Hadith: Fasting in Ramadan with faith and seeking reward from Allah forgives your sins.",
        "Hadith: The fasting person has two moments of joy: when he breaks his fast and when he meets his Lord.",
        "Hadith: Seek Laylat al-Qadr in the last ten days of Ramadan, especially on the odd-numbered nights.",
        "Hadith: Whoever fasts in Ramadan with faith and seeking reward from Allah, his previous sins will be forgiven."
    };   
    cout << hadiths[fast];
    return 0;
		}
		else if(choice == 3){
			cout << "DAILY TO-DO TASKS\n\n\n";
			string paras[31] = {
        "1st Para", "1st para", "2nd para", "3rd para", "4th para", "5th para", 
        "6th para", "7th para", "8th para", "9th para", "10th para", 
        "11th para", "12th para", "13th para", "14th para", "15th para", 
        "16th para", "17th para", "18th para", "19th para", "20th para", 
        "21st para", "22nd para", "23rd para", "24th para", "25th para", 
        "26th para", "27th para", "28th para", "29th para", "30th para"
    }; cout << "Al-Quran Recitation:\n Recite " << paras[fast] << " Today!\n";
    string acts[31] = {
        "Donate Money to some welfare organization","Give a poor person some food today.",
        "Help someone with their chores today.",
        "Call and check on a family member or friend.",
        "Recite a few pages of the Quran today.",
        "Offer a sincere smile to everyone you meet.",
        "Give charity, no matter how small.",
        "Avoid gossip and speak good of others today.",
        "Offer extra prayers (Salah) in the evening.",
        "Forgive someone who wronged you.",
        "Share an Islamic book or lecture with someone.",
        "Spend some time reflecting on your actions.",
        "Donate clothes or items you don’t need to charity.",
        "Offer a special Dua for yourself and others.",
        "Maintain a positive attitude and patience today.",
        "Help someone in need with a kind gesture.",
        "Reconnect with a relative you haven’t spoken to in a while.",
        "Give someone a compliment or praise.",
        "Donate money to a cause that helps others.",
        "Practice humility and avoid being proud.",
        "Say 'JazakAllah Khair' to someone for their help.",
        "Avoid wasting food or water today.",
        "Spend some time with your children or family.",
        "Listen to an Islamic lecture or learn something new.",
        "Offer Iftar to someone who is fasting.",
        "Reflect on the blessings Allah has given you.",
        "Be extra mindful of your speech today—avoid negativity.",
        "Seek forgiveness for past mistakes today.",
        "Help a neighbor with something they need.",
        "Spend extra time in prayer and Dhikr today.",
        "Make sincere Dua for the last ten nights of Ramadan."
    }; 
	cout << "Today, ( " << fast << " Ramadan)," << acts[fast] << endl;
	return 0;
		} 
		else if(choice == 6){
			cout << "ASHRA INFO\n\n\n";
					if (fast <= 10){ cout << "Current Ashra: Ashra Rehmat (The Period of mercy)\n Seek ALLAH Pak's Rehmat in this period.";
					} else if (fast <=20){ cout << "Current Ashra: Ashra Maghfirat (The Period of Forgiveness)\n Seek the forgiveness of your sins for Allah Pak.";
					} else { cout << "Current Ashra: Ashra Nijat (The Period of Salvation)\n Make Prayers and worships as much as you can, Seek for Laylat al Qadar and end Ramadan Pak on a high note.";
					}
return 0;		} else if(choice == 1){ cout << "TODAY SEHAR AFTAR SCHEDULE\n\n";
			cout << ramadan[0] << endl << ramadan[fast] << endl;
			cout << "			Note: Please keep 2-3 mins margin as a safety measure";
	return 0;
}
						else{
			cout << "EXIT!\n\n\n";
						cout << "SEE YOU SOON ALLAH HAFIZ:)";
		} 
		}
		}
	}

		} 
	else { cout << "Incorrect username or password\n" << 2 - attempts << " Attempts Remaining\n" ;
	attempts++; 
	if (attempts < 3){ cout << "Enter your Username:\n";
	 }
	}
	 } if (attempts == 3){ cout << "You have exceeded the attempts limit\n ACCESS BLOCKED!";
	 }
	return 0;
}
		