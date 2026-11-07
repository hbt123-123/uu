// rea decompile_all
// name: FUN_1001360e0
// address: 0x1001360e0
// body: available
// range: 0x1001360e0-0x100136153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100136150 to 0x10013617c FUN_10013617c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001360e0(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar2 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar2 == 0) {
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    _swift_bridgeObjectRetain(uVar4);
    _swift_release(lVar2);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockKey)
  ;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  FUN_10013617c();
  return;
}

