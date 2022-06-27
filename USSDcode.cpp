#include<stdio.h>

int main()
{
	//Print Main Menu
	printf("\n0.\t Nyakua Bonus\n");
	printf("1.\t My Data Deals\n");
	printf("2.\t Daily Bundles NEW\n");
	printf("3.\t Weekly Bundles NEW\n");
	printf("4.\t Monthly Bundles NEW\n");
	printf("5.\t NO Expiry Bundles\n");
	printf("6.\t Entertainment Bundles\n");
	printf("7.\t Okoa Data\n");
	printf("8.\t Lipa Mdogo Mdogo\n");
	printf("9.\t Balance and Tips\n");
	printf("10.\t Buy Newspaper\n");
	printf("11.\t Sambaza Internet\n");
	printf("12.\t Is My Sim 4G Enabled\n");
		
	int choice;
	scanf("%d",&choice);
	//Nyakua Bonus
	if (choice==0)
	{
	//Nyakua Bonus Menu
	printf("\t NYAKUA BONUS\n");
	printf("1.\t Buy Nyakua Bundles.\n");
	printf("2.\t Check Target.\n");
	printf("3.\t Check Daily Usage.\n");
	printf("4.\t Check my FREE Data Balance.\n");
	printf("5.\t Join Data Bonus.\n");
	printf("6.\t Opt Out.\n");
	printf("7.\t How it Works\n");
	printf("0.\t HOME.\n");
	
    BuyNyakua:
	int choice;
	scanf("%d",&choice);
	//Buy Nyakua Bundles
	if (choice==1)
	{	
	//Buy nyakua Bundles.
	printf("1.\t Daily Bundles NEW.\n");
	printf("2.\t Weekly Bundles NEW.\n");
	printf("3.\t Monthly Bundles NEW.\n");
	printf("4.\t Bundles with NO EXPIRY. \n");
	printf("0.\t HOME.\n");
	
	int choice;
	scanf("%d",&choice);
	//Daily Nyakua Bundles
	if (choice==1)
	{
	//print Daily Bundles Plan
	printf("1.\t Sh.10: 35MB + 25SMS.\n");
	printf("2.\t Sh.20: 100MB + 70SMS + FREE Whatsapp.\n");
	printf("3.\t Sh.50: 300MB + 200SMS + FREE Whatsapp.\n");
	printf("4.\t Sh.20: 1GB + 200SMS + FREE Whatsapp. \n");
	printf("5.\t Power Hour 250MB @ Sh.19 \n");
	printf("6.\t Sh.5: 10MB + 7SMS \n");
	
	//choose plan
	int choice;
	scanf("%d",&choice);
	//sh.10 35mb + 25SMS
	if (choice== 1)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 10\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry. Tay Again");
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 35MB:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 35mbs	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	// sh.20 100MB + 70SMS + free whatsapp
	else if (choice == 2)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 20\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");
	}	
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");
	}
	else
	{
		printf("Invalid Entry.\n");
		goto BuyNyakua;}
    }
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 100MB + 70SMS + Free Whatsapp:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 100mbs	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");}
	//goto home page
	else if (choice==00)
	{main();
	}
	else
	{
		printf("Invalid Entry.\n");
		main();}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	// sh.50 300MB + 200SMS + free whatsapp
	else if (choice == 3)
		{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime.\n");
	printf("2. Mpesa.\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 50\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");
	}	
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");
	}
	else
	{
		printf("Invalid Entry.\n");
		goto BuyNyakua;}
    }
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to sh.50 300MB + 200SMS + free whatsapp\n:");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 100mbs	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	//Decline
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");}
	else
	{
		printf("Invalid Entry.");
		goto BuyNyakua;}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	// sh.100 1GB + 200SMS + free whatsapp
	else if (choice == 4)
		{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime.\n");
	printf("2. Mpesa.\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 100\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");
	}	
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");
	}
	else
	{
		printf("Invalid Entry.\n");
		goto BuyNyakua;}
    }
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice== 2)
	{
	printf("Subscribe to sh.100 1GB + 200SMS + free whatsapp\n:");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 100mbs	
	int choice;
	scanf("%d",&choice);
	//Aceept
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	//Decline
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");}
	else
	{
		printf("Invalid Entry.");
		goto BuyNyakua;}
	}	
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Power Hour 250MB @sh.19
	else if (choice == 5)
		{
	//Once
	printf("1. Airtime.\n");
	printf("2. Mpesa.\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 19\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");
	}	
	//Decline
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");
	}
	else
	{
	printf("Invalid Entry, Try again\n");
	main();
	}
	}

	else
	{
		printf("Invalid Entry.\n");
		goto BuyNyakua;}
    }
		//sh.5 10mb + 7sms
	else if (choice ==6)
		{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 5\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		goto BuyNyakua;}
    }
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 10MB Daily:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 10mbs	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");}	
	else
	{
		printf("\nInvalid Entry.");
		goto BuyNyakua;}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}	
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	
	//Weekly Nyakua Bundles NEW
	else if(choice == 2)
	{
		printf("1.\t 200MB@Sh50");
		printf("2.\t 500MB + Whatsapp@Sh100");
		printf("2.\t 1.5GB + Whatsapp@Sh250");
		printf("4.\t 4GB + Whatsapp@Sh500");
		printf("0.\t Home");
		
	int choice;
	scanf("%d",&choice);
	//sh50 (200MB)
	if (choice==1)
	{
		printf("1.\t Buy 200MB@sh50 using:\n");
		printf("\t 1.Airtime\n");
		printf("\t 2.M-pesa\n");
		printf("3.Bonga(100 points\n)");
		printf("0.\t Home");
		
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
		printf("\nBSC:1101 Assignment");
	}
	//M-pesa
	else if(choice == 2)
	{
		printf("\nBSC:1101 Assignment");
	}
	//Bonga points
	else if(choice == 3)
	{
		printf("\nBSC:1101 Assignment");
	}
	else if(choice == 0)
	{
		main();
	}
	else
	{
		printf("Invalid entry try again");
		main();
	}
	}
	//sh100 (500MB)
	else if (choice==1)
	{
		printf("1.\t Buy 500MB@sh100 using:\n");
		printf("\t 1.Airtime\n");
		printf("\t 2.M-pesa\n");
		printf("3.Bonga(200 points\n)");
		printf("0.\t Home");
		
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
		printf("\nBSC:1101 Assignment");
	}
	//M-pesa
	else if(choice == 2)
	{
		printf("\nBSC:1101 Assignment");
	}
	//Bonga points
	else if(choice == 3)
	{
		printf("\nBSC:1101 Assignment");
	}
	//Home
	else if(choice == 0)
	{
		main();
	}
	else
	{
		printf("Invalid entry try again");
		main();
	}
	}	
	else
	{
		printf("Invalid Entry, Try Again\n");
		main();
	}
	}
	
	//Monthly Nyakua Bundles
	else if(choice==3)
	{
		printf("1.\t Buy 35MB +25SMS @ Sh10\n");
		printf("2.\t Data Only plans\n");
		printf("3.\t All in one\n");
		printf("4.\t Buy For Other Number\n");
		printf("5.\t Join Postpay\n");
		printf("6.\t Easy-Talk Minutes\n");
		printf("7.\t Postpay FAQs\n");
		printf("0.\t Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Buy 35mb +25MB @sh10
	if (choice==1)
	{
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 10\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Enrty, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
		printf("Subscribe to 35MB:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 35mbs	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");}
	//goto home page
	else if (choice==0)
	{main();
	}
	else
	{
		printf("\nInvalid Entry.");
		main();}
	}
	//Back
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}

	//Data plans only
	else if (choice == 2)
	{
		printf("\t1:Ksh 250: 1GB\n");
		printf("2:Ksh 500: 2.5GB + WhatsApp\n");
		printf("3:Ksh 1000: 7GB + WhatsApp\n");
		printf("4:Ksh 2000: 20GB + WhatsApp\n");
		printf("0: Home.\n");
		
	int choice;
	scanf("%d",&choice);
	//Ksh.250 1GB
	if (choice== 1)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh250\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 1GB @ Ksh250:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 1GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("\nInvalid Entry.");
		main();}
	}	
	//Back
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}
	//Ksh 500: 2.5GB + WhatsApp
	else if (choice == 2)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh500\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 2.5GB @ Ksh500:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 2.5GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("\nInvalid Entry.");
		main();}
	}	
	//Back
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}	
	//Ksh 1000: 7GB + WhatsApp
	else if (choice == 3)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh1000\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 7GB @ Ksh1000:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 7GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");}
	//goto home page
	else if (choice==0)
	{main();
	}
	else
	{
		printf("\nInvalid Entry.");
		main();}
	}	
	//Back
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}
	//Ksh 2000: 20GB + WhatsApp
	else if (choice == 4)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh2000\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 25GB @ Ksh2000:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 25GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");}
	//goto home page
	else if (choice==0)
	{main();
	}
	else
	{
		printf("\nInvalid Entry.");
		main();}
	}	
	//Back
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}
	//Home
	else if (choice ==0)
	{
	main();
	}
	else 
	{
		printf("Invalid Entry. Try Again.\n");
		main();
	}
	}
	
	//All In One
	else if (choice == 3)
	{
		printf("\t All bundles come with WhatsApp\n");
		printf("1:SH 1050(5GB+2GB YT+ 400MINS + 1000SMS)\n");
		printf("2:SH 2100(15GB+2GB YT+ 1000MINS + 2000SMS)\n");
		printf("3:SH 3150(25GB+2GB YT+ 1500MINS + 3000SMS)\n");
		printf("4:SH 5200(45GB+2GB YT+ 2500MINS + 5000SMS)\n");
		printf("5:SH 10430(100GB+2GB YT+ 7500MINS + 10000SMS)\n");
		printf("6:SH 550(2GB+2GB YT+ 100MINS + 500SMS)\n");
		printf("\t7:Earn extra airtime\n");
		printf("0:HOME\n");
		
	int choice;
	scanf("%d", &choice);
	//Sh 1050 (5GB)
	if (choice == 1)
	{
		printf("This Bundle comes with WhatsApp + FREE 2GB YouTube\n");
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 1050\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
		else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 5GB+2GB YT+ 400MINS + 1000SMS:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 5GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Sh 2100 (15GB)
	else if(choice ==2)
	{
		printf("This Bundle comes with WhatsApp + FREE 2GB YouTube\n");
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 2100\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 15GB+2GB YT+ 1000MINS + 2000SMS:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 15GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	
	//Sh 3150 (25GB)
	else if (choice == 3)
	{
		printf("This Bundle comes with WhatsApp + FREE 2GB YouTube\n");
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 3150\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
		else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 25GB+2GB YT+ 1500MINS + 3000SMS:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 25GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	
	//Sh 5200 (45GB)
	else if (choice == 4)
	{
		printf("This Bundle comes with WhatsApp + FREE 2GB YouTube\n");
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 5200\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
		else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 45GB+2GB YT+ 2500MINS + 5000SMS:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 45GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	
	//Sh 10430 (100GB)
	else if (choice == 5)
	{
		printf("This Bundle comes with WhatsApp + FREE 2GB YouTube\n");
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 10430\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
		else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 100GB+2GB YT+ 7500MINS + 10000SMS:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 100GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	
	//Sh 550 (2GB)
	else if (choice == 6)
	{
		printf("This Bundle comes with WhatsApp + FREE 2GB YouTube\n");
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 550\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
		else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 2GB+2GB YT+ 100MINS + 500SMS:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 5GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	
	//Earn Extra
	else if(choice == 7)
	{
		printf("\t Earn Extra Airtime.\n");
		printf("1:Recommend Bundle\n");
		printf("2:Check Commision\n");
		printf("3:Opt out\n");
		
	int c;
	scanf("%d",&c);
	if (c ==1)
	{
	printf("Enter Phone Number:\n");
	
	int num;
	scanf("%d",&num);
	}
	else if (c==2)
	{
		printf("BSC:1101 Assignment");
	}
	else if(c==3)
	{
		printf("BSC:1101 Assignment.");
	}
	else
	{
	printf("Invalid Entry, Try Again.\n");
	main();
	}
	}
	//Home
	else if (choice ==0)
	{
		main();
	}
	else
	{
	printf("Invalid Entry, Try Again\n");
	main();
	}
	}
		
	//Buy for other Number
	else if (choice == 4)
	{
		printf("Enter Phone Number:\n");
		int num;
		scanf("%d",&num);
		printf("Successufully Sent Bundles for %d",num);
		main();
	}
	//join post-pay
	else if(choice == 5)
	{
		printf("\t Choose Journey:\n");
		printf("1: Join Using Web\n");
		printf("2: continue with USSD\n");
		printf("0:Back");
		
		int choice;
		scanf("%d",&choice);
	//Join using Web
	if (choice == 1)
	{
			printf("Thank You, Look out for a message with a link to join Postpay.");
	}
	//Continue With USSD	
	else if (choice == 2)
	{
		
		printf("1:Sh1050 (5GB+400Mins+Unlimited SMS\n)");
		printf("2:Sh2100 (15GB+1000Mins+Unlimited SMS\n)");
		printf("3:Sh3150 (25GB+1500Mins+Unlimited SMS\n)");
		printf("4:Sh5200 (Unlimited Data+2500Mins+Unlimited SMS\n)");
		printf("5:Sh10430 (unlimited Data+ Unlimited Mins+Unlimited SMS\n)");
		printf("0:Home\n");
		
		int choice;
		scanf("%d",&choice);
		//sh1050 (5GB)
		if (choice == 1)
		{
		printf("You are about to activate PostPay Tariff with \nMonthly Bundle of Sh1050 and credit limit of 1050.\n");	
		printf("1.\t Activate\n");
		printf("2. Enter Preferred limit\n");
		printf("3.\t Decline\n");
		printf("0. Home\n");
		
		int choice;
		scanf("%d",&choice);
		//Activate
		if (choice == 1)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Enter preferred limit
		else if (choice == 2)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Decline
		else if (choice == 3)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Home
		else if(choice == 0)
		{
			main();
		}
		else
		{ 
		printf("Invalid Entry, Try Again.");
		}
		}
		//sh2100 (15GB)
		else if (choice == 2)
		{
		printf("You are about to activate PostPay Tariff with \nMonthly Bundle of Sh2100 and credit limit of 2100.\n");	
		printf("1.\t Activate\n");
		printf("2. Enter Preferred limit\n");
		printf("3.\t Decline\n");
		printf("0. Home\n");
		
		int choice;
		scanf("%d",&choice);
		//Activate
		if (choice == 1)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Enter preferred limit
		else if (choice == 2)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Decline
		else if (choice == 3)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Home
		else if(choice == 0)
		{
			main();
		}
		else
		{ 
		printf("Invalid Entry, Try Again.");
		}
		}
		//sh3150 (25GB)
		else if (choice == 3)
		{
		printf("You are about to activate PostPay Tariff with \nMonthly Bundle of Sh1050 and credit limit of 1050.\n");	
		printf("1.\t Activate\n");
		printf("2. Enter Preferred limit\n");
		printf("3.\t Decline\n");
		printf("0. Home\n");
		
		int choice;
		scanf("%d",&choice);
		//Activate
		if (choice == 1)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Enter preferred limit
		else if (choice == 2)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Decline
		else if (choice == 3)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Home
		else if(choice == 0)
		{
			main();
		}
		else
		{ 
		printf("Invalid Entry, Try Again.");
		}
		}
		//sh5200 (Unlimited Data)
		else if (choice == 4)
		{
		printf("You are about to activate PostPay Tariff with \nMonthly Bundle of Sh5200 and Unlimited Data+2500Mins+Unlimited SMS\n.");	
		printf("1.\t Activate\n");
		printf("2. Enter Preferred limit\n");
		printf("3.\t Decline\n");
		printf("0. Home\n");
		
		int choice;
		scanf("%d",&choice);
		//Activate
		if (choice == 1)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Enter preferred limit
		else if (choice == 2)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Decline
		else if (choice == 3)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Home
		else if(choice == 0)
		{
			main();
		}
		else
		{ 
		printf("Invalid Entry, Try Again.");
		}
		}
		//sh10430 (Unlimited Bundles)
		else if (choice == 5)
		{
		printf("You are about to activate PostPay Tariff with \nMonthly Bundle of Sh10430 and Unlimited Bundles + Unlimited Mins+Unlimited SMS.");	
		printf("1.\t Activate\n");
		printf("2. Enter Preferred limit\n");
		printf("3.\t Decline\n");
		printf("0. Home\n");
		
		int choice;
		scanf("%d",&choice);
		//Activate
		if (choice == 1)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Enter preferred limit
		else if (choice == 2)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Decline
		else if (choice == 3)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Home
		else if(choice == 0)
		{
			main();
		}
		else
		{ 
		printf("Invalid Entry, Try Again.");
		}
		}
		//Home
		else if(choice==0)
		{
			main();
		}
		else
		{
			printf("Invalid Entry, Try Again.\n");
		}
		}	
	//Home
	else if(choice == 0)
	{
		main();
	}
	else 
	{
		printf("Invalid Entry, Try Again.");
	}
	}
    //Easy-Talk Minutes
    else if (choice==6)
    {
    	printf("\t EAasy Talk Bundles:\t");
    	printf("1.Sh2000 (1700 Minutes+5000 SMS)");	
		printf("2.Sh1000 (800 Minutes+1000 SMS)");
		printf("3.Sh500 (300 Minutes+500 SMS)");
		printf("\t4.Buy for Other");
		printf("\t5.About Easy Talk)");
		printf("\t0.HOME");
		
	int choice;
	scanf("%d",&choice);
	//Sh2000 (1700minutes)
	if (choice == 1)
	{
		printf("Please confirm purchase of 1700 Minutes+\n \t5000SMS @Ksh2000 Valid 30 days\n");
		printf("\t1.Accept\n");
		printf("\tDecline\n");
		
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice ==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
	printf("Invalid Entry, Try Again");
	main();
	}
	}
	//SH1000 (800Mins)
	else if (choice == 2)
	{
		printf("Please confirm purchase of 800 Minutes+\n \t1000SMS @Ksh1000 Valid 30 days\n");
		printf("\t1.Accept\n");
		printf("\tDecline\n");
		
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice ==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
		main();
	}
	}
	//Sh500 (300mins)
	else if (choice == 3)
	{
		printf("Please confirm purchase of 300 Minutes+\n \t500SMS @Ksh500 Valid 30 days\n");
		printf("\t1.Accept\n");
		printf("\tDecline\n");
		
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice ==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
		main();
	}
	}
	//Buy for
	else if(choice == 4)
	{
		printf("Please Enter other Number:");
		printf("0xxxxxxxxx");
		int num;
		scanf("%d",&num);
	
	printf("\n\t Successfully purchased Monntly Bundles For %d",num);	
		main();
	}
	//About Easy Talk
	else if (choice==5)
	{
		printf("1:What it is Easy-Talk Bundle?\n");
		printf("\t2:Who is Eligible?\n");
		printf("3:How do i purchase Easy-Talk Bundle?\n");
		printf("4:What is the validity of the Bundle?\n");
		printf("5:Will purchase of another Bundle Extend?\n");
		printf("0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//What Is
	if(choice == 1)
	{
	printf("This is a new integrated voice and SMS\n monthly plan that allow you a worry-free experience on Calls & SMS targeting mainly \n voice heavy cusomer\n");	
	}
	//Who is Eligible?
	else if (choice==2)
	{
		printf("The Easy-Talk Bundles are available to all safaricom customers(prepaid, postpaid and hybrid).\n");
	}
	//How do i purchase Easy-Talk Bundle
	else if(choice == 3)
	{
		printf("Dial *444# select option Easy-Talk Monthly\n Which will Display available plans for you.\n");
		}	
	//What is the validity of the Bundle
	else if (choice == 4)
	{
		printf("Bundles are valid for 30 days\n");
	}
	//Home
	else if (choice == 0)
	{
		main();
	}
	//Will purchase of another Bundle Extend
	else if (choice == 5)
	{
		printf("No. This Bundle will not aloow rollover of \n\t resources.\n");
	}
	else {
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}
	//Home
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again\n");
		main();
	}
	}	
	//Post-pay FAQ
	else if (choice==7)
	{
		printf("You will Receive a Link Shortly.\n \tThank you");
	}
	//Home
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}
	//No Expiry Bundles
	else if(choice == 4)
	{
		printf("1:Buy For My Number\n");
		printf("2:Buy For Other Number\n");
		printf("\t3:Okoa Data\n");
		printf("4:Stop AutoRenew\n");
		printf("5:Stop Autorefill\n");
		printf("5:Home\n");
	
	int choice;
	scanf("%d",&choice);
	//Buy for my No
	if (choice == 1)
	{
		printf("1:Enter amount you wish to Spend\n");
		printf("2:Sh20 (70MB+Whatapp)\n");
		printf("3:Sh50 (175MB+Whatapp)\n");
		printf("4:Sh100 (500MB+Whatapp)\n");
		printf("5:Sh250 (1250MB+Whatapp)\n");
		printf("6:Sh500 (2500MB+Whatapp)\n");
		printf("7:Sh1000 (5000MB+Whatsapp)\n");
		printf("0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Enter Amount
	if (choice == 1)
	{
		printf("Enter Amount you wish to Spend:\n");
		int num;
		scanf("%d",&num);
		printf("Successufully purshased Bundles for %d",num);
		main();
	}
	//Sh20 (70Mbs)
	else if (choice == 2)
	{
		printf("Confirm Purchase of 70MBs (No Expiry Date) @Ksh 20\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh20\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh50 (175Mbs)
	else if (choice == 3)
	{
		printf("Confirm Purchase of 175MBs (No Expiry Date) @Ksh 50\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh50\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh100 (500Mbs)
	else if (choice == 4)
	{
		printf("Confirm Purchase of 500MBs (No Expiry Date) @Ksh 100\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh100\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}	
	//Sh250 (1250Mbs)
	else if (choice == 5)
	{
		printf("Confirm Purchase of 1250MBs (No Expiry Date) @Ksh 250\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh250\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh500 (2500Mbs)
	else if (choice == 6)
	{
		printf("Confirm Purchase of 2500MBs (No Expiry Date) @Ksh 500\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh500\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh1000 (5000Mbs)
	else if (choice == 7)
	{
		printf("Confirm Purchase of 5000MBs (No Expiry Date) @Ksh 1000\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh1000\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Buy for Other
	else if (choice == 2)
	{
		printf("1:Enter Other Number:\n");
		printf("\t0:Home.");
		int num;
		scanf("%d",&num);
	
	//Enter Other Number
	if (num==1)
	{
		printf("BSC:1101 Assignmeent");
	}
	else if(num==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, try Again");
		main();
	}
	}
	//Okoa DATA
	else if (choice==3)
	{
		printf("Bundles Valid for 24 hrs\n");
		printf("1:Okoa 675MB for Sh99\n");
		printf("2:Okoa 270MB for Sh50\n");
		printf("3:Okoa 90MB for Sh20\n");
		printf("4:Okoa 30MB for Sh10\n");
		printf("5:Okoa 10MB for Sh5\n");
		printf("\t0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Sh99 (675MBs)
	if (choice == 1)
	{
		printf("Okoa 675MB for Sh99 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh50 (270MBs)
	else if (choice == 2)
	{
		printf("Okoa 270MB for Sh50 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}	
	//Sh20 (90MBs)
	else if (choice == 3)
	{
		printf("Okoa 90MB for Sh20 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh10 (30MBs)
	else if (choice == 4)
	{
		printf("Okoa 30MB for Sh10 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh5 (10MBs)
	else if (choice == 3)
	{
		printf("Okoa 10MB for Sh5 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Stop Renewal
	else if (choice == 4)
	{
		printf("You've Successfully unsubscribed from Autorenew");
	}
	//Stop Refill
	else if (choice == 5)
	{
		printf("You've Successfully unsubscribed from Auto refill");
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Check Target
	else if (choice == 2)
	{
		printf("Spend Your target of ***MB and get ***MB nyakua Bonus. To achieve your Nyakua Bonus quickly dial *544# and buy a bundle.");
	}
	//Check Daily Usage.
	else if (choice == 3)
	{
	printf(" Your Usage today is ***MB. To achieve your Bonus target faster, \nbuy a bundle by dialling *544# and use to get up to 100% Extra Data everyday.");
	}
	//Data balance
	else if (choice == 4)
	{
	printf("You will receive SMS shortly.\nSimply dial *544# to Buy or Okoa Data and Browse bila waas!!");
    }
    //join
    else if(choice == 5)
    {
	printf("Dear Customer, NYAKUA IS BACK!!\nEnjoy FREE DATA BONUS \nuse ***MB today and get ***MB FREE! \nDial *554# and select otion 6 to opt out");
    }
	//opt out
	else if (choice == 6)
	{
		printf("Dear Customer you have Successfull Unsubscribed from Nyakua Bonus.");
	}
	//How it works
	else if (choice == 7)
	{
		printf("1.\t How to achieve my target.\n");
		printf("2.\t How Much do i get.\n");
		printf("3.\t Which bundles Qualify.\n");
		printf("4.\t Which Bundle do not Qualify.\n");
		printf("0.\t Home.");
		
		int choice;
	scanf("%d",&choice);
	//How to achieve target
	if (choice==1)
	{
	printf("1.\t Browse More to achieve your Target.\n");	
	}
	//How much do i get
	else if (choice == 2)
	{
	printf("1.\t Get 100% NYAKUA BONUS when you achiev your daily target.\n");
	}
	//Which bundles Qualify
	else if (choice ==3)
	{
	printf("1.\t Daily Bundles, Weekly Bundles, Monthly Bundles and \nNo Expiry bundles Qualify.\n");
	}
	//Bundles that don't qualify
	else if (choice == 4)
	{
	printf("1.\t Promotional Bundles, Data deals, Tunukiwa and FREE \ndo not qualify for NYAKUA BONUS.\n");
	}
	//go back home
	else if (choice == 0)
	{
	main();}
	else
	{printf("\nInvalid Entry. Try again by dialing *544#");
	}
	
	}
	//Home
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
    }
	//My Data Deals
	else if(choice ==1)
	{
		printf("\t1:Sh99=1GB, 24hr\n");
		printf("\t2:Sh20=1GB, 1hr\n");
		printf("3:Sh3000=25GB, 30 Days\n");
		printf("\t4:Hot Deals(Tunukiwa)\n");
		printf("\t0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Sh99 (1GB 24hrs)
	if (choice ==1)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 99\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Cancel
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry Try Again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 1GB, 24hrs:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 99Gbs 24hrs	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();}
	}
	//Home
	else if(choice == 0)
	{
		main();
	}
	else 
	{
		printf("Invalid Entry Try Again");
		main();
	}
	}
	
	//Sh20 (1GB 1hr)
	else if (choice ==2)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 20\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry, Try Again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 1GB, 1hrs:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 99Gbs 24hrs	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();}
	}
	//Home
	else if(choice == 0)
	{
		main();
	}
	else 
	{
		printf("Invalid Entry Try Again");
		main();
	}
	}
	
	//Sh3000 (25GB 30 Days)
	else if (choice ==3)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 3000\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else 
	{
		printf("Invalid Entry, Try Again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 25GB, 30 Days:\n");
	printf("1. Accept.\n");
	printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 25Gbs 	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();}
	}
	//Home
	else if(choice == 0)
	{
		main();
	}
	else 
	{
		printf("Invalid Entry Try Again");
		main();
	}
	}	
	
	//Hot Deals
	else if (choice == 4)
	{
		printf("1:Data Bundle(NO Expiry DATE)\n");
		printf("\t2:Sh15=175MB, 24hr\n");
		printf("\t3:Sh20=1GB, 1hr\n");
		printf("\t4:Sh50=1.5GB, 3hr\n");
		printf("\t5:Sh50=1GB, till Midnight\n");
		printf("\t6:Sh50=500MB, 3day\n");
		printf("\t7:Sh99=1GB, 24hr\n");
		printf("\t8:Sh500=5GB, 30day\n");
		printf("\t9:Sh1000=15GB, 30day\n");
		printf("\t0:Home\n");
	
	int choice;
	scanf("%d",&choice);	
	//No Expiry date
	if (choice == 1)
	{
		printf("1:Buy For My Number\n");
		printf("2:Buy For Other Number\n");
		printf("\t3:Okoa Data\n");
		printf("4:Stop AutoRenew\n");
		printf("5:Stop Autorefill\n");
		printf("5:Home\n");
	
	int choice;
	scanf("%d",&choice);
	//Buy for my No
	if (choice == 1)
	{
		printf("1:Enter amount you wish to Spend\n");
		printf("2:Sh20 (70MB+Whatapp)\n");
		printf("3:Sh50 (175MB+Whatapp)\n");
		printf("4:Sh100 (500MB+Whatapp)\n");
		printf("5:Sh250 (1250MB+Whatapp)\n");
		printf("6:Sh500 (2500MB+Whatapp)\n");
		printf("7:Sh1000 (5000MB+Whatsapp)\n");
		printf("0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Enter Amount
	if (choice == 1)
	{
		printf("Enter Amount you wish to Spend:\n");
		int num;
		scanf("%d",&num);
		printf("Successufully purshased Bundles for %d",num);
		main();
	}
	//Sh20 (70Mbs)
	else if (choice == 2)
	{
		printf("Confirm Purchase of 70MBs (No Expiry Date) @Ksh 20\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh20\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh50 (175Mbs)
	else if (choice == 3)
	{
		printf("Confirm Purchase of 175MBs (No Expiry Date) @Ksh 50\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh50\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh100 (500Mbs)
	else if (choice == 4)
	{
		printf("Confirm Purchase of 500MBs (No Expiry Date) @Ksh 100\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh100\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}	
	//Sh250 (1250Mbs)
	else if (choice == 5)
	{
		printf("Confirm Purchase of 1250MBs (No Expiry Date) @Ksh 250\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh250\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh500 (2500Mbs)
	else if (choice == 6)
	{
		printf("Confirm Purchase of 2500MBs (No Expiry Date) @Ksh 500\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh500\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh1000 (5000Mbs)
	else if (choice == 7)
	{
		printf("Confirm Purchase of 5000MBs (No Expiry Date) @Ksh 1000\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh1000\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Buy for Other
	else if (choice == 2)
	{
		printf("1:Enter Other Number:\n");
		printf("\t0:Home.");
		int num;
		scanf("%d",&num);
	
	//Enter Other Number
	if (num==1)
	{
		printf("BSC:1101 Assignmeent");
	}
	else if(num==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, try Again");
		main();
	}
	}
	//Okoa DATA
	else if (choice==3)
	{
		printf("Bundles Valid for 24 hrs\n");
		printf("1:Okoa 675MB for Sh99\n");
		printf("2:Okoa 270MB for Sh50\n");
		printf("3:Okoa 90MB for Sh20\n");
		printf("4:Okoa 30MB for Sh10\n");
		printf("5:Okoa 10MB for Sh5\n");
		printf("\t0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Sh99 (675MBs)
	if (choice == 1)
	{
		printf("Okoa 675MB for Sh99 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh50 (270MBs)
	else if (choice == 2)
	{
		printf("Okoa 270MB for Sh50 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}	
	//Sh20 (90MBs)
	else if (choice == 3)
	{
		printf("Okoa 90MB for Sh20 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh10 (30MBs)
	else if (choice == 4)
	{
		printf("Okoa 30MB for Sh10 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh5 (10MBs)
	else if (choice == 3)
	{
		printf("Okoa 10MB for Sh5 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Stop Renewal
	else if (choice == 4)
	{
		printf("You've Successfully unsubscribed from Autorenew");
	}
	//Stop Refill
	else if (choice == 5)
	{
		printf("You've Successfully unsubscribed from Auto refill");
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//sh15 (175MB)
	else if (choice == 2)
	{
		printf("Buy Sh15=175MB, 24hr Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 15\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh15=175, 24hr, Get Okoa Jahazi of \nSh20 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 175mbs	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh20 (1GB 1hr)
	else if (choice == 3)
	{
		printf("Buy Sh20=1GB, 1hr Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 20\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh20=1GB, 1hr, Get Okoa Jahazi of \nSh20 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 1GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh50 (1.5GB 3hr)
	else if (choice == 4)
	{
		printf("Buy Sh50=1.5GB, 3hr Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 50\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh50=1.5GB, 3hr, Get Okoa Jahazi of \nSh50 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 1.5GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh50 (1GB till midnight)
	else if (choice == 5)
	{
		printf("Buy Sh50=1GB, till midnight Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 20\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh50=1GB, till midnight, Get Okoa Jahazi of \nSh50 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 1GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh50 (500MB 3day)
	else if (choice == 6)
	{
		printf("Buy Sh50=500GB, 3day Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 50\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh50=500MB, 3day, Get Okoa Jahazi of \nSh20 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 500MB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh99 (1GB 24hr)
	else if (choice == 7)
	{
		printf("Buy Sh99=1GB, 24hr Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 99\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh99=1GB, 24hr, Get Okoa Jahazi of \nSh99 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 1GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh1000 (15GB 30day)
	else if (choice == 9)
	{
		printf("Buy Sh1000=15GB, 30day Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 1000\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh1000=15GB, 3day, Get Okoa Jahazi of \nSh1000 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 15GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh500 (5GB 3days)
	else if (choice == 8)
	{
		printf("Buy Sh500=5GB, 3days Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 500\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh500=5GB, 3day, Get Okoa Jahazi of \nSh1000 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 5GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry. Tay Again");
	}
	}
	
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Daily Bundles
	else if (choice==2)
	{
	//print Daily Bundles Plan
	printf("1.\t Sh.10: 35MB + 25SMS.\n");
	printf("2.\t Sh.20: 100MB + 70SMS + FREE Whatsapp.\n");
	printf("3.\t Sh.50: 300MB + 200SMS + FREE Whatsapp.\n");
	printf("4.\t Sh.20: 1GB + 200SMS + FREE Whatsapp. \n");
	printf("5.\t Power Hour 250MB @ Sh.19 \n");
	printf("6.\t Sh.5: 10MB + 7SMS \n");
	
	//choose plan
	int choice;
	scanf("%d",&choice);
	//sh.10 35mb + 25SMS
	if (choice== 1)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 10\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry. Tay Again");
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 35MB:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 35mbs	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	// sh.20 100MB + 70SMS + free whatsapp
	else if (choice == 2)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 20\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");
	}	
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");
	}
	else
	{
		printf("Invalid Entry.\n");
		goto BuyNyakua;}
    }
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 100MB + 70SMS + Free Whatsapp:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 100mbs	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");}
	//goto home page
	else if (choice==00)
	{main();
	}
	else
	{
		printf("Invalid Entry.\n");
		main();}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	// sh.50 300MB + 200SMS + free whatsapp
	else if (choice == 3)
		{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime.\n");
	printf("2. Mpesa.\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 50\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");
	}	
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");
	}
	else
	{
		printf("Invalid Entry.\n");
		goto BuyNyakua;}
    }
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to sh.50 300MB + 200SMS + free whatsapp\n:");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 100mbs	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	//Decline
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");}
	else
	{
		printf("Invalid Entry.");
		goto BuyNyakua;}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	// sh.100 1GB + 200SMS + free whatsapp
	else if (choice == 4)
		{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime.\n");
	printf("2. Mpesa.\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 100\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");
	}	
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");
	}
	else
	{
		printf("Invalid Entry.\n");
		goto BuyNyakua;}
    }
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice== 2)
	{
	printf("Subscribe to sh.100 1GB + 200SMS + free whatsapp\n:");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 100mbs	
	int choice;
	scanf("%d",&choice);
	//Aceept
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	//Decline
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");}
	else
	{
		printf("Invalid Entry.");
		goto BuyNyakua;}
	}	
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Power Hour 250MB @sh.19
	else if (choice == 5)
		{
	//Once
	printf("1. Airtime.\n");
	printf("2. Mpesa.\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 19\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.\n");
	}	
	//Decline
	else if (choice==2)
	{
	printf("Safaricom The Better Option.\n");
	}
	else
	{
	printf("Invalid Entry, Try again\n");
	main();
	}
	}

	else
	{
		printf("Invalid Entry.\n");
		goto BuyNyakua;}
    }
		//sh.5 10mb + 7sms
	else if (choice ==6)
		{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 5\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		goto BuyNyakua;}
    }
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 10MB Daily:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 10mbs	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");}	
	else
	{
		printf("\nInvalid Entry.");
		goto BuyNyakua;}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}	
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Weekly Bundles
	else if(choice == 3)
	{
		printf("1.\t 200MB@Sh50\n");
		printf("2.\t 500MB + Whatsapp@Sh100\n");
		printf("3.\t 1.5GB + Whatsapp@Sh250\n");
		printf("4.\t 4GB + Whatsapp@Sh500\n");
		printf("0.\t Home\n");
		
	int choice;
	scanf("%d",&choice);
	//sh50 (200MB)
	if (choice==1)
	{
		printf("1.\t Buy 200MB@sh50 using:\n");
		printf("\t 1.Airtime\n");
		printf("\t 2.M-pesa\n");
		printf("3.Bonga(100 points\n)");
		printf("0.\t Home\n");
		
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
		printf("\nBSC:1101 Assignment");
	}
	//M-pesa
	else if(choice == 2)
	{
		printf("\nBSC:1101 Assignment");
	}
	//Bonga points
	else if(choice == 3)
	{
		printf("\nBSC:1101 Assignment");
	}
	else if(choice == 0)
	{
		main();
	}
	else
	{
		printf("Invalid entry try again");
		main();
	}
	}
	//sh100 (500MB)
	else if (choice==2)
	{
		printf("1.\t Buy 500MB@sh100 using:\n");
		printf("\t 1.Airtime\n");
		printf("\t 2.M-pesa\n");
		printf("3.Bonga(200 points\n)");
		printf("0.\t Home\n");
		
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
		printf("\nBSC:1101 Assignment");
	}
	//M-pesa
	else if(choice == 2)
	{
		printf("\nBSC:1101 Assignment");
	}
	//Bonga points
	else if(choice == 3)
	{
		printf("\nBSC:1101 Assignment");
	}
	//Home
	else if(choice == 0)
	{
		main();
	}
	else
	{
		printf("Invalid entry try again");
		main();
	}
	}
	//Sh250 (1.5GB)
	else if (choice==3)
	{
		printf("1.\t Buy 1.5GB@sh250 using:\n");
		printf("\t 1.Airtime\n");
		printf("\t 2.M-pesa\n");
		printf("3.Bonga(500 points\n)");
		printf("0.\t Home\n");
		
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
		printf("\nBSC:1101 Assignment");
	}
	//M-pesa
	else if(choice == 2)
	{
		printf("\nBSC:1101 Assignment");
	}
	//Bonga points
	else if(choice == 3)
	{
		printf("\nBSC:1101 Assignment");
	}
	//Home
	else if(choice == 0)
	{
		main();
	}
	else
	{
		printf("Invalid entry try again");
		main();
	}
	}
	
	//Sh500 (4GB)
	else if (choice==4)
	{
		printf("1.\t Buy 4GB@sh500 using:\n");
		printf("\t 1.Airtime\n");
		printf("\t 2.M-pesa\n");
		printf("3.Bonga(2000 points\n)");
		printf("0.\t Home\n");
		
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
		printf("\nBSC:1101 Assignment");
	}
	//M-pesa
	else if(choice == 2)
	{
		printf("\nBSC:1101 Assignment");
	}
	//Bonga points
	else if(choice == 3)
	{
		printf("\nBSC:1101 Assignment");
	}
	//Home
	else if(choice == 0)
	{
		main();
	}
	else
	{
		printf("Invalid entry try again");
		main();
	}
	}
	//Home
	else if (choice ==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again\n");
		main();
	}
	}
	//Monthly Bundles
	else if(choice==4)
	{
		printf("1.\t Buy 35MB +25SMS @ Sh10\n");
		printf("2.\t Data Only plans\n");
		printf("3.\t All in one\n");
		printf("4.\t Buy For Other Number\n");
		printf("5.\t Join Postpay\n");
		printf("6.\t Easy-Talk Minutes\n");
		printf("7.\t Postpay FAQs\n");
		printf("0.\t Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Buy 35mb +25MB @sh10
	if (choice==1)
	{
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 10\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Enrty, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
		printf("Subscribe to 35MB:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 35mbs	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");}
	//goto home page
	else if (choice==0)
	{main();
	}
	else
	{
		printf("\nInvalid Entry.");
		main();}
	}
	//Back
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}

	//Data plans only
	else if (choice == 2)
	{
		printf("\t1:Ksh 250: 1GB\n");
		printf("2:Ksh 500: 2.5GB + WhatsApp\n");
		printf("3:Ksh 1000: 7GB + WhatsApp\n");
		printf("4:Ksh 2000: 20GB + WhatsApp\n");
		printf("0: BACK.\n");
		
	int choice;
	scanf("%d",&choice);
	//Ksh.250 1GB
	if (choice== 1)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh250\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 1GB @ Ksh250:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 1GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("\nInvalid Entry.");
		main();}
	}	
	//Back
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}
	//Ksh 500: 2.5GB + WhatsApp
	else if (choice == 2)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh500\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 2.5GB @ Ksh500:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 2.5GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("\nInvalid Entry.");
		main();}
	}	
	//Back
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}	
	//Ksh 1000: 7GB + WhatsApp
	else if (choice == 3)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh1000\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 7GB @ Ksh1000:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 7GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");}
	//goto home page
	else if (choice==0)
	{main();
	}
	else
	{
		printf("\nInvalid Entry.");
		main();}
	}	
	//Back
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}
	//Ksh 2000: 20GB + WhatsApp
	else if (choice == 4)
	{
	printf("1.\t Buy Once\n");
	printf("2.\t Auto Renew\n");
	printf("0.\t HOME.\n");
    
    //Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh2000\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 25GB @ Ksh2000:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 25GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");}
	//goto home page
	else if (choice==0)
	{main();
	}
	else
	{
		printf("\nInvalid Entry.");
		main();}
	}	
	//Back
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}
	//Home
	else if (choice ==0)
	{
	main();
	}
	else 
	{
		printf("Invalid Entry. Try Again.\n");
		main();
	}
	}
	
	//All In One
	else if (choice == 3)
	{
		printf("\t All bundles come with WhatsApp\n");
		printf("1:SH 1050(5GB+2GB YT+ 400MINS + 1000SMS)\n");
		printf("2:SH 2100(15GB+2GB YT+ 1000MINS + 2000SMS)\n");
		printf("3:SH 3150(25GB+2GB YT+ 1500MINS + 3000SMS)\n");
		printf("4:SH 5200(45GB+2GB YT+ 2500MINS + 5000SMS)\n");
		printf("5:SH 10430(100GB+2GB YT+ 7500MINS + 10000SMS)\n");
		printf("6:SH 550(2GB+2GB YT+ 100MINS + 500SMS)\n");
		printf("\t7:Earn extra airtime\n");
		printf("0:HOME\n");
		
	int choice;
	scanf("%d", &choice);
	//Sh 1050 (5GB)
	if (choice == 1)
	{
		printf("This Bundle comes with WhatsApp + FREE 2GB YouTube\n");
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 1050\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
		else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 5GB+2GB YT+ 400MINS + 1000SMS:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 5GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Sh 2100 (15GB)
	else if(choice ==2)
	{
		printf("This Bundle comes with WhatsApp + FREE 2GB YouTube\n");
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 2100\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 15GB+2GB YT+ 1000MINS + 2000SMS:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 15GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	
	//Sh 3150 (25GB)
	else if (choice == 3)
	{
		printf("This Bundle comes with WhatsApp + FREE 2GB YouTube\n");
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 3150\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
		else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 25GB+2GB YT+ 1500MINS + 3000SMS:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 25GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	
	//Sh 5200 (45GB)
	else if (choice == 4)
	{
		printf("This Bundle comes with WhatsApp + FREE 2GB YouTube\n");
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 5200\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
		else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 45GB+2GB YT+ 2500MINS + 5000SMS:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 45GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	
	//Sh 10430 (100GB)
	else if (choice == 5)
	{
		printf("This Bundle comes with WhatsApp + FREE 2GB YouTube\n");
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 10430\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
		else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 100GB+2GB YT+ 7500MINS + 10000SMS:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 100GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	
	//Sh 550 (2GB)
	else if (choice == 6)
	{
		printf("This Bundle comes with WhatsApp + FREE 2GB YouTube\n");
		printf("\t 1:Buy Once\n");
		printf("\t2:Auto Renew\n");
		printf("0.Back.\n");
	//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 550\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
		else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 2GB+2GB YT+ 100MINS + 500SMS:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 5GB	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	
	//Earn Extra
	else if(choice == 7)
	{
		printf("\t Earn Extra Airtime.\n");
		printf("1:Recommend Bundle\n");
		printf("2:Check Commision\n");
		printf("3:Opt out\n");
		
	int c;
	scanf("%d",&c);
	if (c ==1)
	{
	printf("Enter Phone Number:\n");
	
	int num;
	scanf("%d",&num);
	}
	else if (c==2)
	{
		printf("BSC:1101 Assignment");
	}
	else if(c==3)
	{
		printf("BSC:1101 Assignment.");
	}
	else
	{
	printf("Invalid Entry, Try Again.\n");
	main();
	}
	}
	//Home
	else if (choice ==0)
	{
		main();
	}
	else
	{
	printf("Invalid Entry, Try Again\n");
	main();
	}
	}
		
	//Buy for other Number
	else if (choice == 4)
	{
		printf("Enter Phone Number:\n");
		int num;
		scanf("%d",&num);
		printf("Successufully Sent Bundles for %d",num);
		main();
	}
	//join post-pay
	else if(choice == 5)
	{
		printf("\t Choose Journey:\n");
		printf("1: Join Using Web\n");
		printf("2: continue with USSD\n");
		printf("0:Back");
		
		int choice;
		scanf("%d",&choice);
	//Join using Web
	if (choice == 1)
	{
			printf("Thank You, Look out for a message with a link to join Postpay.");
	}
	//Continue With USSD	
	else if (choice == 2)
	{
		
		printf("1:Sh1050 (5GB+400Mins+Unlimited SMS\n)");
		printf("2:Sh2100 (15GB+1000Mins+Unlimited SMS\n)");
		printf("3:Sh3150 (25GB+1500Mins+Unlimited SMS\n)");
		printf("4:Sh5200 (Unlimited Data+2500Mins+Unlimited SMS\n)");
		printf("5:Sh10430 (unlimited Data+ Unlimited Mins+Unlimited SMS\n)");
		printf("0:Home\n");
		
		int choice;
		scanf("%d",&choice);
		//sh1050 (5GB)
		if (choice == 1)
		{
		printf("You are about to activate PostPay Tariff with \nMonthly Bundle of Sh1050 and credit limit of 1050.\n");	
		printf("1.\t Activate\n");
		printf("2. Enter Preferred limit\n");
		printf("3.\t Decline\n");
		printf("0. Home\n");
		
		int choice;
		scanf("%d",&choice);
		//Activate
		if (choice == 1)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Enter preferred limit
		else if (choice == 2)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Decline
		else if (choice == 3)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Home
		else if(choice == 0)
		{
			main();
		}
		else
		{ 
		printf("Invalid Entry, Try Again.");
		}
		}
		//sh2100 (15GB)
		else if (choice == 2)
		{
		printf("You are about to activate PostPay Tariff with \nMonthly Bundle of Sh2100 and credit limit of 2100.\n");	
		printf("1.\t Activate\n");
		printf("2. Enter Preferred limit\n");
		printf("3.\t Decline\n");
		printf("0. Home\n");
		
		int choice;
		scanf("%d",&choice);
		//Activate
		if (choice == 1)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Enter preferred limit
		else if (choice == 2)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Decline
		else if (choice == 3)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Home
		else if(choice == 0)
		{
			main();
		}
		else
		{ 
		printf("Invalid Entry, Try Again.");
		}
		}
		//sh3150 (25GB)
		else if (choice == 3)
		{
		printf("You are about to activate PostPay Tariff with \nMonthly Bundle of Sh1050 and credit limit of 1050.\n");	
		printf("1.\t Activate\n");
		printf("2. Enter Preferred limit\n");
		printf("3.\t Decline\n");
		printf("0. Home\n");
		
		int choice;
		scanf("%d",&choice);
		//Activate
		if (choice == 1)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Enter preferred limit
		else if (choice == 2)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Decline
		else if (choice == 3)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Home
		else if(choice == 0)
		{
			main();
		}
		else
		{ 
		printf("Invalid Entry, Try Again.");
		}
		}
		//sh5200 (Unlimited Data)
		else if (choice == 4)
		{
		printf("You are about to activate PostPay Tariff with \nMonthly Bundle of Sh5200 and Unlimited Data+2500Mins+Unlimited SMS\n.");	
		printf("1.\t Activate\n");
		printf("2. Enter Preferred limit\n");
		printf("3.\t Decline\n");
		printf("0. Home\n");
		
		int choice;
		scanf("%d",&choice);
		//Activate
		if (choice == 1)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Enter preferred limit
		else if (choice == 2)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Decline
		else if (choice == 3)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Home
		else if(choice == 0)
		{
			main();
		}
		else
		{ 
		printf("Invalid Entry, Try Again.");
		}
		}
		//sh10430 (Unlimited Bundles)
		else if (choice == 5)
		{
		printf("You are about to activate PostPay Tariff with \nMonthly Bundle of Sh10430 and Unlimited Bundles + Unlimited Mins+Unlimited SMS.");	
		printf("1.\t Activate\n");
		printf("2. Enter Preferred limit\n");
		printf("3.\t Decline\n");
		printf("0. Home\n");
		
		int choice;
		scanf("%d",&choice);
		//Activate
		if (choice == 1)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Enter preferred limit
		else if (choice == 2)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Decline
		else if (choice == 3)
		{
			printf("\nBSC:1101 Assignment");
		}
		//Home
		else if(choice == 0)
		{
			main();
		}
		else
		{ 
		printf("Invalid Entry, Try Again.");
		}
		}
		//Home
		else if(choice==0)
		{
			main();
		}
		else
		{
			printf("Invalid Entry, Try Again.\n");
		}

		}	
	//Home
	else if(choice == 0)
	{
		main();
	}
	else 
	{
		printf("Invalid Entry, Try Again.");
	}
	}
    //Easy-Talk Minutes
    else if (choice==6)
    {
    	printf("\t EAasy Talk Bundles:\t");
    	printf("1.Sh2000 (1700 Minutes+5000 SMS)");	
		printf("2.Sh1000 (800 Minutes+1000 SMS)");
		printf("3.Sh500 (300 Minutes+500 SMS)");
		printf("\t4.Buy for Other");
		printf("\t5.About Easy Talk)");
		printf("\t0.HOME");
		
	int choice;
	scanf("%d",&choice);
	//Sh2000 (1700minutes)
	if (choice == 1)
	{
		printf("Please confirm purchase of 1700 Minutes+\n \t5000SMS @Ksh2000 Valid 30 days\n");
		printf("\t1.Accept\n");
		printf("\tDecline\n");
		
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice ==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
		main();
	}
	}
	//SH1000 (800Mins)
	else if (choice == 2)
	{
		printf("Please confirm purchase of 800 Minutes+\n \t1000SMS @Ksh1000 Valid 30 days\n");
		printf("\t1.Accept\n");
		printf("\tDecline\n");
		
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice ==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
		main();
	}
	}
	//Sh500 (300mins)
	else if (choice == 3)
	{
		printf("Please confirm purchase of 300 Minutes+\n \t500SMS @Ksh500 Valid 30 days\n");
		printf("\t1.Accept\n");
		printf("\tDecline\n");
		
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice ==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Decline
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
		main();
	}
	}
	//Buy for
	else if(choice == 4)
	{
		printf("Please Enter other Number:");
		printf("0xxxxxxxxx");
		int num;
		scanf("%d",&num);
	
	printf("\n\t Successfully purchased Monntly Bundles For %d",num);	
		main();
	}
	//About Easy Talk
	else if (choice==5)
	{
		printf("1:What it is Easy-Talk Bundle?\n");
		printf("\t2:Who is Eligible?\n");
		printf("3:How do i purchase Easy-Talk Bundle?\n");
		printf("4:What is the validity of the Bundle?\n");
		printf("5:Will purchase of another Bundle Extend?\n");
		printf("0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//What Is
	if(choice == 1)
	{
	printf("This is a new integrated voice and SMS\n monthly plan that allow you a worry-free experience on Calls & SMS targeting mainly \n voice heavy cusomer\n");	
	}
	//Who is Eligible?
	else if (choice==2)
	{
		printf("The Easy-Talk Bundles are available to all safaricom customers(prepaid, postpaid and hybrid).\n");
	}
	//How do i purchase Easy-Talk Bundle
	else if(choice == 3)
	{
		printf("Dial *444# select option Easy-Talk Monthly\n Which will Display available plans for you.\n");
		}	
	//What is the validity of the Bundle
	else if (choice == 4)
	{
		printf("Bundles are valid for 30 days\n");
	}
	//Home
	else if (choice == 0)
	{
		main();
	}
	//Will purchase of another Bundle Extend
	else if (choice == 5)
	{
		printf("No. This Bundle will not aloow rollover of \n\t resources.\n");
	}
	else {
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}
	//Home
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again\n");
		main();
	}
	}	
	//Post-pay FAQ
	else if (choice==7)
	{
		printf("You will Receive a Link Shortly.\n \tThank you");
	}
	//Home
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}
	}	
	//No Expiry Bundles
	else if(choice == 5)
	{
		printf("1:Buy For My Number\n");
		printf("2:Buy For Other Number\n");
		printf("\t3:Okoa Data\n");
		printf("4:Stop AutoRenew\n");
		printf("5:Stop Autorefill\n");
		printf("5:Home\n");
	
	int choice;
	scanf("%d",&choice);
	//Buy for my No
	if (choice == 1)
	{
		printf("1:Enter amount you wish to Spend\n");
		printf("2:Sh20 (70MB+Whatapp)\n");
		printf("3:Sh50 (175MB+Whatapp)\n");
		printf("4:Sh100 (500MB+Whatapp)\n");
		printf("5:Sh250 (1250MB+Whatapp)\n");
		printf("6:Sh500 (2500MB+Whatapp)\n");
		printf("7:Sh1000 (5000MB+Whatsapp)\n");
		printf("0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Enter Amount
	if (choice == 1)
	{
		printf("Enter Amount you wish to Spend:\n");
		int num;
		scanf("%d",&num);
		printf("Successufully purshased Bundles for %d",num);
		main();
	}
	//Sh20 (70Mbs)
	else if (choice == 2)
	{
		printf("Confirm Purchase of 70MBs (No Expiry Date) @Ksh 20\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh20\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh50 (175Mbs)
	else if (choice == 3)
	{
		printf("Confirm Purchase of 175MBs (No Expiry Date) @Ksh 50\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh50\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh100 (500Mbs)
	else if (choice == 4)
	{
		printf("Confirm Purchase of 500MBs (No Expiry Date) @Ksh 100\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh100\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}	
	//Sh250 (1250Mbs)
	else if (choice == 5)
	{
		printf("Confirm Purchase of 1250MBs (No Expiry Date) @Ksh 250\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh250\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh500 (2500Mbs)
	else if (choice == 6)
	{
		printf("Confirm Purchase of 2500MBs (No Expiry Date) @Ksh 500\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh500\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh1000 (5000Mbs)
	else if (choice == 7)
	{
		printf("Confirm Purchase of 5000MBs (No Expiry Date) @Ksh 1000\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh1000\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Buy for Other
	else if (choice == 2)
	{
		printf("1:Enter Other Number:\n");
		printf("\t0:Home.");
		int num;
		scanf("%d",&num);
	
	//Enter Other Number
	if (num==1)
	{
		printf("BSC:1101 Assignmeent");
	}
	else if(num==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, try Again");
		main();
	}
	}
	//Okoa DATA
	else if (choice==3)
	{
		printf("Bundles Valid for 24 hrs\n");
		printf("1:Okoa 675MB for Sh99\n");
		printf("2:Okoa 270MB for Sh50\n");
		printf("3:Okoa 90MB for Sh20\n");
		printf("4:Okoa 30MB for Sh10\n");
		printf("5:Okoa 10MB for Sh5\n");
		printf("\t0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Sh99 (675MBs)
	if (choice == 1)
	{
		printf("Okoa 675MB for Sh99 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh50 (270MBs)
	else if (choice == 2)
	{
		printf("Okoa 270MB for Sh50 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}	
	//Sh20 (90MBs)
	else if (choice == 3)
	{
		printf("Okoa 90MB for Sh20 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh10 (30MBs)
	else if (choice == 4)
	{
		printf("Okoa 30MB for Sh10 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh5 (10MBs)
	else if (choice == 3)
	{
		printf("Okoa 10MB for Sh5 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Stop Renewal
	else if (choice == 4)
	{
		printf("You've Successfully unsubscribed from Autorenew");
	}
	//Stop Refill
	else if (choice == 5)
	{
		printf("You've Successfully unsubscribed from Auto refill");
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Entertainment Bundles
	else if(choice==6)
	{
		printf("0:Unlock Baze Bonus\n");
		printf("\t1:Youtube\n");
		printf("\t2:ShowMax\n");
		printf("\t3:Baze\n");
		printf("\t4:Angaza\n");
		printf("\t5:K24 Live\n");
		printf("\t6:Viusasa\n");
		printf("7:Education Bundle\n");
		printf("\t8:Unsubscribe\n");
		printf("\t98:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Unlock Baze Bonus
	if (choice==0)
	{
		printf("Congratulations, You have unlocked Baze Bonus.\n");
		printf("\t1:Buy a Subscription.\n");
		printf("\t2:Try and Buy\n");
		printf("\t3:About Baze");
		printf("\t0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Buy a Subscription
	if (choice == 1)
	{
		printf("Select Your Subsription\n");
		printf("1:All Day pass 200MB @Ksh 20\n");
		printf("2:All Day pass @Ksh 10\n");
		printf("0:Home");
		
	int choice;
	scanf("%d",&choice);
	//sh20 (200MB)
	if (choice == 1)
	{
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 20\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry. Tay Again");
	}
	}
	//Sh10
	else if (choice == 2)
	{
	
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 10\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry. Tay Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Try and Buy
	else if (choice == 2)
	{
		printf("Free channel on Baze offers You select\n show for FreeClick on the link sent on SMS\n");
	}
	//About Baze
	else if (choice == 3)
	{
		printf("\t1:What is Baze?\n");
		printf("\t2:How Much does Baze cost?\n");
		printf("\t3:What is Baze Bundle?\n");
		printf("\t4:What can i watch on Baze?\n");
		printf("\t5:How Do i unsubscribe from Baze?\n");
		printf("\t0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//What is Baze
	if (choice==1)
	{
		printf("Baze is a web based vido platform\n dleivering entertaining local short form video \ncontent to your phone it is the \n Home of local Entertainment");
	}
	//How Much does Baze cost
	else if(choice == 2)
	{
		printf("We have an all Day pass at Ksh 10 and all \nDay pass with 200Mb at Ksh 20.");
	}
	//What is Baze Bundle?
	else if(choice == 3)
	{
		printf("As a Baze first time customer you will be \nawarded 500MB data daily for 7 Days. you \n  need to register to get this bundle\n ");
	}
	//What can i watch on Baze
	else if(choice == 4)
	{
		printf("Enjoy a wide variety of exclusive content in \ncomedy, drama, kids, lifestyle and so much more.\n");
	}
	//How Do i unsubscribe from Baze
	else if (choice == 5)
	{
		printf("dial *544*35#");
	}
	//Home
	else if (choice == 0)
	{
		main();
	}
	else 
	{
		printf("Invalid Input, Try Again\n");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Youtube
	else if(choice ==1)
	{
		printf("Enjoy the best videos on Youtube;\n");
		printf("1:Ksh 10(1GB Youtube for 1Hr)\n");
		printf("2:Ksh10(80MB Youtube)\n");
		printf("3:Ksh20(200MB Youtube)\n");
		printf("4:Ksh50(500MB Youtube)\n");
		
	int choice;
	scanf("%d",&choice);
	//sh10 (1GB 1hr)
	if (choice == 1)
	{
		printf("Get 1GB YouTube Bundle @10 bob valid \nfor 1hr! Using:\n");
		printf ("1:Airtime");
		printf("2:Mpesa");
		
		//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 10\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry. Tay Again");
	}
		}	
	//sh10 (80MB 24hr)
	else if (choice == 2)
	{
		printf("Get 80MB YouTube Bundle @10 bob valid \nfor 24hr! Using:\n");
		printf ("1:Airtime");
		printf("2:Mpesa");
		
		//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 10\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry. Tay Again");
	}
		}	
	//sh20 (200MB 24hr)
	else if (choice == 3)
	{
		printf("Get 80MB YouTube Bundle @10 bob valid \nfor 24hr! Using:\n");
		printf ("1:Airtime");
		printf("2:Mpesa");
		
		//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 80\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry. Tay Again");
	}
		}
	//50 (500MB 24hr)
	else if (choice ==4 )
	{
		printf("Get 500MB YouTube Bundle @50 bob valid \nfor 24hr! Using:\n");
		printf ("1:Airtime");
		printf("2:Mpesa");
		
		//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 50\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry. Tay Again");
	}
		}
	else 
	{
		printf("Invalid Input, try Again");
		main();
	}
	}	
	//Showmax
	else if(choice == 2)
	{
		printf("to Buy a Shomax pass, \nclick on th link sent on SMS\n");
	}
	//baze
	else if (choice==3)
	{
		printf("\t1:Buy a Subscription.\n");
		printf("\t2:Try and Buy\n");
		printf("\t3:About Baze");
		printf("\t0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Buy a Subscription
	if (choice == 1)
	{
		printf("Select Your Subsription\n");
		printf("1:All Day pass 200MB @Ksh 20\n");
		printf("2:All Day pass @Ksh 10\n");
		printf("0:Home");
		
	int choice;
	scanf("%d",&choice);
	//sh20 (200MB)
	if (choice == 1)
	{
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 20\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry. Tay Again");
	}
	}
	//Sh10
	else if (choice == 2)
	{
	
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 10\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry. Tay Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Try and Buy
	else if (choice == 2)
	{
		printf("Free channel on Baze offers You select\n show for FreeClick on the link sent on SMS\n");
	}
	//About Baze
	else if (choice == 3)
	{
		printf("\t1:What is Baze?\n");
		printf("\t2:How Much does Baze cost?\n");
		printf("\t3:What is Baze Bundle?\n");
		printf("\t4:What can i watch on Baze?\n");
		printf("\t5:How Do i unsubscribe from Baze?\n");
		printf("\t0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//What is Baze
	if (choice==1)
	{
		printf("Baze is a web based vido platform\n dleivering entertaining local short form video \ncontent to your phone it is the \n Home of local Entertainment");
	}
	//How Much does Baze cost
	else if(choice == 2)
	{
		printf("We have an all Day pass at Ksh 10 and all \nDay pass with 200Mb at Ksh 20.");
	}
	//What is Baze Bundle?
	else if(choice == 3)
	{
		printf("As a Baze first time customer you will be \nawarded 500MB data daily for 7 Days. you \n  need to register to get this bundle\n ");
	}
	//What can i watch on Baze
	else if(choice == 4)
	{
		printf("Enjoy a wide variety of exclusive content in \ncomedy, drama, kids, lifestyle and so much more.\n");
	}
	//How Do i unsubscribe from Baze
	else if (choice == 5)
	{
		printf("dial *544*35#");
	}
	//Home
	else if (choice == 0)
	{
		main();
	}
	else 
	{
		printf("Invalid Input, Try Again\n");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//Angaza
	else if(choice == 4)
	{
		printf("1:Angaza daily\n");
		printf("2:Angaza weekly\n");
		printf("3:Angaza Montly\n");
		
	int choice;
	scanf("%d",&choice);
	//Angaza Daily
	if (choice == 1)
	{
		printf("Watch Your favourite Gospel Music Videos \n\twith 50MB for Only 10bob!\n");
		printf("1:Buy Once\n");
		printf("Auto Renew\n");
		printf("0:Home.\n");
		
		//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 10\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry. Tay Again");
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 50MB:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 50mbs	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Angaza weekly
	else if (choice == 2)
	{
		printf("Watch Your favourite Gospel Music Videos \n\twith 300MB for Only 50bob!\n");
		printf("1:Buy Once\n");
		printf("Auto Renew\n");
		printf("0:Home.\n");
		
		//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 50\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry. Tay Again");
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 300MB:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 300mbs	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
		//Angaza Monthly
	if (choice == 1)
	{
		printf("Watch Your favourite Gospel Music Videos \n\twith 1.5GB for Only 200bob!\n");
		printf("1:Buy Once\n");
		printf("Auto Renew\n");
		printf("0:Home.\n");
		
		//Once or Renewal
    int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	//Once
	printf("1. Airtime\n");
	printf("2. Mpesa\n");
	//Airtime or mpesa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 200\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	else
	{
		printf("Invalid Entry. Tay Again");
	}
	}	
	//Auto renewal
	else if (choice==2)
	{
	printf("Subscribe to 1.5MB:\n");
		printf("1. Accept.\n");
		printf("2. Decline.\n");	
	
	//Accept or Decline to subscribe to 1.5mbs	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
		else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//k24 Live
	else if (choice == 5)
	{
		printf("1:Data Bundle(NO Expiry DATE)\n");
		printf("\t2:Sh15=175MB, 24hr\n");
		printf("\t3:Sh20=1GB, 1hr\n");
		printf("\t4:Sh50=1.5GB, 3hr\n");
		printf("\t5:Sh50=1GB, till Midnight\n");
		printf("\t6:Sh50=500MB, 3day\n");
		printf("\t7:Sh99=1GB, 24hr\n");
		printf("\t8:Sh500=5GB, 30day\n");
		printf("\t9:Sh1000=15GB, 30day\n");
		printf("\t0:Home\n");
	
	int choice;
	scanf("%d",&choice);	
	//No Expiry date
	if (choice == 1)
	{
		printf("1:Buy For My Number\n");
		printf("2:Buy For Other Number\n");
		printf("\t3:Okoa Data\n");
		printf("4:Stop AutoRenew\n");
		printf("5:Stop Autorefill\n");
		printf("5:Home\n");
	
	int choice;
	scanf("%d",&choice);
	//Buy for my No
	if (choice == 1)
	{
		printf("1:Enter amount you wish to Spend\n");
		printf("2:Sh20 (70MB+Whatapp)\n");
		printf("3:Sh50 (175MB+Whatapp)\n");
		printf("4:Sh100 (500MB+Whatapp)\n");
		printf("5:Sh250 (1250MB+Whatapp)\n");
		printf("6:Sh500 (2500MB+Whatapp)\n");
		printf("7:Sh1000 (5000MB+Whatsapp)\n");
		printf("0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Enter Amount
	if (choice == 1)
	{
		printf("Enter Amount you wish to Spend:\n");
		int num;
		scanf("%d",&num);
		printf("Successufully purshased Bundles for %d",num);
		main();
	}
	//Sh20 (70Mbs)
	else if (choice == 2)
	{
		printf("Confirm Purchase of 70MBs (No Expiry Date) @Ksh 20\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh20\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh50 (175Mbs)
	else if (choice == 3)
	{
		printf("Confirm Purchase of 175MBs (No Expiry Date) @Ksh 50\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh50\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh100 (500Mbs)
	else if (choice == 4)
	{
		printf("Confirm Purchase of 500MBs (No Expiry Date) @Ksh 100\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh100\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}	
	//Sh250 (1250Mbs)
	else if (choice == 5)
	{
		printf("Confirm Purchase of 1250MBs (No Expiry Date) @Ksh 250\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh250\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh500 (2500Mbs)
	else if (choice == 6)
	{
		printf("Confirm Purchase of 2500MBs (No Expiry Date) @Ksh 500\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh500\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Sh1000 (5000Mbs)
	else if (choice == 7)
	{
		printf("Confirm Purchase of 5000MBs (No Expiry Date) @Ksh 1000\n)");
		printf("\tPay With:\n");
		printf("\t1:Airtime.\n");
		printf("\t2:Mpesa");
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: sh1000\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry\n.");
		main();
	}
    }
	else
	{
		printf("Invalid Entry, Try Again.\n");
		main();
	}	
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Buy for Other
	else if (choice == 2)
	{
		printf("1:Enter Other Number:\n");
		printf("\t0:Home.");
		int num;
		scanf("%d",&num);
	
	//Enter Other Number
	if (num==1)
	{
		printf("BSC:1101 Assignmeent");
	}
	else if(num==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, try Again");
		main();
	}
	}
	//Okoa DATA
	else if (choice==3)
	{
		printf("Bundles Valid for 24 hrs\n");
		printf("1:Okoa 675MB for Sh99\n");
		printf("2:Okoa 270MB for Sh50\n");
		printf("3:Okoa 90MB for Sh20\n");
		printf("4:Okoa 30MB for Sh10\n");
		printf("5:Okoa 10MB for Sh5\n");
		printf("\t0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Sh99 (675MBs)
	if (choice == 1)
	{
		printf("Okoa 675MB for Sh99 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh50 (270MBs)
	else if (choice == 2)
	{
		printf("Okoa 270MB for Sh50 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}	
	//Sh20 (90MBs)
	else if (choice == 3)
	{
		printf("Okoa 90MB for Sh20 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh10 (30MBs)
	else if (choice == 4)
	{
		printf("Okoa 30MB for Sh10 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh5 (10MBs)
	else if (choice == 3)
	{
		printf("Okoa 10MB for Sh5 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Stop Renewal
	else if (choice == 4)
	{
		printf("You've Successfully unsubscribed from Autorenew");
	}
	//Stop Refill
	else if (choice == 5)
	{
		printf("You've Successfully unsubscribed from Auto refill");
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}	
	//sh15 (175MB)
	else if (choice == 2)
	{
		printf("Buy Sh15=175MB, 24hr Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 15\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh15=175, 24hr, Get Okoa Jahazi of \nSh20 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 175mbs	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh20 (1GB 1hr)
	else if (choice == 3)
	{
		printf("Buy Sh20=1GB, 1hr Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 20\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh20=1GB, 1hr, Get Okoa Jahazi of \nSh20 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 1GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh50 (1.5GB 3hr)
	else if (choice == 4)
	{
		printf("Buy Sh50=1.5GB, 3hr Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 50\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh50=1.5GB, 3hr, Get Okoa Jahazi of \nSh50 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 1.5GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh50 (1GB till midnight)
	else if (choice == 5)
	{
		printf("Buy Sh50=1GB, till midnight Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 20\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh50=1GB, till midnight, Get Okoa Jahazi of \nSh50 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 1GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh50 (500MB 3day)
	else if (choice == 6)
	{
		printf("Buy Sh50=500GB, 3day Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 50\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh50=500MB, 3day, Get Okoa Jahazi of \nSh20 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 500MB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh99 (1GB 24hr)
	else if (choice == 7)
	{
		printf("Buy Sh99=1GB, 24hr Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 99\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh99=1GB, 24hr, Get Okoa Jahazi of \nSh99 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 1GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh1000 (15GB 30day)
	else if (choice == 9)
	{
		printf("Buy Sh1000=15GB, 30day Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 1000\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh1000=15GB, 3day, Get Okoa Jahazi of \nSh1000 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 15GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//sh500 (5GB 3days)
	else if (choice == 8)
	{
		printf("Buy Sh500=5GB, 3days Using:\n");
		printf("\t1:Airtime\n");
		printf("\t2:Mpesa\n");
		printf("\t3:Okoa Jahazi\n");
		printf("\t0:Home\n");
		
	//Airtime, mpesa or Okoa
	int choice;
	scanf("%d",&choice);
	//Airtime
	if (choice==1)
	{
	printf("BCS:1101 Assgnment.");}	
	//Mpesa
	else if (choice==2)
	{
		printf("Total amount to be deducted from Mpesa will be:\n");
		printf("Data Bundle: 500\n");
		printf("1. Accept.\n");
		printf("2. Cancel.\n");
		
	//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();}
    }
	//Okoa
	else if(choice ==3)
	{
		printf("Your Airtime of Sh is insufficient to purchase \nSh500=5GB, 3day, Get Okoa Jahazi of \nSh1000 to complete your purchase\n");
		printf("1:Accept\n");
		printf("2:Decline\n");
		printf("0:Home");
		
	//Accept or Decline to subscribe to 5GB	
	int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	//Delcine
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	//goto home page
	else if (choice==0)
	{
	main();
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry. Tay Again");
	}
	}
	//viusasa
	else if (choice == 6)
	{
		printf("Enjoy your favourite show on viusasa with \n\t FREE 100MB:\n");
		printf("1:Soaps Data Pass\n");
		printf("2:News Data Pass\n");
		printf("3:Elimu Data Pass\n");
		
	int choice;
	scanf("%d",&choice);
	//soaps pass
	if (choice == 1)
	{
	printf("Watch Soaps and other shows on viusasa \n@10 bob with 100MB + FREE 100Mb\n");
	printf("\t1:Accept.\n");
	printf("\t2:Decline\n");
	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
		main();
	}	
	}	
	//News pass
	else if (choice == 2)
	{
	printf("\t1:Accept.\n");
	printf("\t2:Decline\n");
	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
		main();
	}	
	}	
	//Elimu pass
	else if (choice == 3)
	{
	printf("Get FREE 100MB Education Bundle for\n \tViusasa Elimu:\n");
	printf("\t1:Accept.\n");
	printf("\t2:Decline\n");
	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
		main();
	}	
	}
	}
	//Education Bundle
	else if(choice == 7)
	{
	printf("Education Bundle\n");
	printf("1:Buy Bundle\n");
	printf("2:Check Bundle\n");
	printf("3:Unsubscribe\n");
	
	int choice;
	scanf("%d",&choice);
	//Buy Bundle
	if (choice == 1)
	{
		printf("BSC:1101 Assignment\n");
		}	
	else if (choice == 2)
	{
		printf("You will Receive an SMS Shortly.\n");
	}
	else if (choice == 3)
	{
		printf("You have Successfully unsubscribed from \n\tEducation Bundle\n");
	}
	else 
	{
		printf("Invalid Entry, Try Again\n");
		main();
	}
	}	
	//Unsubscibe
	else if (choice == 8)
	{
		printf("You don't have an active auto renew Product\n");
	}
	//Home
	else if (choice == 98)
	{
		main();
	}
	//Exception
	else 
	{
		printf("Invalid Entry, Try Again\n");
		main();
	}
	
	}
	//Okoa DATA
	else if (choice==7)
	{
		printf("Bundles Valid for 24 hrs\n");
		printf("1:Okoa 675MB for Sh99\n");
		printf("2:Okoa 270MB for Sh50\n");
		printf("3:Okoa 90MB for Sh20\n");
		printf("4:Okoa 30MB for Sh10\n");
		printf("5:Okoa 10MB for Sh5\n");
		printf("\t0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Sh99 (675MBs)
	if (choice == 1)
	{
		printf("Okoa 675MB for Sh99 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh50 (270MBs)
	else if (choice == 2)
	{
		printf("Okoa 270MB for Sh50 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}	
	//Sh20 (90MBs)
	else if (choice == 3)
	{
		printf("Okoa 90MB for Sh20 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh10 (30MBs)
	else if (choice == 4)
	{
		printf("Okoa 30MB for Sh10 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Sh5 (10MBs)
	else if (choice == 3)
	{
		printf("Okoa 10MB for Sh5 for 24hrs\n");
		printf("\t1:Accept\n");
		printf("\t2:Decline\n");
		printf("\t0:Home\n");
		
		//Accept or Cancel Mpesa deductions	
	int choice;
	scanf("%d",&choice);
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("\t\nInvalid Entry.");
		main();
	}
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Lipa mdogo Mdogo
	else if (choice==8)
	{
		printf("Want to join Lipa mdogo Mdogo?Great!\n  review the terms of service at \n\twwww.safaricom.co.ke\n");
		printf("\t1:Accept\n");
		printf("2:Reject\n");
		printf("3:pay for another\n");
		
		int choice;
	scanf("%d",&choice);
	//Accept
	if (choice==1)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}	
	//Reject
	else if (choice==2)
	{
	printf("\t\nSafaricom The Better Option.");
	}
	else if(choice == 3)
	{
	printf("\t\nBCS:1101 Assgnment.");
	}
	else
	{
		printf("Invalid Entry, Try Again");
	}
	}
	//Balance and Tips
	else if (choice == 9)
	{
		printf("\t1:Balance\n");
		printf("\t2:My Data Manager\n");
		printf("\t3:Data Statement\n");
		printf("\t4:High Usage alerts\n");
		printf("\t5:Stop Renew\n");
		printf("\t6:Data Sharing\n");
		printf("\t7:Usage Statements Alert\n");
		printf("\t8:Out of Bundle Alerts\n");
		printf("\t0:Home\n");
		
	int choice;
	scanf("%d",&choice);
	//Balance
	if (choice == 1)
	{
		printf("You will receive an SMS shortly\n");
	}
	//My Data Manager
	else if(choice == 2)
	{
		printf("My Data Manager\n");
		printf("\t1:Activate\n");
		printf("\t2:Deactivate\n");
		printf("\t3:Check status\n");
		printf("\t4:FAQs\n");
		printf("\t0:Home\n");
	int choice;
	scanf("%d",&choice);
	//activate
	if (choice == 1)
	{
		printf("Congratulation, Your Data manager Is Activated\n");
	}
	//Deactivate
	else if (choice == 2)
	{
		printf("Dear Customer, Your Data manager Is Deactivated\n");
	}
	//Check Status
	else if (choice == 3)
	{
		printf("Your will Receive An SMS Shortly\n");
	}
	//Faqs
	else if (choice == 4)
	{
		printf("Your will Receive A link Shortly");
	}
	//Home
	else if (choice == 0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry Try Again.\n");
		main();
	}
	}
	//Data Statement
	else if (choice == 3)
	{
		printf("You will receive an SMS shortly\n");
	}
	//High Usage Alerts
	else if (choice == 4)
	{
		printf("Congratulation Your High Usage Alerts is now Active\n");
	}
	//Stop Renew
	else if (choice == 5)
	{
		printf("Congratulation You have stop renewal of subsription\n");
	}
	//Data Sharing
	else if (choice == 6)
	{
		printf("You will receive an SMS shortly\n");
	}
	//Usage Statements Alert
	else if (choice == 7)
	{
		printf("Congratulation Your Usage Statement Alerts is now Active\n");
	}
	//Out of Bundle Alerts
	else if (choice == 8)
	{
		printf("Congratulation Out of Bundle Alerts is now Active\n");
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Buy Newspaper
	else if (choice == 10)
	{
		printf("1:Daily Nation @20/-\n");
		printf("2:The Standard @20/-\n");
		printf("3:The Star @10/-\n");
		printf("4:People Daily @10/-\n");
		printf("5:Business Daily @20/-\n");
		printf("6:The Nairobian @20/-\n");
		printf("7:Taifa leo @10/-\n");
		printf("8:Football News @20/-\n");
		printf("9:Seeds of Gold @10/-\n");
		printf("10:Parents Magazine @0/-\n");
		printf("11:My Gov @0/-\n");
		printf("12:Swara Magazine @0/-\n");
		printf("0:Home\n");
	
	int choice;
	scanf("%d",&choice);
	//Daily nation
	if (choice == 1)
	{
		printf("You will receive an SMS shortly\n");
	}
	//The Standard
	else if (choice == 2)
	{
		printf("You will receive an SMS shortly\n");
	}
	//The star
	else if (choice == 3)
	{
		printf("You will receive an SMS shortly\n");
	}
	//people Daily
	else if (choice == 4)
	{
		printf("You will receive an SMS shortly\n");
	}
	//Business Daily
	else if (choice == 5)
	{
		printf("You will receive an SMS shortly\n");
	}
	//The Nairobian
	else if (choice == 6)
	{
		printf("You will receive an SMS shortly\n");
	}
	//Taifa leo
	else if (choice == 7)
	{
		printf("You will receive an SMS shortly\n");
	}
	//Football News
	else if (choice == 8)
	{
		printf("You will receive an SMS shortly\n");
	}
	//Seeds of Gold
	else if (choice == 9)
	{
		printf("You will receive an SMS shortly\n");
	}
	//Parents Magazine
	else if (choice == 10)
	{
		printf("You will receive an SMS shortly\n");
	}
	//My Gov
	else if (choice == 11)
	{
		printf("You will receive an SMS shortly\n");
	}
	//Swara Magazine
	else if (choice == 12)
	{
		printf("You will receive an SMS shortly\n");
	}
	//Home
	else if(choice==0)
	{
		main();
	}
	else
	{
		printf("Invalid Entry, Try again\n");
		main();
	}
	}
	//Sambaza Internet
	else if (choice == 11)
	{
		printf("Enter Other Phone Number:\n");
		int num;
		scanf("%d",&num);
		printf("Successufully Sent Bundles for %d",num);
		main();	
	}
	//Is My sim 4G
	else if(choice ==12)
	{
		printf("Congratulations Dear Customer, Your Sim is 4G Enable!\n");
	}
	//Home
	else if (choice == 0)
	{
		main();
	}	
	//Exception
	else 
	{
		printf("Invalid Entry, Try Again\n");
		main();
	}
	
	return 0;
	}

    
    