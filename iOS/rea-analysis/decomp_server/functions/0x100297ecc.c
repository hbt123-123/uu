// rea decompile_all
// name: FUN_100297ecc
// address: 0x100297ecc
// body: available
// range: 0x100297ecc-0x100297f37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100297ecc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar4 = uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(lVar2 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 8);
  FUN_100293cf4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + uVar4,
                *(undefined8 *)(unaff_x20 + uVar3),*puVar1,puVar1[1],
                *(undefined8 *)(unaff_x20 + uVar3 + 0x18),*(long *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}

