// rea decompile_all
// name: FUN_1005ce158
// address: 0x1005ce158
// body: available
// range: 0x1005ce158-0x1005ce423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005ce3e8) */
/* WARNING: Removing unreachable block (ram,0x0001005ce3c8) */
/* WARNING: Removing unreachable block (ram,0x0001005ce2c0) */
/* WARNING: Removing unreachable block (ram,0x0001005ce3d8) */
/* WARNING: Removing unreachable block (ram,0x0001005ce3f8) */

undefined8 *
FUN_1005ce158(long param_1,long param_2,long param_3,long param_4,int param_5,int param_6,
             undefined4 param_7,undefined4 param_8,undefined8 param_9,undefined8 param_10,
             undefined4 param_11,undefined4 param_12,undefined1 *param_13)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *local_200;
  stat local_1f8;
  stat local_168;
  uint local_d8 [2];
  char local_d0 [24];
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char local_a0 [20];
  ulong uStack_8c;
  undefined4 local_84;
  ulong local_80;
  ulong local_78;
  ulong uStack_70;
  undefined4 local_68;
  
  if (param_13 != (undefined1 *)0x0) {
    *param_13 = 0;
  }
  if (param_1 == 0) {
    return (undefined8 *)0x0;
  }
  if (param_2 == 0) {
    return (undefined8 *)0x0;
  }
  if (param_3 == 0) {
    return (undefined8 *)0x0;
  }
  if (param_4 == 0) {
    return (undefined8 *)0x0;
  }
  uStack_8c = 0;
  local_a0[0x10] = '\0';
  local_a0[0x11] = '\0';
  local_a0[0x12] = '\0';
  local_a0[0x13] = '\0';
  local_a0[8] = '\0';
  local_a0[9] = '\0';
  local_a0[10] = '\0';
  local_a0[0xb] = '\0';
  local_a0[0xc] = '\0';
  local_a0[0xd] = '\0';
  local_a0[0xe] = '\0';
  local_a0[0xf] = '\0';
  local_a0[0] = '\0';
  local_a0[1] = '\0';
  local_a0[2] = '\0';
  local_a0[3] = '\0';
  local_a0[4] = '\0';
  local_a0[5] = '\0';
  local_a0[6] = '\0';
  local_a0[7] = '\0';
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_b8 = 0;
  local_d0[0x10] = '\0';
  local_d0[0x11] = '\0';
  local_d0[0x12] = '\0';
  local_d0[0x13] = '\0';
  local_d0[0x14] = '\0';
  local_d0[0x15] = '\0';
  local_d0[0x16] = '\0';
  local_d0[0x17] = '\0';
  local_d0[8] = '\0';
  local_d0[9] = '\0';
  local_d0[10] = '\0';
  local_d0[0xb] = '\0';
  local_d0[0xc] = '\0';
  local_d0[0xd] = '\0';
  local_d0[0xe] = '\0';
  local_d0[0xf] = '\0';
  local_d0[0] = '\0';
  local_d0[1] = '\0';
  local_d0[2] = '\0';
  local_d0[3] = '\0';
  local_d0[4] = '\0';
  local_d0[5] = '\0';
  local_d0[6] = '\0';
  local_d0[7] = '\0';
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_68 = 0;
  local_84 = 6;
  local_d8[0] = (uint)(param_5 == 1);
  std::string::assign(local_d0);
  std::string::assign((char *)&local_80);
  std::string::assign((char *)&uStack_b8);
  std::string::assign(local_a0);
  uStack_8c = (ulong)CONCAT14(param_6 == 1,(undefined4)uStack_8c);
  uVar1 = local_78;
  if (-1 < (long)uStack_70) {
    uVar1 = uStack_70 >> 0x38;
  }
  local_84 = param_7;
  local_68 = param_8;
  if ((((uVar1 != 0) && (iVar2 = _stat(local_d0,&local_168), iVar2 == 0)) &&
      (iVar2 = _stat((char *)&local_80,&local_1f8), iVar2 == 0)) &&
     ((local_168.st_dev == local_1f8.st_dev && (local_168.st_ino == local_1f8.st_ino)))) {
    local_80 = local_80 & 0xffffffffffffff00;
    uStack_70 = uStack_70 & 0xffffffffffffff;
  }
  puVar3 = operator_new(0x18);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar5 = puVar3;
  local_200 = puVar3;
  FUN_1005ce470(puVar3,local_d0,&uStack_b8,param_13);
  if ((int)puVar5 != 0) {
    uVar1 = local_78;
    if (-1 < (long)uStack_70) {
      uVar1 = uStack_70 >> 0x38;
    }
    if ((uVar1 == 0) ||
       (puVar5 = puVar3, FUN_1005ce470(puVar3,&local_80,&uStack_b8,param_13),
       ((ulong)puVar5 & 1) != 0)) {
      puVar4 = local_d8;
      FUN_1006a9398(puVar4,param_11);
      if (puVar4 != (uint *)0x0) {
        FUN_1006a9900(puVar4,param_9);
        FUN_1006a9938(puVar4,param_10);
        puVar5 = operator_new(0xa8);
        *puVar5 = puVar4;
        FUN_1005cef8c(puVar5 + 1,param_3);
        puVar5[4] = 0;
        puVar5[5] = 0x32aaaba7;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[0xb] = 0;
        puVar5[10] = 0;
        puVar5[0xc] = 0;
        puVar5[0xd] = 0x3cb0b1bb;
        puVar5[0xf] = 0;
        puVar5[0xe] = 0;
        puVar5[0x11] = 0;
        puVar5[0x10] = 0;
        puVar5[0x13] = 0;
        puVar5[0x12] = 0;
        *(undefined4 *)(puVar5 + 0x14) = 0;
        local_200 = (undefined8 *)0x0;
        FUN_1005cecbc(puVar5 + 4,puVar3);
        goto LAB_1005ce3b4;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_1005ce3b4:
  FUN_1005cecbc(&local_200,0);
  return puVar5;
}

