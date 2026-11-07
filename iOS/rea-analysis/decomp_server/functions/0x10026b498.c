// rea decompile_all
// name: FUN_10026b498
// address: 0x10026b498
// body: available
// range: 0x10026b498-0x10026b53f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026b53c to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026b498(void)

{
  long lVar1;
  long unaff_x20;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x38 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar2 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar1);
  if (*(long *)(unaff_x20 + uVar2) != 0) {
    _swift_release(((long *)(unaff_x20 + uVar2))[1]);
  }
  _swift_release(*(undefined8 *)(unaff_x20 + uVar2 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar2 + 0x20));
  _swift_deallocObject();
  return;
}

