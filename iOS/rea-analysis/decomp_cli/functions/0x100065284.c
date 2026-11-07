// rea decompile_all
// name: FUN_100065284
// address: 0x100065284
// body: available
// range: 0x100065284-0x100065333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100065330 to 0x1000c2b04 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100065284(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0;
  __sSqMa(0,lVar3);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar4 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar5 = *(long *)(lVar3 + -8);
  lVar1 = unaff_x20 + uVar4;
  (**(code **)(lVar5 + 0x30))(lVar1,1,lVar3);
  if ((int)lVar1 == 0) {
    (**(code **)(lVar5 + 8))(unaff_x20 + uVar4,lVar3);
  }
  lVar1 = unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8);
  if (*(long *)(lVar1 + 8) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
  }
  _swift_deallocObject();
  return;
}

