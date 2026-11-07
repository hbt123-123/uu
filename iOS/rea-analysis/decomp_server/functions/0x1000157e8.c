// rea decompile_all
// name: FUN_1000157e8
// address: 0x1000157e8
// body: available
// range: 0x1000157e8-0x100015ce7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000157e8(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_c0 [16];
  undefined4 local_b0;
  undefined4 uStack_ac;
  ID local_a8;
  
  uVar6 = (undefined4)param_1;
  if ((param_2 >> 0x20 & 1) != 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_10003fcec,&local_b0,0xd0000000000000a9,0x8000000100877660,
                  &DAT_d000000000000030,0x8000000100879f80,0x3c4,0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(thunk_FUN_10003f684,&local_b0,0xd0000000000000a9,0x8000000100877660,
                  0xd000000000000012,0x8000000100878030,0x3bb,0);
    FUN_10001adc4(param_1,*(undefined8 *)(unaff_x20 + 0x10),1);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(thunk_FUN_10003f690,&local_b0,0xd0000000000000a9,0x8000000100877660,
                  0xd000000000000012,0x8000000100878030,0x3bd,0);
    FUN_100022b6c(param_1);
    return;
  }
  if ((param_4 >> 8 & 1) == 0) {
    if ((param_4 & 1) == 0) {
      if (param_3 != 4) goto LAB_1000159ac;
    }
    else if (param_3 < 4) goto LAB_1000159ac;
    FUN_100019450(0xd000000000000011,0x8000000100879fc0,1);
  }
LAB_1000159ac:
  uVar7 = (undefined4)param_2;
  local_b0 = uVar6;
  uStack_ac = uVar7;
  if (((*(char *)(unaff_x20 + 0x99) == '\x01') &&
      (*(long *)(*(long *)(unaff_x20 + 0x90) + 0x10) != 0)) &&
     (uVar1 = param_2, FUN_1000231b4(param_2,PTR___swiftEmptySetSingleton_100995eb0),
     (uVar1 & 1) == 0)) {
    puVar3 = &DAT_100a759b8;
    FUN_100004bb4(&DAT_100a759b8,&DAT_10080a9a0);
    _swift_initStackObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined4 *)(puVar3 + 0x20) = uVar7;
    puVar4 = puVar3;
    FUN_100128278();
    _swift_setDeallocating(puVar3);
    FUN_100022f10(param_2,puVar4);
    _swift_bridgeObjectRelease(puVar4);
    uVar5 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar5);
    local_a8 = CONCAT71(local_a8._1_7_,(char)param_2) & 0xffffffffffffff01;
    FUN_1003fb4bc(FUN_10003fd2c,auStack_c0,0xd0000000000000a9,0x8000000100877660,
                  &DAT_d000000000000030,0x8000000100879f80,0x3cd,0);
    FUN_1000162bc(param_1,0);
  }
  else {
    uVar1 = param_2;
    FUN_10001a914();
    _objc_msgSend(uVar1,"setScreenId:",param_2);
    IVar2 = _objc_msgSend(uVar1,"videoTrackIndex");
    FUN_10001e990(param_2,IVar2 & 0xffffffff);
    if ((param_2 >> 0x20 & 1) == 0) {
      _objc_msgSend(uVar1,"setVideoTrackIndex:",param_2);
      FUN_100401b14();
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_a8 = CONCAT44(local_a8._4_4_,(int)param_2);
      FUN_1003fb48c(FUN_10003fd00,auStack_c0,0xd0000000000000a9,0x8000000100877660,
                    &DAT_d000000000000030,0x8000000100879f80,0x3d8,0);
      FUN_10001adc4(param_1,uVar1,1);
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb48c(FUN_10003fd20,&local_b0,0xd0000000000000a9,0x8000000100877660,
                    &DAT_d000000000000030,0x8000000100879f80,0x3da,0);
      FUN_100022b6c(param_1);
      FUN_1000162bc(param_1,0);
    }
    else {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_a8 = uVar1;
      FUN_1003fb4ec(FUN_10003fcf4,auStack_c0,0xd0000000000000a9,0x8000000100877660,
                    &DAT_d000000000000030,0x8000000100879f80,0x3d4,0);
    }
  }
  return;
}

