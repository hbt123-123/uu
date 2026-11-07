// rea decompile_all
// name: FUN_1000bdb10
// address: 0x1000bdb10
// body: available
// range: 0x1000bdb10-0x1000bde97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000bde28 to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000bde94 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000bdcbc) */
/* WARNING: Removing unreachable block (ram,0x0001000bdd40) */

ulong FUN_1000bdb10(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ID IVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  code *pcVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  uint local_8c;
  ulong local_80;
  ulong uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar10 = (undefined1 *)0xd00000000000001d;
  lVar1 = 0;
  local_a8 = param_1;
  local_a0 = param_2;
  local_98 = param_3;
  __sSS10FoundationE8EncodingVMa();
  local_b8 = *(long *)(lVar1 + -8);
  lStack_b0 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  puVar12 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar1 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar6 = lVar13 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar6 - extraout_x12_01;
  FUN_1003b2558();
  (**(code **)(lVar7 + 0x10))(lVar6,lVar1,lVar2);
  if ((param_5 & 0xff) == 0) {
    pcVar8 = "privacy_screen_image_mac";
  }
  else {
    puVar10 = &DAT_d000000000000018;
    pcVar8 = "applyCachedImage(for:)";
    if ((param_5 & 0xff) != 1) {
      puVar10 = (undefined1 *)0xd00000000000001d;
      pcVar8 = " updated overlay in place";
    }
  }
  local_8c = param_5;
  __s10Foundation3URLV22appendingPathComponentyACSSF
            (lVar14,puVar10,(ulong)pcVar8 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar8 | 0x8000000000000000);
  pcVar11 = *(code **)(lVar7 + 8);
  (*pcVar11)(lVar6,lVar2);
  __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
            (lVar14,1,local_a8,local_a0);
  (*pcVar11)(lVar14,lVar2);
  if (param_4 == 0) {
LAB_1000bdd70:
    IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar5 = (ulong)local_8c;
    FUN_1000baaa8(lVar9,uVar5);
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (*pcVar11)(lVar9,lVar2);
    local_80 = 0;
    IVar4 = NSFileManager::removeItemAtURL_error_(IVar4,"removeItemAtURL:error:",uVar5,&local_80);
    if ((int)IVar4 != 0) {
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
        return local_80;
      }
      goto LAB_1000bde94;
    }
    param_4 = local_80;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_80);
    _swift_willThrow(0);
    _swift_errorRelease(param_4);
  }
  else {
    uVar5 = local_98 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar5 = param_4 >> 0x38 & 0xf;
    }
    if (uVar5 == 0) goto LAB_1000bdd70;
    uVar5 = local_98;
    __sSS10lowercasedSSyF();
    uVar3 = (ulong)local_8c;
    local_80 = uVar5;
    uStack_78 = param_4;
    FUN_1000baaa8(lVar13,uVar3);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar12);
    FUN_10009ff0c();
    __sSy10FoundationE5write2to10atomically8encodingyAA3URLV_SbSSAAE8EncodingVtKF
              (lVar13,1,puVar12,PTR___sSSN_1009957f8,uVar3);
    (**(code **)(local_b8 + 8))(puVar12,lStack_b0);
    (*pcVar11)(lVar13,lVar2);
    _swift_bridgeObjectRelease(param_4);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return param_4;
  }
LAB_1000bde94:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

