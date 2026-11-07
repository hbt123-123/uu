// rea decompile_all
// name: FUN_1001913d0
// address: 0x1001913d0
// body: available
// range: 0x1001913d0-0x10019151b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1001913d0(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 **ppuVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined1 *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  ppuVar7 = &local_50;
  lVar6 = 0xe;
  _NSSearchPathForDirectoriesInDomains(0xe,1,1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  if (*(long *)(lVar6 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar6);
    local_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
  }
  else {
    puVar1 = *(undefined1 **)(lVar6 + 0x20);
    uVar2 = *(undefined8 *)(lVar6 + 0x28);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRelease(lVar6);
    local_40 = 0x2f;
    uStack_38 = 0xe100000000000000;
    if (DAT_100a73bb0 != -1) {
      _swift_once(&DAT_100a73bb0,FUN_10019b250);
    }
    __sSS6appendyySSF(DAT_100b36258,DAT_100b36260);
    __sSS6appendyySSF(0x616f6270696c432f,0xea00000000006472);
    uVar5 = uStack_38;
    puVar4 = PTR___sSSSTsWP_100995820;
    puVar3 = PTR___sSSN_1009957f8;
    puVar8 = PTR___sSSN_1009957f8;
    local_50 = puVar1;
    puStack_48 = (undefined *)uVar2;
    __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
              (&local_50,PTR___sSSN_1009957f8,PTR___sSSs25LosslessStringConvertiblesWP_100995838,
               PTR___sSSSTsWP_100995820);
    local_50 = (undefined1 *)ppuVar7;
    puStack_48 = puVar8;
    __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_40,puVar3,puVar4);
    _swift_bridgeObjectRelease(uVar5);
  }
  auVar9._8_8_ = puStack_48;
  auVar9._0_8_ = local_50;
  return auVar9;
}

