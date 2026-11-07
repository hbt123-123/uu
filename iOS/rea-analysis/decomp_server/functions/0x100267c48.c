// rea decompile_all
// name: FUN_100267c48
// address: 0x100267c48
// body: available
// range: 0x100267c48-0x100267cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100267c48(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar5 = uVar4 + 0x40 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar3 + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar4 + 0x10);
  puVar2 = (undefined8 *)(unaff_x20 + uVar4 + 0x20);
  FUN_1002677e4(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                unaff_x20 + uVar5,*(undefined8 *)(unaff_x20 + uVar4),
                *(undefined8 *)(unaff_x20 + uVar4 + 8),*puVar1,puVar1[1],*puVar2,
                *(undefined1 *)(puVar2 + 1));
  return;
}

