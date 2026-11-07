// rea decompile_all
// name: FUN_10017dbd4
// address: 0x10017dbd4
// body: available
// range: 0x10017dbd4-0x10017dfcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10017dfcc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10017dbd4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  ID IVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  ID self;
  code *pcVar15;
  long lVar16;
  byte abStack_a0 [16];
  byte abStack_90 [8];
  ulong uStack_88;
  byte abStack_80 [16];
  ulong local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  pbVar11 = abStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = (long)pbVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar13 - extraout_x12_00;
  puVar2 = &DAT_100a77ce8;
  FUN_100004bb4(&DAT_100a77ce8,&DAT_10080ca10);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar14 = (byte *)(lVar12 - extraout_x8_00);
  FUN_10017d858(pbVar14,param_1,param_2);
  pbVar3 = pbVar14;
  _swift_getEnumCaseMultiPayload(pbVar14,puVar2);
  if ((int)pbVar3 == 1) {
    uVar4 = (ulong)*pbVar14;
  }
  else {
    lVar5 = lVar12;
    pbVar3 = pbVar14;
    (**(code **)(lVar16 + 0x20))(lVar12,pbVar14,lVar1);
    self = *(ID *)(unaff_x20 + 0x10);
    __s10Foundation3URLV4pathSSvg();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pbVar3);
    pcVar8 = "isWritableFileAtPath:";
    IVar6 = _objc_msgSend(self,"isWritableFileAtPath:",lVar5);
    if ((int)IVar6 == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(pbVar14 + -0x10) = lVar12;
      FUN_1003fb4ec(FUN_100180390,pbVar14 + -0x20,0xd0000000000000b1,0x8000000100896e70,
                    0xd000000000000014,0x8000000100897200,0x31,0);
      (**(code **)(lVar16 + 8))(lVar12,lVar1);
      pcVar9 = (char *)0x0;
      uVar10 = 1;
      uVar4 = 5;
      goto LAB_10017deb0;
    }
    FUN_10017e06c(lVar12);
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF(lVar13);
    _swift_bridgeObjectRelease(pcVar8);
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    local_70 = 0;
    pcVar9 = "createDirectoryAtURL:withIntermediateDirectories:attributes:error:";
    IVar6 = _objc_msgSend(self,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                          pcVar8,0,0,&local_70);
    if ((int)IVar6 != 0) {
      uVar4 = local_70;
      __s10Foundation3URLV016standardizedFileB0ACvg(pbVar11,local_70);
      __s10Foundation3URLV4pathSSvg();
      pcVar15 = *(code **)(lVar16 + 8);
      (*pcVar15)(pbVar11,lVar1);
      (*pcVar15)(lVar13,lVar1);
      (*pcVar15)(lVar12,lVar1);
      uVar10 = 0;
      goto LAB_10017deb0;
    }
    uVar7 = local_70;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)(pbVar14 + -0x10) = lVar13;
    *(ulong *)(pbVar14 + -8) = uVar7;
    FUN_1003fb4ec(FUN_100180398,pbVar14 + -0x20,0xd0000000000000b1,0x8000000100896e70,
                  0xd000000000000014,0x8000000100897200,0x3b,0);
    uVar4 = uVar7;
    FUN_1001801a0(uVar7);
    _swift_errorRelease(uVar7);
    uVar4 = uVar4 & 0xff;
    pcVar15 = *(code **)(lVar16 + 8);
    (*pcVar15)(lVar13,lVar1);
    (*pcVar15)(lVar12,lVar1);
  }
  pcVar9 = (char *)0x0;
  uVar10 = 1;
LAB_10017deb0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4,pcVar9,uVar10);
}

