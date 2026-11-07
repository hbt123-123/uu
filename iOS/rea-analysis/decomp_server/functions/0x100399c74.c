// rea decompile_all
// name: FUN_100399c74
// address: 0x100399c74
// body: available
// range: 0x100399c74-0x100399f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100399c74(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ID IVar6;
  ID IVar7;
  char *pcVar8;
  char *pcVar9;
  ulong *puVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  ID unaff_x20;
  ulong local_80;
  char *pcStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  puVar10 = &local_80;
  pcVar8 = "debugDescription";
  uVar1 = _objc_msgSend(unaff_x20,"debugDescription");
  pcVar9 = pcVar8;
  IVar6 = uVar1;
  if (uVar1 == 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    pcVar9 = pcVar8;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar8);
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar12 = uVar1;
  if (((ulong)pcVar9 & 0x2000000000000000) != 0) {
    uVar12 = (ulong)pcVar9 >> 0x38 & 0xf;
  }
  uStack_68 = 0xb;
  if (((uint)((ulong)pcVar9 >> 0x3c) & (uint)((uVar1 & 0x800000000000000) == 0)) == 0) {
    uStack_68 = 7;
  }
  uStack_68 = uStack_68 | uVar12 << 0x10;
  local_70 = 0xf;
  local_80 = uVar1;
  pcStack_78 = pcVar9;
  _swift_bridgeObjectRetain(pcVar9);
  puVar2 = &DAT_100a8ac98;
  FUN_100004bb4(&DAT_100a8ac98,&DAT_10081f488);
  puVar3 = puVar2;
  FUN_100399f6c();
  puVar4 = puVar3;
  FUN_10009ff0c();
  puVar5 = &local_70;
  __sSo8_NSRangeV10FoundationE_2inABx_q_tcSXRzSyR_SS5IndexV5BoundRtzr0_lufC
            (puVar5,&local_80,puVar2,PTR___sSSN_1009957f8,puVar3,puVar4);
  if (DAT_100a89180 != -1) {
    _swift_once(&DAT_100a89180,FUN_100399c00);
  }
  if (DAT_100a8ac90 == 0) {
    _swift_bridgeObjectRelease(pcVar9);
  }
  else {
    IVar6 = _objc_msgSend(DAT_100a8ac90,"firstMatchInString:options:range:",IVar6,0,puVar5,puVar10);
    if (IVar6 == 0) {
      _swift_bridgeObjectRelease(pcVar9);
    }
    else {
      pcVar8 = "rangeAtIndex:";
      IVar7 = _objc_msgSend(IVar6,"rangeAtIndex:",1);
      uVar12 = uVar1;
      __sSn10FoundationSS5IndexVRszrlE_2inSnyACGSgSo8_NSRangeV_SShtcfC();
      if ((uVar12 & 1) == 0) {
        pcVar11 = "rangeAtIndex:";
        IVar6 = _objc_msgSend(IVar6,"rangeAtIndex:",2);
        uVar12 = uVar1;
        __sSn10FoundationSS5IndexVRszrlE_2inSnyACGSgSo8_NSRangeV_SShtcfC();
        if ((uVar12 & 1) == 0) {
          pcVar13 = pcVar9;
          __sSSySsSnySS5IndexVGcig(IVar7,pcVar8,uVar1,pcVar9);
          __sSS14_fromSubstringySSSshFZ();
          _swift_bridgeObjectRelease(pcVar13);
          pcVar8 = pcVar9;
          __sSSySsSnySS5IndexVGcig(IVar6,pcVar11,uVar1,pcVar9);
          _swift_bridgeObjectRelease(pcVar9);
          __sSS14_fromSubstringySSSshFZ(IVar6,pcVar11,uVar1,pcVar8);
          _swift_bridgeObjectRelease(pcVar8);
          return IVar7;
        }
      }
      _swift_bridgeObjectRelease(pcVar9);
    }
  }
  return 0x6e776f6e6b6e75;
}

