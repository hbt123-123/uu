// rea decompile_all
// name: _TtC6Sentry21SentryReplayRecording::headerForReplayRecording
// address: 0x1007c1454
// body: available
// range: 0x1007c1454-0x1007c1547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007c1544 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentryReplayRecording::headerForReplayRecording(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_100abc770;
  FUN_1007b4550();
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x5f746e656d676573;
  *(undefined8 *)(puVar1 + 0x28) = 0xea00000000006469;
  uVar4 = *(undefined8 *)(param_1 + segmentId);
  *(undefined **)(puVar1 + 0x48) = PTR___sSiN_100995968;
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  puVar2 = puVar1;
  FUN_1007c7d18();
  _swift_setDeallocating(puVar1);
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  puVar3 = &DAT_100abc778;
  FUN_1007b4550(&DAT_100abc778);
  _swift_arrayDestroy(puVar1 + 0x20,uVar4,puVar3);
  puVar1 = puVar2;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar2,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
  _swift_bridgeObjectRelease(puVar2);
  return (ID)puVar1;
}

