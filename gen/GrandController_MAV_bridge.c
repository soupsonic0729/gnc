/*----------------------------------------------------------------------------
 * Description:   Methods for bridging to an external entity.
 *
 * External Entity:  MAV (MAV)
 * 
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "gnc_sys_types.h"
#include "GrandController_MAV_bridge.h"
#include "GrandController_classes.h"
#include "gnc.h"

/*
 * Bridge:  land
 */
void
GrandController_MAV_land()
{
	gnc_land();
}


/*
 * Bridge:  set_destination
 */
void
GrandController_MAV_set_destination( const i_t p_x, const i_t p_y, const i_t p_z )
{
	gnc_set_destination(p_x, p_y, p_z);

}


/*
 * Bridge:  set_heading
 */
void
GrandController_MAV_set_heading( const i_t p_heading )
{
	gnc_set_heading(p_heading);
}


/*
 * Bridge:  takeoff
 */
void
GrandController_MAV_takeoff( const i_t p_alt )
{
	gnc_takeoff(p_alt);
}

