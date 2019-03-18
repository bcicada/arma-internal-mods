east setFriend [west, 1];
west setFriend [east, 1];
titletext ["","BLACK FADED", 0];
setviewdistance 1500;
0 fademusic 0;

playSound "blanche_hermine";

{_x disableai "anim"} forEach allUnits;

5 fademusic 1;
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
_camera camPrepareFOV 0.200;
_camera camCommitPrepared 45;

_camera camPrepareTarget (getPosVisual targ2);
_camera camPrepareFOV 0.300;
_camera camCommitPrepared 30;

sleep 43;

titleCut ["","BLACK OUT", 1];
sleep 2;
_camera camPreparePos (getPosVisual cam3);
_camera camPrepareFOV 0.700;
_camera camCommitPrepared 0;

_camera camPrepareTarget (getPosVisual targ2);
_camera camPrepareFOV 0.700;
_camera camCommitPrepared 0;

_camera camPreparePos (getPosVisual cam4);
_camera camPrepareFOV 0.700;
_camera camCommitPrepared 50;
sleep 0.1;
titleCut ["","BLACK IN", 0.3];

sleep 35;

titleCut ["","BLACK OUT", 2];

sleep 3;

_camera camPreparePos (getPosVisual cam5);
_camera camPrepareFOV 0.500;
_camera camCommitPrepared 0;

_camera camPrepareTarget (getPosVisual targ3);
_camera camPrepareFOV 0.500;
_camera camCommitPrepared 0;

_camera camPreparePos (getPosVisual cam6);
_camera camPrepareFOV 0.300;
_camera camCommitPrepared 30;

0.9 fadesound 1;
sleep 0.1;
titleCut ["","BLACK IN", 1];

sleep 27;

titleCut ["","BLACK OUT", 3];

sleep 8;
titletext ["<t size='20'><img image='ck_logo_2048_ca.paa' />", "BLACK FADED", 999, true, true];
exit; 