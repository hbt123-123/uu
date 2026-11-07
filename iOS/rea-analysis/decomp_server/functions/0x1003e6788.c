// rea decompile_all
// name: FUN_1003e6788
// address: 0x1003e6788
// body: available
// range: 0x1003e6788-0x1003e6813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e6810 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e6788(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0;
  __sSqMa(0,lVar2);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = *(long *)(lVar2 + -8);
  lVar1 = unaff_x20 + uVar3;
  (**(code **)(lVar4 + 0x30))(lVar1,1,lVar2);
  if ((int)lVar1 == 0) {
    (**(code **)(lVar4 + 8))(unaff_x20 + uVar3,lVar2);
  }
  _swift_deallocObject();
  return;
}

