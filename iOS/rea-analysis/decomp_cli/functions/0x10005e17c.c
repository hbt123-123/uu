// rea decompile_all
// name: FUN_10005e17c
// address: 0x10005e17c
// body: available
// range: 0x10005e17c-0x10005e217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10005e214 to 0x1000c2b04 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005e17c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50) + 0x68 &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar4 + 0x40);
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  }
  (**(code **)(lVar4 + 8))(unaff_x20 + uVar5,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + (lVar2 + uVar5 + 7 & 0xfffffffffffffff8));
  if (*(char *)(puVar1 + 2) != -1) {
    FUN_10005e218(*puVar1,puVar1[1]);
  }
  _swift_deallocObject();
  return;
}

