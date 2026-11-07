// rea decompile_all
// name: FUN_100092f40
// address: 0x100092f40
// body: available
// range: 0x100092f40-0x100092fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100092fc0 to 0x10008d984 FUN_10008d984 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100092f40(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar4 = uVar2 + 0x2c & (uVar2 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar4 + lVar5 + uVar2 & (uVar2 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = unaff_x20 + (lVar5 + uVar2 + uVar3 & (uVar2 ^ 0xffffffffffffffff));
  FUN_10008d984(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x20 + 0x28),
                unaff_x20 + uVar4,unaff_x20 + uVar3,lVar1,*(undefined1 *)(lVar1 + lVar5));
  return;
}

