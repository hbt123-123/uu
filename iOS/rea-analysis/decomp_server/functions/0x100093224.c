// rea decompile_all
// name: thunk_FUN_1000915e4
// address: 0x100093224
// body: available
// range: 0x100093224-0x100093227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1000915e4(void)

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

