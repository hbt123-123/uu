// rea decompile_all
// name: FUN_1000915e4
// address: 0x1000915e4
// body: available
// range: 0x1000915e4-0x10009164f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009164c to 0x1000893d0 FUN_1000893d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000915e4(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 3 & 0xfffffffffffffffc;
  uVar5 = uVar3 + 0xf & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar5);
  FUN_1000893d0(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar4,
                *(undefined4 *)(unaff_x20 + uVar3),*(undefined4 *)(unaff_x20 + uVar3 + 4),*puVar1,
                puVar1[1],*(undefined8 *)(unaff_x20 + uVar5 + 0x10));
  return;
}

