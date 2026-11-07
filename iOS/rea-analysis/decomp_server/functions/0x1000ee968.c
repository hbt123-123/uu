// rea decompile_all
// name: FUN_1000ee968
// address: 0x1000ee968
// body: available
// range: 0x1000ee968-0x1000eec83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000eec80 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

uint FUN_1000ee968(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long extraout_x8;
  uint uVar8;
  long unaff_x20;
  ID self;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_c0 [16];
  ulong auStack_b0 [4];
  undefined1 auStack_90 [24];
  ulong local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_90 + lVar1;
  uVar3 = param_1;
  FUN_1000d761c(param_1,param_2);
  if ((uVar3 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong *)((long)auStack_b0 + lVar1 + 0x10) = param_1;
    *(undefined8 *)((long)auStack_b0 + lVar1 + 0x18) = param_2;
    FUN_1003fb4ec(FUN_1000ef5c4,(long)auStack_b0 + lVar1,0xd0000000000000a9,0x80000001008887a0,
                  0xd00000000000001b,0x8000000100888880,0x76,0);
    iVar7 = 1;
    uVar8 = 0;
  }
  else {
    local_78 = param_1;
    uStack_70 = param_2;
    _swift_bridgeObjectRetain(param_2);
    __sSS6appendyySSF(0x6e6f736a2e,0xe500000000000000);
    uVar5 = uStack_70;
    uVar6 = uStack_70;
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF(puVar9,local_78,uStack_70,0)
    ;
    _swift_bridgeObjectRelease(uVar5);
    self = *(ID *)(unaff_x20 + _TtC14UURemoteServer23FileTransferResumeStore::fileManager);
    __s10Foundation3URLV4pathSSvg();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar6);
    IVar4 = _objc_msgSend(self,"fileExistsAtPath:",uVar5);
    uVar5 = 0;
    if ((int)IVar4 == 0) {
      (**(code **)(lVar10 + 8))(puVar9,lVar2);
    }
    else {
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
      local_78 = 0;
      IVar4 = _objc_msgSend(self,"removeItemAtURL:error:",uVar5,&local_78);
      if ((int)IVar4 == 0) {
        uVar3 = local_78;
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _swift_willThrow(0);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ulong *)((long)auStack_b0 + lVar1) = param_1;
        *(undefined8 *)((long)auStack_b0 + lVar1 + 8) = param_2;
        *(ulong *)((long)auStack_b0 + lVar1 + 0x10) = uVar3;
        FUN_1003fb4ec(FUN_1000ef5cc,auStack_c0 + lVar1,0xd0000000000000a9,0x80000001008887a0,
                      0xd00000000000001b,0x8000000100888880,0x81,0);
        _swift_errorRelease(uVar3);
        (**(code **)(lVar10 + 8))(puVar9,lVar2);
        iVar7 = 1;
        uVar8 = 3;
        goto LAB_1000eec44;
      }
      (**(code **)(lVar10 + 8))(puVar9,lVar2);
    }
    uVar8 = 0;
    iVar7 = 0;
  }
LAB_1000eec44:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return uVar8 | iVar7 << 8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

