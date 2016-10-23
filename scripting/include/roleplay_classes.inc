/** Roleplay Include File for Natalya's Roleplay Plugins */
/** Class Menu */
/** Updated 01/04/2015 */

public SharedPlugin:__pl_class_menu = 
{
	name = "class_menu",
	file = "class_menu.smx",
#if defined REQUIRE_PLUGIN
	required = 1,
#else
	required = 0,
#endif
};

/** Double-include prevention */
#if defined _roleplay_classes_included_
  #endinput
#endif
#define _roleplay_classes_included_

/**
 * Is client handcuffed.
 *
 * @param client     Client index.
 * @return           True if handcuffed, false otherwise.
 */
native bool:IsClientHandcuffed(client);


/**
 * Bank Account amount.
 *
 * @param client     Client index.
 * @return           Amout of money in their bank account.
 */
native GetClientBank(client);

/**
 * Set Bank Account.
 *
 * @param client     Client index.
 * @param amount	 Amout of money to put in their bank account.
 * @return           Nothing.
 */
native SetClientBank(client, amount);

/**
 * Set Money.
 *
 * @param client     Client index.
 * @param amount	 Amout of money to put in their bank account.
 * @return           Nothing.
 */
native SetClientMoney(client, amount);

/**
 * Set Car Owner.
 *
 * @param client     Client index.
 * @param car        Car entity index.
 * @param ownership  Car ownership.  (1 or 0)
 * @return			 Nothing.
 */
native SetCarOwnership(client, car, ownership);

/**
 * Set Door or Car Locked State.
 *
 * @param entity	Entity index.
 * @param locked	Locked State  (1 or 0)
 * @return			Nothing.
 */
native SetLockedState(entity, locked);

/**
 * Get Door or Car Locked State.
 *
 * @param entity	Entity index.
 * @return			Whether it's locked or not.
 */
native GetLockedState(entity);

/**
 * Class Index
 *
 * @param client     Client index.
 * @return           What class they are in.
 */
native GetClientClass(client);

/**
 * Team Index
 *
 * @param client     Client index.
 * @return           What team they are in.
 */
native GetClientRPTeam(client);