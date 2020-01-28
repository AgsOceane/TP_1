#include <stdio.h>
#include <stdlib.h>

struct Characteristic{
	int lp;
	int damage;
	int mana;
	int range;
};

typedef struct Characteristic characteristic ;

int main(){

    int varDamage = 25;
    int varMonsterDamage = 30;
    int actionPlayer;

    int maxHealth = 200;
    int curMonsterLp = 200;
    int curHealth = maxHealth;

    int manaMonster = 50;
    int manaPlayer = 50;

    int useMana = 10;
    int poison = 5;
    int antidote;

    int monsterState;
    int playerState;
	//Structure des personnages

  characteristic shaman;
		shaman.lp=150;
		shaman.mana=100;
		shaman.range=5;


	characteristic warrior;
		warrior.lp=200;
		warrior.damage=35;
		warrior.range=5;

	characteristic archer;
		archer.lp=150;
		archer.damage=20;
		archer.mana=50;
		archer.range=10;

	printf("---SHAMAN---\n Life Point : %d\n Mana : %d\n Range : %d\n\n The Chaman have the capacity to heal himslef or his friend by using an antidote.\n He can also poisoned a monster by using a poisoned\n\n", chaman);

	printf("---WARRIOR---\n Life Point : %d\n Attack : %d\n Range : %d\n\n The warrior have the capacity to attack only one monster per turn but his strenght is stronger than the other\n He can also defend himself or his friend with his shield\n\n", warrior);

	printf("---ARCHER---\n Life Point : %d\n Attack : %d\n Mana : %d\n Range : %d\n\n The archer have the capacity to use his bow to attack either a single monster or to attack several monster", archer);





    printf ("\n""You start the game with 200 life points""\n\n""Here is a monster with 200 life point, Defeat him !""\n\n""Enter 1 to attack the monster""\n\n""2 to hide yourself behind a bloc of rock""\n\n""3 to use a special poison attack\n\n""or 4 to heal yourself \n\n" );




     while (curMonsterLp > 0 && curHealth > 0){

          //On essaie de tirer les actions du monstre au hasard en faisant 1 ou 2
                int monsterBehaviour = rand()%3 + 1;
                if (manaMonster < 10 && monsterBehaviour == 3){
                monsterBehaviour = rand()%2 + 1;
                }
         //Une fois par tour le monstre perdra 5pv que si le joueur l'a empoisonné une fois


                printf("ManaPlayer = %d \n\n",manaPlayer);
                printf("ManaMonster = %d \n\n",manaMonster);

                if (monsterState == 40 && manaPlayer >= 10){
                    manaPlayer = manaPlayer - useMana;
                    curMonsterLp = curMonsterLp - poison;
                    printf("The monster is poisoned, he lost 5Lp \n, he is now %d\n",curMonsterLp);
                }

                if (playerState == 50 && manaMonster >= 10){
                    manaMonster = manaMonster - useMana;
                    curHealth = curHealth - poison;
                    printf("You are poisoned, you lost 5Lp \n, you're now %d",curHealth);
                }

                printf("__________________________________""\n");


                 scanf ("%d", &actionPlayer);
                 printf ("\n");

                switch (actionPlayer){

                default:
                printf("You didn't tape a correct number, nothing happened");
                break;

                case 1:
                curMonsterLp = curMonsterLp - varDamage;
                printf("You inflict 25 damage to the monster, keep going!""\n""There's %d left""\n""\n", curMonsterLp);
                break;

                case 2:
                printf("You are behind a wall\n",curHealth);
                break;

                case 3:
                printf("You poisoned the monster he will loose 5lp per turn \n");
                monsterState = 40;
                break;

                case 4:
                if (playerState == 50 && manaPlayer >= 10){
                    playerState = 0;
                    printf("You're healed !\n\n");
                }
                break;

                }


                switch (monsterBehaviour){
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



                    }

         manaPlayer = manaPlayer + 1;

             }


         if (curMonsterLp <= 0){

           printf ("The monster is now dead, congratulation !");
        }
        else if (curHealth <= 0)
        {
            printf ("Oh crap, you died !");

        return 0;

        }
}
