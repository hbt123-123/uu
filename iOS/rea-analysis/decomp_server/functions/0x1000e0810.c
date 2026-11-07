// rea decompile_all
// name: FUN_1000e0810
// address: 0x1000e0810
// body: available
// range: 0x1000e0810-0x1000e0c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000e0c64 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000e0810(undefined1 *param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long lVar9;
  code *pcVar10;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  ID self;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auStack_c0 [16];
  ulong auStack_b0 [4];
  long local_90;
  undefined1 *local_88;
  undefined8 local_80 [3];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&local_90 + lVar1;
  uVar14 = param_2;
  FUN_1000d761c(param_2,param_3);
  lVar12 = _TtC14UURemoteServer28FileTransferReceiveOperation::taskIDByUniqueID;
  if ((uVar14 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong *)((long)auStack_b0 + lVar1 + 0x10) = param_2;
    *(ulong *)((long)auStack_b0 + lVar1 + 0x18) = param_3;
    FUN_1003fb4ec(FUN_1000e3880,(long)auStack_b0 + lVar1,0xd0000000000000ae,0x8000000100886ab0,
                  0xd000000000000022,0x8000000100887cd0,0x218,0);
    uVar8 = 1;
    uVar11 = 4;
    goto LAB_1000e0c20;
  }
  local_90 = lVar2;
  _swift_beginAccess(param_4 + _TtC14UURemoteServer28FileTransferReceiveOperation::taskIDByUniqueID,
                     local_80,0x20,0);
  lVar12 = *(long *)(param_4 + lVar12);
  local_88 = param_1;
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_1000e09fc:
    _swift_endAccess(local_80);
  }
  else {
    _swift_bridgeObjectRetain(lVar12);
    uVar14 = param_2;
    uVar3 = param_3;
    FUN_1001a2c70();
    if ((uVar3 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar12);
      goto LAB_1000e09fc;
    }
    uVar14 = (ulong)*(uint *)(*(long *)(lVar12 + 0x38) + uVar14 * 4);
    _swift_endAccess(local_80);
    _swift_bridgeObjectRelease(lVar12);
    lVar12 = _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID;
    puVar7 = local_80;
    _swift_beginAccess(param_4 + _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID,
                       puVar7,0x20,0);
    lVar12 = *(long *)(param_4 + lVar12);
    if ((*(long *)(lVar12 + 0x10) == 0) ||
       (uVar3 = uVar14, thunk_FUN_1001a2c34(), ((ulong)puVar7 & 1) == 0)) goto LAB_1000e09fc;
    uVar15 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar3 * 8);
    _swift_endAccess(local_80);
    _swift_retain(uVar15);
    FUN_1000dbca4();
    FUN_1000dfc54(uVar14);
    _swift_release(uVar15);
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined8 *)((long)auStack_b0 + lVar1) = extraout_x8_00;
  *(ulong *)((long)auStack_b0 + lVar1 + 8) = param_2;
  *(ulong *)((long)auStack_b0 + lVar1 + 0x10) = param_3;
  puVar4 = &DAT_100a77cf8;
  FUN_100004bb4(&DAT_100a77cf8,&DAT_10080ca20);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (local_80,FUN_1000e3bbc,auStack_c0 + lVar1,puVar4);
  __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF(lVar13,param_2,param_3,1);
  self = *(ID *)(param_4 + 0x10);
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_3);
  IVar5 = _objc_msgSend(self,"fileExistsAtPath:",param_2);
  uVar15 = 0;
  if ((int)IVar5 == 0) {
    pcVar10 = *(code **)(lVar9 + 8);
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    local_80[0] = 0;
    IVar5 = _objc_msgSend(self,"removeItemAtURL:error:",uVar15,local_80);
    if ((int)IVar5 == 0) {
      uVar15 = local_80[0];
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _swift_willThrow(0);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined8 *)((long)auStack_b0 + lVar1 + 0x10) = uVar15;
      FUN_1003fb4ec(thunk_FUN_1000e3724,(long)auStack_b0 + lVar1,0xd0000000000000ae,
                    0x8000000100886ab0,0xd000000000000022,0x8000000100887cd0,0x229,0);
      uVar6 = uVar15;
      FUN_1000e3240();
      uVar11 = (undefined1)uVar6;
      _swift_errorRelease(uVar15);
      (**(code **)(lVar9 + 8))(lVar13,local_90);
      uVar8 = 1;
      param_1 = local_88;
      goto LAB_1000e0c20;
    }
    pcVar10 = *(code **)(lVar9 + 8);
  }
  param_1 = local_88;
  (*pcVar10)(lVar13,local_90);
  uVar11 = 0;
  uVar8 = 0;
LAB_1000e0c20:
  *param_1 = uVar11;
  param_1[1] = uVar8;
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

