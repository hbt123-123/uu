// rea decompile_all
// name: FUN_1006b9b70
// address: 0x1006b9b70
// body: available
// range: 0x1006b9b70-0x1006b9d33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
FUN_1006b9b70(undefined8 *param_1,void *param_2,size_t param_3,int param_4,undefined8 param_5,
             undefined8 *param_6)

{
  ulong uVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar7 = param_6[1];
  uVar6 = *param_6;
  uVar8 = *(undefined8 *)((long)param_6 + 0xc);
  *(undefined8 *)((long)param_1 + 0x124) = *(undefined8 *)((long)param_6 + 0x14);
  *(undefined8 *)((long)param_1 + 0x11c) = uVar8;
  param_1[0x23] = uVar7;
  param_1[0x22] = uVar6;
  if (((param_3 == 0) || (param_2 == (void *)0x0)) || (param_4 == 1)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    iVar3 = *(int *)(param_1 + 10);
  }
  else {
    if (*(int *)(param_1 + 10) != 0) {
LAB_1006b9bd4:
      *(undefined4 *)(param_1 + 9) = 1;
      return (undefined8 *)0xffffffffffffffc0;
    }
    pvVar2 = (void *)param_1[5];
    uVar1 = (long)pvVar2 + (param_3 + 7 & 0xfffffffffffffff8);
    if ((ulong)param_1[4] < uVar1) goto LAB_1006b9bd4;
    param_1[5] = uVar1;
    param_1[6] = uVar1;
    param_1[7] = uVar1;
    if (pvVar2 == (void *)0x0) {
      return (undefined8 *)0xffffffffffffffc0;
    }
    *param_1 = pvVar2;
    _memcpy(pvVar2,param_2,param_3);
    param_1[1] = param_3;
    iVar3 = *(int *)(param_1 + 10);
  }
  if (iVar3 == 0) {
    lVar5 = param_1[5];
    uVar1 = lVar5 + 0x1800;
    if (uVar1 <= (ulong)param_1[4]) {
      param_1[5] = uVar1;
      param_1[6] = uVar1;
      param_1[7] = uVar1;
      goto LAB_1006b9c50;
    }
  }
  lVar5 = 0;
  *(undefined4 *)(param_1 + 9) = 1;
LAB_1006b9c50:
  param_1[2] = lVar5;
  param_1[0x263] = 0x800000004;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0x262] = 0x100000000;
  param_1[0x261] = 0;
  puVar4 = param_1 + 0xb;
  FUN_1006bba9c(puVar4,param_1 + 3,param_6,0,1,0);
  if (puVar4 < (undefined8 *)0xffffffffffffff89) {
    local_c0 = 0;
    uStack_b4 = (undefined4)param_6[1];
    uStack_bc = (undefined4)*param_6;
    uStack_b8 = (undefined4)((ulong)*param_6 >> 0x20);
    uStack_a8 = *(undefined8 *)((long)param_6 + 0x14);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_98 = 0x300000000;
    local_a0 = 1;
    local_b0 = (undefined4)*(undefined8 *)((long)param_6 + 0xc);
    uStack_ac = (undefined4)((ulong)*(undefined8 *)((long)param_6 + 0xc) >> 0x20);
    puVar4 = param_1 + 0x26;
    FUN_1006bcc2c(puVar4,param_1 + 0xb,param_1 + 3,&local_c0,*param_1,param_1[1],param_5,1,
                  param_1[2]);
    if (puVar4 < (undefined8 *)0xffffffffffffff89) {
      *(int *)(param_1 + 0x267) = (int)puVar4;
      return (undefined8 *)0x0;
    }
  }
  return puVar4;
}

