// rea decompile_all
// name: FUN_1003a965c
// address: 0x1003a965c
// body: available
// range: 0x1003a965c-0x1003a9757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_1003a965c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [56];
  
  puVar1 = &DAT_100a8b3a0;
  FUN_100004bb4(&DAT_100a8b3a0,&DAT_100820640);
  puVar3 = auStack_68;
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  uVar4 = *(undefined8 *)PTR__kAXTrustedCheckOptionPrompt_1009954d8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  *(undefined1 **)(puVar1 + 0x28) = puVar3;
  puVar1[0x30] = 1;
  puVar2 = puVar1;
  FUN_1000cd340(puVar1);
  _swift_setDeallocating(puVar1);
  FUN_1003a98f0(puVar1 + 0x20);
  puVar1 = puVar2;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar2,PTR___sSSN_1009957f8,PTR___sSbN_1009958c8,PTR___sSSSHsWP_100995808);
  _swift_bridgeObjectRelease(puVar2);
  _AXIsProcessTrustedWithOptions(puVar1);
  return (int)puVar1 != 0;
}

