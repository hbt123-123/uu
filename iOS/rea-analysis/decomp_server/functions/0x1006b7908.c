// rea decompile_all
// name: FUN_1006b7908
// address: 0x1006b7908
// body: available
// range: 0x1006b7908-0x1006b7a67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1006b7908(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_6c;
  uint uStack_68;
  uint local_64;
  int local_5c;
  uint local_54;
  
  if (0 < *(int *)(param_1 + 0x4c)) {
    return (undefined1 *)0xffffffffffffffff;
  }
  puVar2 = &local_90;
  puVar3 = &local_90;
  lVar6 = 0x24608;
  FUN_1006b7620(&local_6c,param_1,0,0);
  uVar4 = 1L << ((ulong)local_6c & 0x3f);
  if (0x1ffff < uVar4) {
    uVar4 = 0x20000;
  }
  lVar7 = 0;
  if (local_54 != 1) {
    lVar7 = 4L << ((ulong)uStack_68 & 0x3f);
  }
  uVar5 = 3;
  if (local_5c != 3) {
    uVar5 = 4;
  }
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = (uint)uVar4 / uVar5;
  }
  if (local_5c != 3) {
    if (local_54 < 7) {
      lVar6 = 0;
    }
    lVar7 = (4L << ((ulong)local_64 & 0x3f)) + lVar7;
  }
  else {
    if (local_54 < 7) {
      lVar6 = 0;
    }
    lVar7 = (4L << ((ulong)local_64 & 0x3f)) + lVar7;
    if (0x11 < local_6c) {
      lVar8 = 0x80000;
      goto LAB_1006b79e8;
    }
    if (local_6c != 0) {
      lVar8 = 4L << ((ulong)local_6c & 0x3f);
      goto LAB_1006b79e8;
    }
  }
  lVar8 = 0;
LAB_1006b79e8:
  uStack_88 = *(undefined8 *)(param_1 + 0x68);
  local_90 = *(undefined8 *)(param_1 + 0x60);
  local_80 = *(undefined8 *)(param_1 + 0x70);
  FUN_1006df528(&local_90);
  uStack_88 = *(undefined8 *)(param_1 + 0x68);
  local_90 = *(undefined8 *)(param_1 + 0x60);
  local_80 = *(undefined8 *)(param_1 + 0x70);
  FUN_1006df55c(&local_90,uVar4);
  return (undefined1 *)
         ((long)puVar2 +
         (long)puVar3 * 0xc + (ulong)(uVar1 * 0xb) + uVar4 + lVar7 + lVar6 + lVar8 + 0x4078);
}

