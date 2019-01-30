#include "mbed.h"
#include "Driver.h"


LMDriver matrix( D11, D12, D13, D9 );

int main()
{
    matrix.Setup();
    // Scrollgeschwindigkeit, Zeit in Sekunden pro Buchstabe
    matrix.SetWaitTime( 0.2f );

//Endlosschlaufe
    while   ( 1 )
    {
        printf( "Ein Text welche auf dem Display erscheint\r\n" );
        // String welcher scrollend dargestellt wird.
        matrix.DisplayString(" High noon, oh I'd sell my soul for water Nine years worth of breakin' my back There's no sun in the shadow of the wizard See how he glides, why he's lighter than air Oh I see his face! Where is your star? Is it far, is it far, is it far? When do we leave? I believe, yes, I believe In the heat and the rain With whips and chains To see him fly So many die We build a tower of stone With our flesh and bone Just to see him fly But don't know why Now where do we go? Hot wind, moving fast across the desert We feel that our time has arrived The world spins, while we put his dream together A tower of stone to take him straight to the sky Oh I see his face! Where is your star? Is it far, is it far, is it far? When do we leave? Hey, I believe, I believe In the heat and the rain With whips and chains Just to see him fly Too many die We build a tower of stone With our flesh and bone To see him fly But we don't know why Ooh, now where do we go All eyes see the figure of the wizard As he climbs to the top of the world No sound, as he falls instead of rising Time standing still, then there's blood on the sand Oh I see his face! Where was your star? Was it far, was it far When did we leave? We believed, we believed, we believed In heat and rain With the whips and chains To see him fly So many died We built a tower of stone With our flesh and bone To see him fly But why In all the rain With all the chains Did so many die Just to see him fly Look at my flesh and bone Now, look, look, look, look, Look at his tower of stone I see a rainbow rising Look there, on the horizon And I'm coming home, I'm coming home, I'm coming home Time is standing still He gave back my will Ooh ooh ooh ooh Going home I'm going home My eyes are bleeding And my heart is leaving here But it's not home But it's not home Ooh Take me back He gave me back my will Ooh ooh ooh ooh Going home I'm going home My eyes are bleeding And my heart is leaving here But it's not home But it's not home Ooh Take me back, take me back Back to my home ooh, ooh, ooh ");
        
        //Pause nach obigen String
        wait( 1.0f );
        

    }
}


