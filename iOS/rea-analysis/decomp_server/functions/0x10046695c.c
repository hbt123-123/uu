// rea decompile_all
// name: FUN_10046695c
// address: 0x10046695c
// body: available
// range: 0x10046695c-0x100466b37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10046695c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  byte local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  byte local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar7 = param_1[1];
  uVar5 = *param_1;
  uVar11 = param_1[3];
  lVar9 = param_1[2];
  uVar3 = param_1[4];
  uVar8 = param_2[1];
  uVar6 = *param_2;
  uVar12 = param_2[3];
  lVar10 = param_2[2];
  uVar4 = param_2[4];
  local_110 = uVar6;
  uStack_108 = uVar8;
  local_100 = lVar10;
  uStack_f8 = uVar12;
  local_f0 = uVar4;
  local_e0 = uVar5;
  uStack_d8 = uVar7;
  local_d0 = lVar9;
  uStack_c8 = uVar11;
  local_c0 = uVar3;
  if (lVar9 == 0) {
    if (lVar10 != 0) goto LAB_100466a80;
    FUN_100466cc8(&local_e0,&local_90);
    FUN_100466cc8(&local_110,&local_90);
    FUN_100139ca0(uVar5,uVar7,0,uVar11,uVar3);
  }
  else {
    if (lVar10 == 0) {
LAB_100466a80:
      FUN_100466cc8(&local_e0,&local_90);
      FUN_100466cc8(&local_110,&local_90);
      FUN_100139ca0(uVar5,uVar7,lVar9,uVar11,uVar3);
      FUN_100139ca0(uVar6,uVar8,lVar10,uVar12,uVar4);
      uVar1 = 0;
      goto LAB_100466b14;
    }
    local_b0 = (byte)uVar7 & 1;
    local_88 = (byte)uVar8 & 1;
    local_b8 = uVar5;
    local_a8 = lVar9;
    uStack_a0 = uVar11;
    local_98 = uVar3;
    local_90 = uVar6;
    local_80 = lVar10;
    uStack_78 = uVar12;
    local_70 = uVar4;
    FUN_100466cc8(&local_e0,auStack_138);
    FUN_100466cc8(&local_110,auStack_138);
    FUN_100139c68(uVar5,uVar7,lVar9,uVar11,uVar3);
    puVar2 = &local_b8;
    FUN_1004668ac(puVar2,&local_90);
    FUN_100139ca0(uVar6,uVar8,lVar10,uVar12,uVar4);
    FUN_100139ca0(uVar5,uVar7,lVar9,uVar11,uVar3);
    FUN_100139ca0(uVar5,uVar7,lVar9,uVar11,uVar3);
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_100466b14;
    }
  }
  uVar3 = param_1[5];
  FUN_1000094a4(uVar3,param_1[6],param_2[5],param_2[6]);
  uVar1 = (uint)uVar3;
LAB_100466b14:
  return uVar1 & 1;
}

