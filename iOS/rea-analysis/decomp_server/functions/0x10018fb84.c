// rea decompile_all
// name: FUN_10018fb84
// address: 0x10018fb84
// body: available
// range: 0x10018fb84-0x10018fffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10018fff8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010018fde8) */

void FUN_10018fb84(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined *param_7,undefined8 param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  ID IVar5;
  undefined *puVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined1 auStack_e0 [16];
  code *local_d0;
  undefined *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined *local_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  puVar2 = (undefined *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (puVar2 == (undefined *)0x0) {
    local_90 = (undefined *)CONCAT71(local_90._1_7_,1);
    FUN_10061630c(&local_90);
    goto LAB_10018ff9c;
  }
  uVar14 = *(undefined8 *)(puVar2 + 0x18);
  local_a8 = param_8;
  local_98 = param_3;
  _swift_retain(uVar14);
  puVar3 = PTR___ss6UInt32VN_100995dc0;
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  local_90 = puVar3;
  puStack_88 = puVar6;
  __sSS6appendyySSF(0x3a,0xe100000000000000);
  __sSS6appendyySSF(param_4,param_5);
  puVar3 = puStack_88;
  FUN_1003e37e8(&local_98,&local_90);
  _swift_bridgeObjectRelease(puVar3);
  _swift_release(uVar14);
  IVar5 = CONCAT44(uStack_94,local_98);
  if (IVar5 == 0) {
    local_90 = (undefined *)CONCAT71(local_90._1_7_,1);
    FUN_10061630c(&local_90);
    _swift_release(puVar2);
    goto LAB_10018ff9c;
  }
  uVar1 = (uint)((ulong)param_7 >> 0x20);
  uVar11 = uVar1 >> 0x1e;
  local_b0 = param_2;
  if (uVar1 >> 0x1e < 2) {
    if (uVar11 == 0) {
      pcVar13 = (code *)((ulong)param_7 >> 0x30 & 0xff);
    }
    else {
      iVar12 = (int)((ulong)param_6 >> 0x20);
      if (SBORROW4(iVar12,(int)param_6)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10018fff8);
        (*pcVar13)();
      }
      pcVar13 = (code *)(long)(iVar12 - (int)param_6);
LAB_10018fcf0:
      if ((long)pcVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10018fcf8);
        (*pcVar13)();
      }
    }
  }
  else {
    if (uVar11 == 2) {
      pcVar13 = (code *)(*(long *)(param_6 + 0x18) - *(long *)(param_6 + 0x10));
      if (SBORROW8(*(long *)(param_6 + 0x18),*(long *)(param_6 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10018fce0);
        (*pcVar13)();
      }
      goto LAB_10018fcf0;
    }
    pcVar13 = (code *)0x0;
  }
  uVar14 = 0;
  FUN_100401b14();
  (*(code *)PTR____chkstk_darwin_100995498)();
  pcVar4 = FUN_1001446c0;
  local_d0 = pcVar13;
  local_c8 = puVar2;
  local_b8 = uVar14;
  FUN_1003fb45c(FUN_1001446c0,auStack_e0,0xd0000000000000ad,0x8000000100890a70,0xd000000000000023,
                0x8000000100890b20,0x1c0,7);
  FUN_10019151c();
  if (pcVar4 <= pcVar13) {
    local_90 = (undefined *)CONCAT71(local_90._1_7_,2);
    FUN_10061630c(&local_90);
    _swift_release(puVar2);
    goto LAB_10018ff9c;
  }
  local_90 = (undefined *)0x0;
  IVar5 = _objc_msgSend(IVar5,"seekToOffset:error:",local_a8,&local_90);
  if ((int)IVar5 != 0) {
    local_90 = param_6;
    puStack_88 = param_7;
    FUN_1000e37d4();
    __sSo12NSFileHandleC10FoundationE5write10contentsOfyx_tKAC12DataProtocolRzlF
              (&local_90,PTR___s10Foundation4DataVN_1009961e8,IVar5);
    local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
    FUN_10061630c(&local_90);
    _swift_release(puVar2);
    goto LAB_10018ff9c;
  }
  puVar3 = local_90;
  __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
  _swift_willThrow(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_d0 = (code *)CONCAT44(local_d0._4_4_,param_3);
  local_c8 = puVar3;
  FUN_1003fb4ec(FUN_100192288,auStack_e0,0xd0000000000000ad,0x8000000100890a70,0xd00000000000002e,
                0x8000000100898c70,0x12a,0);
  puVar6 = puVar3;
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  pcVar8 = "domain";
  uVar7 = _objc_msgSend((ID)puVar6,"domain");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  IVar5 = *(ID *)PTR__NSCocoaErrorDomain_1009952a0;
  pcVar9 = pcVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if ((uVar7 == IVar5) && (pcVar8 == pcVar9)) {
    _swift_bridgeObjectRelease(pcVar8);
    _swift_bridgeObjectRelease(pcVar9);
LAB_10018ff48:
    IVar5 = _objc_msgSend((ID)puVar6,"code");
    if (IVar5 != 0x280) goto LAB_10018ff68;
    uVar10 = 2;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar7,pcVar8,IVar5,pcVar9,0);
    _swift_bridgeObjectRelease(pcVar8);
    _swift_bridgeObjectRelease(pcVar9);
    if ((uVar7 & 1) != 0) goto LAB_10018ff48;
LAB_10018ff68:
    uVar10 = 1;
  }
  local_90 = (undefined *)CONCAT71(local_90._1_7_,uVar10);
  FUN_10061630c(&local_90);
  _swift_errorRelease(puVar3);
  _swift_release(puVar2);
LAB_10018ff9c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

