// rea decompile_all
// name: FUN_100112d44
// address: 0x100112d44
// body: available
// range: 0x100112d44-0x100112dd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100112dd0 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100112d44(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = (*(long *)(lVar3 + 0x40) + uVar4 + 3 & 0xfffffffffffffffc) + 0xb & 0xfffffffffffffff8;
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + uVar5));
  puVar1 = (undefined8 *)(unaff_x20 + uVar5 + 8);
  FUN_100006cdc(*puVar1,puVar1[1]);
  _swift_release(puVar1[2]);
  _swift_deallocObject();
  return;
}

