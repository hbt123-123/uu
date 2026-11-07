// rea decompile_all
// name: FUN_1006b7c68
// address: 0x1006b7c68
// body: available
// range: 0x1006b7c68-0x1006b7d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1006b7c68(undefined8 *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  uint local_3c [7];
  
  puVar2 = &local_d0;
  local_d0 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_c4 = (undefined4)param_1[1];
  uStack_cc = (undefined4)*param_1;
  uStack_c8 = (undefined4)((ulong)*param_1 >> 0x20);
  uStack_b8 = *(undefined8 *)((long)param_1 + 0x14);
  local_c0 = (undefined4)*(undefined8 *)((long)param_1 + 0xc);
  uStack_bc = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
  uStack_a8 = 0x300000000;
  local_b0 = 1;
  FUN_1006b7620(local_3c,&local_d0,0,0);
  FUN_1006b7908(&local_d0);
  uVar3 = 1L << ((ulong)local_3c[0] & 0x3f);
  uVar1 = uVar3;
  if (0x1ffff < uVar3) {
    uVar1 = 0x20000;
  }
  uVar4 = 0x20000 - uVar1 >> 0xb;
  if (0x10 < local_3c[0]) {
    uVar4 = 0;
  }
  return (undefined1 *)((long)puVar2 + uVar4 + uVar1 * 2 + (uVar1 >> 8) + uVar3 + 1);
}

