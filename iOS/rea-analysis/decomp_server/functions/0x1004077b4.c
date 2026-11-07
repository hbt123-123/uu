// rea decompile_all
// name: FUN_1004077b4
// address: 0x1004077b4
// body: available
// range: 0x1004077b4-0x10040787f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1004077b4(undefined8 param_1)

{
  ID IVar1;
  ulong uVar2;
  ID unaff_x20;
  undefined1 auVar3 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar2 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  IVar1 = _objc_msgSend(unaff_x20,"objectForInfoDictionaryKey:",param_1);
  if (IVar1 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_70,IVar1);
    _swift_unknownObjectRelease(IVar1);
  }
  uStack_48 = uStack_68;
  local_50 = local_70;
  local_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_1000c776c(&local_50);
  }
  else {
    _swift_dynamicCast(&local_80,&local_50,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    if ((uVar2 & 1) != 0) goto LAB_10040786c;
  }
  local_80 = 0;
  uStack_78 = 0;
LAB_10040786c:
  auVar3._8_8_ = uStack_78;
  auVar3._0_8_ = local_80;
  return auVar3;
}

