// rea decompile_all
// name: FUN_10001adc4
// address: 0x10001adc4
// body: available
// range: 0x10001adc4-0x10001b167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10001adc4(ulong param_1,ID param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  ID IVar3;
  ulong uVar4;
  int iVar5;
  long unaff_x20;
  undefined4 uVar6;
  long lVar7;
  undefined1 auStack_c0 [16];
  undefined4 local_b0 [2];
  ID local_a8;
  undefined1 auStack_80 [28];
  undefined1 auStack_64 [4];
  
  lVar7 = *(long *)(unaff_x20 + 0x38);
  iVar5 = *(int *)(lVar7 + _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID);
  bVar1 = *(byte *)((int *)(lVar7 + _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID) + 1
                   );
  IVar3 = _objc_msgSend(param_2,"screenId");
  if (((bVar1 & 1) == 0) && (iVar5 == (int)IVar3)) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb4bc(FUN_10003f714,local_b0,0xd0000000000000a9,0x8000000100877660,0xd000000000000035,
                  0x80000001008784d0,0x362,0);
    return 0xffffffff;
  }
  uVar4 = _objc_msgSend(param_2,"screenId");
  if ((*(byte *)(lVar7 + 0x14) & 1) == 0) {
    if ((*(int *)(lVar7 + 0x10) < 0) || ((int)uVar4 != *(int *)(lVar7 + 0x10))) goto LAB_10001af00;
  }
  else {
    FUN_100039b50();
    if ((uVar4 & 1) != 0) {
LAB_10001af00:
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb4ec(FUN_10003f70c,local_b0,0xd0000000000000a9,0x8000000100877660,0xd000000000000035,
                    0x80000001008784d0,0x366,0);
      return 0xffffffff;
    }
  }
  FUN_10001ab44(param_2);
  uVar4 = _objc_msgSend(param_2,"captureType");
  if (uVar4 == 0) {
    if ((*(byte *)(lVar7 + 0x14) & 1) == 0) {
      iVar5 = *(int *)(lVar7 + 0x10);
      IVar3 = _objc_msgSend(param_2,"screenId");
      iVar2 = (int)IVar3;
    }
    else {
      FUN_100039b50();
      IVar3 = _objc_msgSend(param_2,"screenId");
      iVar2 = (int)IVar3;
      if ((uVar4 & 1) == 0) goto LAB_10001aef8;
      iVar5 = -1;
    }
    uVar4 = (ulong)(iVar5 == iVar2);
  }
  else {
LAB_10001aef8:
    uVar4 = 0;
  }
  _objc_msgSend(param_2,"setIsSecondScreen:",uVar4);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar6 = (undefined4)param_1;
  local_b0[0] = uVar6;
  local_a8 = param_2;
  FUN_1003fb48c(FUN_10003f6ec,auStack_c0,0xd0000000000000a9,0x8000000100877660,0xd000000000000035,
                0x80000001008784d0,0x36c,0);
  FUN_1001adae0(param_1,param_2);
  if ((int)param_1 == 0) {
    FUN_100021190(param_2,param_3 & 1);
    IVar3 = _objc_msgSend(param_2,"screenId");
    _swift_beginAccess(unaff_x20 + 0x88,auStack_80,0x21,0);
    FUN_10006daa4(auStack_64,IVar3);
    _swift_endAccess(auStack_80);
    FUN_100011e08(0x5365727574706163,0xee00646574726174);
    param_1 = param_1 & 0xffffffff;
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_b0[0] = uVar6;
  local_a8 = param_2;
  FUN_1003fb48c(FUN_10003f6f8,auStack_c0,0xd0000000000000a9,0x8000000100877660,0xd000000000000035,
                0x80000001008784d0,0x373,0);
  return param_1;
}

