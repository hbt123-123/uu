// rea decompile_all
// name: FUN_10028036c
// address: 0x10028036c
// body: available
// range: 0x10028036c-0x10028042f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10028036c(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long unaff_x20;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_78 [40];
  
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1) ==
      0) {
    uVar3 = 0;
  }
  else {
    do {
      FUN_100082260(*(long *)(unaff_x20 + 0x30) + param_2 * 0x28,auStack_78);
      puVar1 = auStack_78;
      __ss11AnyHashableV2eeoiySbAB_ABtFZ(puVar1,param_1);
      uVar3 = (uint)puVar1;
      FUN_100280720(auStack_78);
      if (((ulong)puVar1 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar2;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f)
             & 1) != 0);
  }
  auVar4._8_4_ = uVar3 & 1;
  auVar4._0_8_ = param_2;
  auVar4._12_4_ = 0;
  return auVar4;
}

