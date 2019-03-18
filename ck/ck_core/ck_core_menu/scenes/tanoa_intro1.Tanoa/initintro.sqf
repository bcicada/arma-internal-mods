titletext ["","BLACK FADED", 0];

waitUntil { time > 0; };

playSound "blanche_hermine";

man9 playmove "Acts_A_M02_briefing";
man10 disableai "anim";
man11 switchmove "Acts_listeningToRadio_Loop";
man12 disableai "anim";

man7 setbehaviour "safe";
man8 setbehaviour "safe";
man9 setbehaviour "safe";
man10 setbehaviour "safe";
man11 setbehaviour "safe";
man12 setbehaviour "safe";

man7 setSpeedMode "LIMITED";
man8 setSpeedMode "LIMITED";
man9 setSpeedMode "LIMITED";
man10 setSpeedMode "LIMITED";
man11 setSpeedMode "LIMITED";
man12 setSpeedMode "LIMITED";

man1 switchmove "Acts_listeningToRadio_Loop";
man2 disableai "anim";
man3 disableai "anim";
man4 disableai "anim";
man5 disableai "anim";
man6 disableai "anim";
man7 switchmove "Acts_listeningToRadio_Loop";
man8 switchmove "Acts_listeningToRadio_Loop";

_camera = "camera" camcreate [0,0,0];
_camera CameraEffect ["Internal","Back"];

_camera camPrepareTarget (getPosVisual targ1);
_camera camPreparePos (getPosVisual cam1);
_camera camPrepareFOV 0.300;
_camera camCommitPrepared 0;
showCinemaBorder true;
sleep 3;

titletext ["","BLACK IN", 3];

_camera camPreparePos (getPosVisual cam2);
_camera camPrepareFOV 0.375;
_camera camCommitPrepared 42;

_camera camPrepareTarget (getPosVisual targ2);
_camera camPrepareFOV 0.400;
_camera camCommitPrepared 30;

sleep 28;

titleCut ["","BLACK OUT", 1];
sleep 2;
_camera camPreparePos (getPosVisual cam3);
_camera camPrepareFOV 0.200;
_camera camCommitPrepared 0;

_camera camPrepareTarget (getPosVisual man7);
_camera camPrepareFOV 0.200;
_camera camCommitPrepared 0;

_camera camPreparePos (getPosVisual cam4);
_camera camPrepareFOV 0.200;
_camera camCommitPrepared 50;
sleep 0.1;
titleCut ["","BLACK IN", 0.3];

sleep 35;
man0 playmove "Acts_A_M02_briefing";
man3 playmove "Acts_A_M01_briefing";
titleCut ["","BLACK OUT", 2];

sleep 3;

_camera camPreparePos (getPosVisual cam5);
_camera camPrepareFOV 0.200;
_camera camCommitPrepared 0;

_camera camPrepareTarget (getPosVisual targ3);
_camera camPrepareFOV 0.300;
_camera camCommitPrepared 0;

_camera camPreparePos (getPosVisual targ3);
_camera camPrepareFOV 0.200;
_camera camCommitPrepared 30;

_camera camPrepareTarget (getPosVisual targ4);
_camera camPrepareFOV 0.300;
_camera camCommitPrepared 29;
0.9 fadesound 1;
sleep 0.1;
titleCut ["","BLACK IN", 1];

sleep 27;

titleCut ["","BLACK OUT", 3];

sleep 8;

titletext ["<t size='20'><img image='ck_logo_2048_ca.paa' />", "BLACK FADED", 999, true, true];

exit; 