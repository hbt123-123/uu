// rea decompile_all
// name: FUN_10069d0e4
// address: 0x10069d0e4
// body: available
// range: 0x10069d0e4-0x10069d3b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010069d36c) */
/* WARNING: Removing unreachable block (ram,0x00010069d37c) */

void FUN_10069d0e4(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  void **ppvVar5;
  ulong uVar6;
  long lVar7;
  void *local_130 [2];
  char local_119;
  long local_118;
  ulong uStack_110;
  void *local_108 [2];
  char local_f1;
  long local_f0;
  long local_e8;
  void *local_e0 [2];
  char local_c9;
  long local_c8;
  ulong uStack_c0;
  void *local_b8 [2];
  char local_a1;
  long local_a0;
  long local_98;
  undefined1 local_90 [24];
  long local_78;
  long local_70;
  undefined1 local_68 [24];
  long local_50;
  ulong uStack_48;
  
  FUN_10069c3b0(local_b8);
  lVar7 = (long)*(char *)(param_2 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  FUN_10069c3b0(local_e0,param_3);
  uVar6 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar6 = (ulong)*(byte *)(param_3 + 0x17);
  }
  if (local_a0 != param_2 || local_98 != lVar7) {
    do {
      if (local_c8 == param_3 && uStack_c0 == uVar6) break;
      ppvVar5 = local_b8;
      FUN_10069c180(ppvVar5,local_e0);
      if ((int)ppvVar5 != 0) break;
      FUN_10069d89c(local_b8);
      FUN_10069d89c(local_e0);
    } while ((local_a0 != param_2) || (local_98 != lVar7));
  }
  FUN_10069dd28(local_90,local_b8,local_e0);
  if (local_c9 < '\0') {
    operator_delete(local_e0[0]);
  }
  if (local_a1 < '\0') {
    operator_delete(local_b8[0]);
  }
  FUN_10069c3b0(local_108,param_2);
  bVar3 = false;
  if ((local_78 == local_f0) && (local_70 == local_e8)) {
    FUN_10069c3b0(local_130,param_3);
    bVar3 = local_50 == local_118 && uStack_48 == uStack_110;
    if (local_119 < '\0') {
      operator_delete(local_130[0]);
    }
  }
  if (local_f1 < '\0') {
    operator_delete(local_108[0]);
  }
  if (bVar3) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar7 = (long)*(char *)(param_2 + 0x17);
    if (lVar7 < 0) {
      lVar7 = *(long *)(param_2 + 8);
    }
    bVar2 = *(byte *)(param_3 + 0x17);
    uVar6 = *(ulong *)(param_3 + 8);
    if ((local_78 == param_2) && (local_70 == lVar7)) {
      uVar1 = uVar6;
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
      }
      if ((local_50 == param_3) && (uStack_48 == uVar1)) {
        FUN_10069cfb0();
        uVar4 = DAT_100b2c4f8;
        if (-1 < DAT_100b2c508._7_1_) {
          param_1[1] = DAT_100b2c500;
          *param_1 = uVar4;
          param_1[2] = CONCAT17(DAT_100b2c508._7_1_,(undefined7)DAT_100b2c508);
          return;
        }
        FUN_100384eb8(param_1,DAT_100b2c4f8,DAT_100b2c500);
        return;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (-1 < (char)bVar2) {
      uVar6 = (ulong)bVar2;
    }
    if ((local_50 != param_3) || (uStack_48 != uVar6)) {
      do {
        FUN_10069d0b4();
        FUN_10069bf10(param_1,&DAT_100b2c510);
        FUN_10069d89c(local_68);
        uVar6 = *(ulong *)(param_3 + 8);
        if (-1 < (char)*(byte *)(param_3 + 0x17)) {
          uVar6 = (ulong)*(byte *)(param_3 + 0x17);
        }
      } while (local_50 != param_3 || uStack_48 != uVar6);
    }
    while( true ) {
      lVar7 = (long)*(char *)(param_2 + 0x17);
      if (lVar7 < 0) {
        lVar7 = *(long *)(param_2 + 8);
      }
      if (local_78 == param_2 && local_70 == lVar7) break;
      FUN_10069bf10(param_1,local_90);
      FUN_10069d89c(local_90);
    }
  }
  return;
}

