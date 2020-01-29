#include <stdio.h>
#include <stdlib.h>

@@ -8,7 +7,6 @@ struct Characteristic{
	int mana;
	int range;
	int state;
	int level;
};

typedef struct Characteristic characteristic ;
@@ -22,15 +20,13 @@ int main(){
		int actionMonster1;
		int actionMonster2;
		int actionMonster3;
		int xp;

    int useMana = 10;
    int poison = 5;
    int antidote;




	//Structure des personnages


@@ -39,23 +35,20 @@ int main(){
		shaman.mana=100;
		shaman.range=5;
		shaman.state;
		shaman.level = 0;

	characteristic warrior;
		warrior.lp=200;
		warrior.damage=35;
		warrior.mana=40;
		warrior.range=5;
		warrior.state;
		warrior.level = 0;

	characteristic archer;
		archer.lp=175;
		archer.damage=15;
		archer.damage=30;
		archer.mana=50;
		archer.range=10;
		archer.state;
		archer.level =0;


	characteristic team;
@@ -125,116 +118,81 @@ int main(){



              /*  if (monsters.state == 50){
                    monsters.lp = monsters.lp - poison;
                    printf("The monsters are poisoned, they lost 5Lp \n, they are now %d, %d, %d \n",monster1.lp, monster2.lp, monster3.lp);
                if (team.state == 50){
                    team.lp = team.lp - poison;
                    printf("You are poisoned, you lost 5Lp \n, you're now %d",team.lp);
              /*  if (monsterState == 40 && manaPlayer >= 10){
                    manaPlayer = manaPlayer - useMana;
                    curMonsterLp = curMonsterLp - poison;
                    printf("The monster is poisoned, he lost 5Lp \n, he is now %d\n",curMonsterLp);
                if (playerState == 50 && manaMonster >= 10){
                    manaMonster = manaMonster - useMana;
                    curHealth = curHealth - poison;
                    printf("You are poisoned, you lost 5Lp \n, you're now %d",curHealth);
                } */

                printf("__________________________________""\n");


							 printf("WARRIOR IT'S YOUR TURN!""\n""Press 1 if you want the Warrior to attack a Monster.""\n""Press 2 if you want the Warrior to defend himself.\n");
                 scanf ("%d", &actionWarrior);
							 printf("SHAMAN IT'S YOUR TURN!""\n""Press 1 if you want the Shaman to poison a Monster.""\n""Press 2 if you want the Shaman to use the antidote.\n");
								 scanf ("%d", &actionShaman);
							 printf("ARCHER IT'S YOUR TURN!""\n""Press 1 if you want the Archer to lunch one arrow and hurt a Monster.""\n""Press 2 if you want the Archer to lunch sevral arrow and hurt every Monster still alive (cost 10 MANA).\n");
								 scanf ("%d", &actionArcher);
                 printf ("\n");
								 printf("---CHOOSE A MONSTER TO ATTACK""\n""Press 1 to attack the first Monster""\n""Press 2 to attack the second Monster""\n""Press 3 to attack the third Monster""\n");
								 scanf("%d", &targetMonster);
								 printf("\n");


                switch (actionWarrior){

                default:
                printf("You didn't tape a correct number, nothing happened\n");
                printf("You didn't tape a correct number, nothing happened");
                break;

                case 1:

								if(targetMonster == 1){
									monster1.lp = monster.lp - warrior.damage;
								}
								else if(targetMonster == 2){
									monster2.lp = monster.lp - warrior.damage;
								}
								else if(targetMonster == 3){
									monster3.lp = monster.lp - warrior.damage;
								}
							}
                printf("You inflict 35 damage to the monster n°%d, keep going!""\n""\n""\n" targetMonster,);
                printf("You inflict 25 damage to the monster, keep going!""\n""There's %d left""\n""\n");
                break;

                case 2:
                printf("You are behind your shield\n");
                printf("You are behind a wall\n");
                break;

                }

								switch (actionShaman){
								switch (actionArcher){

                default:
                printf("You didn't tape a correct number, nothing happened\n");
                printf("You didn't tape a correct number, nothing happened");
                break;

                case 1:
								if(shaman.mana => 10){
									if(targetMonster == 1){
										monster1.state == 50;
									}
									else if(targetMonster == 2){
										monster2.state == 50;
									}
									else if(targetMonster == 3){
										monster3.state == 50;
									}
								}

                printf("You poisoned the monster n° %d, he will loose 5lp per turn \n", targetMonster);

                printf("You inflict 25 damage to the monster, keep going!""\n""There's %d left""\n""\n");
                break;

								case 2:
								if (team.state == 50 && shaman.mana >= 10){
                    team.state = 0;
                    printf("You're healed !\n\n");
                }
                case 2:
                printf("You are behind a wall\n");
                break;
							}

              }

							switch (actionArcher){
								switch (actionShaman){

							default:
							printf("You didn't tape a correct number, nothing happened\n");
							break;
                default:
                printf("You didn't tape a correct number, nothing happened");
                break;

							case 1:
								if(targetMonster == 1){
									monster1.lp = monster.lp - archer.damage;
								}
								else if(targetMonster == 2){
									monster2.lp = monster.lp - archer.damage;
								}
								else if(targetMonster == 3){
									monster3.lp = monster.lp - archer.damage;
								}
                case 1:
                printf("You poisoned the monster he will loose 5lp per turn \n");

							}
							printf("Your archer inflict 15 damage to the monster n° %d, keep going!""\n""There's %d left""\n""\n",targetMonster);
							break;
                break;

							case 2:
								if(archer.mana > 10){
							monsters.lp = monsters.lp - archer.damage
							}
							printf("You inflict 15 damage to the monsters\n");
							break;
						}
                case 2:

						for(xp = 100){
							team.level == 5;
						}
                if (team.state == 50 && shaman.mana >= 10){
                    team.state = 0;
                    printf("You're healed !\n\n");
                }
                break;

              }


              /*  switch (actionMonster1){
@@ -247,7 +205,6 @@ int main(){
                curHealth = curHealth - varMonsterDamage;
                printf("The monster stab in the heart ! You're just %d lp left, be carefull! ""\n""\n", curHealth);
                break;
                case 2:
                if (actionPlayer == 4){
                curMonsterLp = curMonsterLp + varDamage;
@@ -257,36 +214,28 @@ int main(){
                printf("He can't defend himself the monster have %d lp now \n\n", curMonsterLp);
                }
                break;
                case 3:
                printf("The monster poisoned you, you will loose 5lp per turn \n");
                playerState = 50;
                break;
                default:
                printf("You didn't tape a correct number, nothing happened");
                break;
							} */


         team.mana = team.mana + 1;
        // team.mana = team.mana + 1;


             }


         if (monsters.lp <= 0){

           printf ("The monsters are now dead, congratulation !");
         /*if (curMonsterLp <= 0){
           printf ("The monster is now dead, congratulation !");
        }
        else if (team.lp <= 0)
        else if (curHealth <= 0)
        {
            printf ("Oh crap, you died !");

        return 0;

			}*/
}