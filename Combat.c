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
  characteristic chaman;
		chaman.lp=150;
		chaman.damage=20;
		chaman.mana=70;
		chaman.range=5;
	
	characteristic warrior;
		warrior.lp=200;
		warrior.damage=35;
		warrior.mana=40;
		warrior.range=5;
		
	characteristic archer;
		archer.lp=175;
		archer.damage=30;
		archer.mana=50;
		archer.range=10;
		
	characteristic monsters;
		monsters.lp=200;
		monsters.damage=30;
		monsters.mana=50;
		monsters.range=5;
		
	
    
	
    printf ("THREE monsters Appears Defeat them !""\n\n""---MONSTER---\n Life Point : %d\n Attack : %d\n Mana : %d\n Range : %d\n\n", monsters);
  
    
    
    
     while (curMonsterLp > 0 && curHealth > 0){ 
         
          //On essaie de tirer les actions du monstre au hasard en faisant 1 ou 2
                int monsterBehaviour = rand()%3 + 1;
                if (manaMonster < 10 && monsterBehaviour == 3){
                monsterBehaviour = rand()%2 + 1;
                }
         //Une fois par tour le monstre perdra 5pv que si le joueur l'a empoisonné une fois
         
                manaPlayer = manaPlayer + 1;
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