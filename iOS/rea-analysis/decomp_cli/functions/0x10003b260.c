// rea decompile_all
// name: FUN_10003b260
// address: 0x10003b260
// body: available
// range: 0x10003b260-0x10003b3eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10003b260(void)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined *local_60;
  char *pcStack_58;
  
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &_OBJC_CLASS___NSFileHandle;
  _objc_msgSend(&_OBJC_CLASS___NSFileHandle,"fileHandleWithStandardInput");
  pcVar7 = "readDataToEndOfFile";
  _objc_msgSend();
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar3,0);
  puVar5 = puVar4;
  pcVar8 = pcVar7;
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(puVar4,pcVar7,lVar3);
  local_60 = (undefined *)0x0;
  if (pcVar8 != (char *)0x0) {
    local_60 = puVar5;
  }
  pcVar1 = (char *)0xe000000000000000;
  if (pcVar8 != (char *)0x0) {
    pcVar1 = pcVar8;
  }
  uVar6 = 0xa0d;
  pcStack_58 = pcVar1;
  __s10Foundation12CharacterSetV12charactersInACSSh_tcfC(lVar9,0xa0d,0xe200000000000000);
  FUN_10003da50();
  lVar3 = lVar9;
  puVar5 = PTR___sSSN_1000f02f8;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(lVar9,PTR___sSSN_1000f02f8,uVar6);
  FUN_100020a0c(puVar4,pcVar7);
  (**(code **)(lVar10 + 8))(lVar9,lVar2);
  _swift_bridgeObjectRelease(pcVar1);
  auVar11._8_8_ = puVar5;
  auVar11._0_8_ = lVar3;
  return auVar11;
}

