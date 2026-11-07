// rea decompile_all
// name: FUN_10018c66c
// address: 0x10018c66c
// body: available
// range: 0x10018c66c-0x10018c877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10018c66c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  ID IVar8;
  undefined *puVar9;
  undefined1 *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  ppuVar6 = &local_60;
  lVar5 = 0xe;
  _NSSearchPathForDirectoriesInDomains(0xe,1,1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  if (*(long *)(lVar5 + 0x10) != 0) {
    puVar7 = *(undefined1 **)(lVar5 + 0x20);
    uVar1 = *(undefined8 *)(lVar5 + 0x28);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRelease(lVar5);
    local_50 = 0x2f;
    uStack_48 = 0xe100000000000000;
    if (DAT_100a73bb0 != -1) {
      _swift_once(&DAT_100a73bb0,FUN_10019b250);
    }
    __sSS6appendyySSF(DAT_100b36258,DAT_100b36260);
    __sSS6appendyySSF(0x616f6270696c432f,0xea00000000006472);
    uVar4 = uStack_48;
    puVar3 = PTR___sSSSTsWP_100995820;
    puVar2 = PTR___sSSN_1009957f8;
    puVar9 = PTR___sSSN_1009957f8;
    local_60 = puVar7;
    puStack_58 = (undefined *)uVar1;
    __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
              (&local_60,PTR___sSSN_1009957f8,PTR___sSSs25LosslessStringConvertiblesWP_100995838,
               PTR___sSSSTsWP_100995820);
    local_60 = (undefined1 *)ppuVar6;
    puStack_58 = puVar9;
    __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_50,puVar2,puVar3);
    _swift_bridgeObjectRelease(uVar4);
    puVar2 = puStack_58;
    puVar7 = local_60;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(local_60,puStack_58);
    _swift_bridgeObjectRelease(puVar2);
    IVar8 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",puVar7);
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(param_1,IVar8);
    lVar5 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1,0,1,lVar5);
    return;
  }
  _swift_bridgeObjectRelease(lVar5);
  lVar5 = 0;
  __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x00010018c85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1,1,1,lVar5);
  return;
}

