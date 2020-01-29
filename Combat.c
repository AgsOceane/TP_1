
#include <stdio.h>
#include <stdlib.h>

struct Characteristic{
	int lp;
	int damage;
	int mana;
	int range;
	int state;
	int level;
};

typedef struct Characteristic characteristic ;

int main(){

		int actionShaman;
		int actionArcher;
		int actionWarrior;

		int actionMonster1;
		int actionMonster2;
		int actionMonster3;
		int xp;

    int useMana = 10;
    int poison = 5;
    int antidote;




	//Structure des personnages


  characteristic shaman;
		shaman.lp=150;
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
		archer.mana=50;
		archer.range=10;
		archer.state;
		archer.level =0;


	characteristic team;
		team.lp = shaman.lp + warrior.lp + archer.lp;
		team.mana = shaman.mana + archer.mana;
		team.damage = warrior.damage + archer.damage;

	printf("---SHAMAN---\n Life Point : %d\n Mana : %d\n Range : %d\n\n The Chaman have the capacity to heal himslef or his friend by using an antidote.\n He can also poisoned a monster by using a poisoned\n\n", shaman);

	printf("---WARRIOR---\n Life Point : %d\n Attack : %d\n Range : %d\n\n The warrior have the capacity to attack only one monster per turn but his strenght is stronger than the other\n He can also defend himself or his friend with his shield\n\n", warrior);



	characteristic monsters;
			monsters.lp=200;
			monsters.damage=30;
			monsters.mana=50;
			monsters.range=5;
			monsters.state;



	characteristic monster1;
			monster1.lp=200;
			monster1.damage=30;
			monster1.mana=50;
			monster1.range=5;

	characteristic monster2;
			monster2.lp=200;
			monster2.damage=30;
			monster2.mana=50;
			monster2.range=5;

	characteristic monster3;
			monster3.lp=200;
			monster3.damage=30;
			monster3.mana=50;
			monster3.range=5;



	    printf ("THREE monsters appears !! Defeat them !""\n\n""---MONSTER---\n Life Point : %d\n Attack : %d\n Mana : %d\n Range : %d\n\n", monsters);

     while (monsters.lp > 0 && team.lp > 0){

          //On essaie de tirer les actions du monstre au hasard en faisant 1 ou 2
                int actionMonster1 = rand()%3 + 1;
                if (monster1.mana < 10 && actionMonster1 == 3){
                actionMonster1 = rand()%2 + 1;
                }

								int actionMonster2 = rand()%3 + 1;
                if (monster2.mana < 10 && actionMonster2 == 3){
                actionMonster2 = rand()%2 + 1;
								}

								int actionMonster3 = rand()%3 + 1;
                if (monster3.mana < 10 && actionMonster3 == 3){
                actionMonster3 = rand()%2 + 1;
                }
         //Une fois par tour le monstre perdra 5pv que si le joueur l'a empoisonné une fois



                printf("Mana Shaman = %d Mana Archer %d \n\n", shaman.mana, archer.mana);



              /*  if (monsters.state == 50){
                    monsters.lp = monsters.lp - poison;
                    printf("The monsters are poisoned, they lost 5Lp \n, they are now %d, %d, %d \n",monster1.lp, monster2.lp, monster3.lp);


                if (team.state == 50){
                    team.lp = team.lp - poison;
                    printf("You are poisoned, you lost 5Lp \n, you're now %d",team.lp);
                } */

                printf("__________________________________""\n");


                 scanf ("%d", &actionWarrior);
								 scanf ("%d", &actionShaman);
								 scanf ("%d", &actionArcher);
                 printf ("\n");

                switch (actionWarrior){

                default:
                printf("You didn't tape a correct number, nothing happened\n");
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
                break;

                case 2:
                printf("You are behind your shield\n");
                break;

                }

								switch (actionShaman){

                default:
                printf("You didn't tape a correct number, nothing happened\n");
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

                break;

								case 2:
								if (team.state == 50 && shaman.mana >= 10){
                    team.state = 0;
                    printf("You're healed !\n\n");
                }
                break;

              }

							switch (actionArcher){

							default:
							printf("You didn't tape a correct number, nothing happened\n");
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

							}
							printf("Your archer inflict 15 damage to the monster n° %d, keep going!""\n""There's %d left""\n""\n",targetMonster);
							break;

							case 2:
								if(archer.mana > 10){
							monsters.lp = monsters.lp - archer.damage
							}
							printf("You inflict 15 damage to the monsters\n");
							break;
						}

						for(xp = 100){
							team.level == 5;
						}



              /*  switch (actionMonster1){
                case 1:
                if(actionPlayer == 5){
                curHealth = curHealth - 7,5;
                printf("unfortunately the monster manage to hurt you""\n""You're now %d lp""\n", curHealth);
                }
                else;
                curHealth = curHealth - varMonsterDamage;
                printf("The monster stab in the heart ! You're just %d lp left, be carefull! ""\n""\n", curHealth);
                break;

                case 2:
                if (actionPlayer == 4){
                curMonsterLp = curMonsterLp + varDamage;
                printf("The monster defended himself too bad""\n""The monster is %d lp again""\n",curMonsterLp);
                }
                else if (actionPlayer == 5){
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


             }


         if (monsters.lp <= 0){

           printf ("The monsters are now dead, congratulation !");
        }
        else if (team.lp <= 0)
        {
            printf ("Oh crap, you died !");

        return 0;

			}*/
}
