// rea decompile_all
// name: FUN_10020c1a8
// address: 0x10020c1a8
// body: available
// range: 0x10020c1a8-0x10020c593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10020c590 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

uint FUN_10020c1a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  char *pcVar6;
  long extraout_x8;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_90 [16];
  ulong auStack_80 [2];
  undefined1 auStack_70 [16];
  ulong local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_70 + lVar1;
  __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC(puVar9,param_1,param_2,1);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar4 = IVar3;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  local_60 = 0;
  IVar4 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    (IVar3,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                     IVar4,1,0,&local_60);
  if ((int)IVar4 == 0) {
    uVar5 = local_60;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined1 **)((long)auStack_80 + lVar1) = puVar9;
    *(ulong *)((long)auStack_80 + lVar1 + 8) = uVar5;
    FUN_1003fb4ec(FUN_10020cfe4,auStack_90 + lVar1,0xd0000000000000a6,0x80000001008a2d40,
                  0xd00000000000001e,0x80000001008a3380,0x157,0);
    _swift_errorRelease(uVar5);
    iVar7 = 1;
    uVar8 = 7;
  }
  else {
    local_60 = local_60 & 0xffffffffffffff00;
    pcVar6 = "defaultManager";
    IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    IVar4 = IVar3;
    __s10Foundation3URLV4pathSSvg();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar6);
    IVar4 = NSFileManager::fileExistsAtPath_isDirectory_
                      (IVar3,"fileExistsAtPath:isDirectory:",IVar4,&local_60);
    if (((int)IVar4 == 0) || ((char)local_60 != '\x01')) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined1 **)((long)auStack_80 + lVar1) = puVar9;
      FUN_1003fb4ec(FUN_10020cfec,auStack_90 + lVar1,0xd0000000000000a6,0x80000001008a2d40,
                    0xd00000000000001e,0x80000001008a3380,0x15d,0);
      iVar7 = 1;
      uVar8 = 4;
    }
    else {
      pcVar6 = "defaultManager";
      IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
      IVar4 = IVar3;
      __s10Foundation3URLV4pathSSvg();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(pcVar6);
      IVar4 = NSFileManager::isWritableFileAtPath_(IVar3,"isWritableFileAtPath:",IVar4);
      if ((int)IVar4 == 0) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined1 **)((long)auStack_80 + lVar1) = puVar9;
        FUN_1003fb4ec(FUN_10020cff4,auStack_90 + lVar1,0xd0000000000000a6,0x80000001008a2d40,
                      0xd00000000000001e,0x80000001008a3380,0x161,0);
        iVar7 = 1;
        uVar8 = 5;
      }
      else {
        uVar8 = 0;
        iVar7 = 0;
      }
    }
  }
  (**(code **)(lVar10 + 8))(puVar9,lVar2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return uVar8 | iVar7 << 8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

