// rea decompile_all
// name: FUN_10040d288
// address: 0x10040d288
// body: available
// range: 0x10040d288-0x10040d54f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10040d54c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040d288(int param_1)

{
  long lVar1;
  ID self;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ID IVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  undefined8 auStack_140 [2];
  undefined1 auStack_130 [16];
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [16];
  int aiStack_100 [4];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar4 = 0;
  FUN_1005cac3c();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar11 = (long)&local_f0 + lVar1;
  if (0 < param_1) {
    local_70 = 0;
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    iVar3 = _proc_pidinfo(param_1,3,0,&local_f0,0x88);
    if (iVar3 == 0x88) {
      uVar10 = 0;
      uVar8 = local_78;
      uVar9 = local_70;
      goto LAB_10040d4fc;
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)((long)aiStack_100 + lVar1) = param_1;
    (**(code **)(lVar12 + 0x68))(uVar11,3,lVar4);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    self = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar2 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar5 = uVar11;
      FUN_1005cc2b8();
      if ((uVar5 & 1) == 0) {
        _swift_release(lVar2);
      }
      else {
        IVar6 = 0xd000000000000093;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000093,0x80000001008b6420)
        ;
        pcVar7 = "lastPathComponent";
        IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)((long)auStack_120 + lVar1) = FUN_10040d568;
        *(undefined1 **)((long)auStack_120 + lVar1 + 8) = auStack_110 + lVar1;
        *(undefined8 *)((long)auStack_140 + lVar1) = 0xea0000000000293a;
        *(undefined8 *)((long)auStack_140 + lVar1 + 8) = 0x24;
        FUN_1005cc010(thunk_FUN_1003a85e4,auStack_130 + lVar1,uVar11,0x65746f6d65525555,
                      0xe800000000000000,IVar6,pcVar7,0x6469702874696e69);
        _swift_release(lVar2);
        _swift_bridgeObjectRelease(pcVar7);
      }
    }
    _objc_msgSend(self,"unlock");
    (**(code **)(lVar12 + 8))(uVar11,lVar4);
  }
  param_1 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 1;
LAB_10040d4fc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(param_1,uVar8,uVar9,uVar10);
}

