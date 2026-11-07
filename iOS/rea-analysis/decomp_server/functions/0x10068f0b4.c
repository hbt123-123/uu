// rea decompile_all
// name: FUN_10068f0b4
// address: 0x10068f0b4
// body: available
// range: 0x10068f0b4-0x10068f28f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010068f160) */

void FUN_10068f0b4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [32];
  undefined8 local_e8 [3];
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  
  puVar4 = &DAT_100ab9e98;
  FUN_100004bb4(&DAT_100ab9e98,&DAT_10084d520);
  local_e8[0] = param_2;
  local_d0 = puVar4;
  FUN_10003e8bc(local_e8,auStack_108);
  puVar5 = &local_118;
  _swift_dynamicCast(puVar5,auStack_108,PTR___sypN_100995e88 + 8,
                     PTR___s10Foundation4DataVN_1009961e8,0);
  if ((int)puVar5 == 0) {
    FUN_10003e8bc(local_e8,&local_c8);
    FUN_10068e2dc(&local_90,&local_c8);
    FUN_10003f094(local_e8);
    uStack_148 = uStack_70;
    local_150 = local_78;
    uVar6 = local_68;
    uVar7 = local_80;
    uVar8 = local_90;
    uVar9 = uStack_88;
    uVar1 = local_5e;
    uVar2 = local_5f;
    uVar3 = local_60;
  }
  else {
    FUN_100008184(local_118,uStack_110);
    FUN_10068e3b8(&local_c8,local_118,uStack_110,0);
    FUN_100006cdc(local_118,uStack_110);
    FUN_10003f094(local_e8);
    FUN_100006cdc(local_118,uStack_110);
    uStack_148 = uStack_a8;
    local_150 = local_b0;
    uVar6 = local_a0;
    uVar7 = local_b8;
    uVar8 = local_c8;
    uVar9 = uStack_c0;
    uVar1 = local_96;
    uVar2 = local_97;
    uVar3 = local_98;
  }
  FUN_10003f094(auStack_108);
  param_1[1] = uVar9;
  *param_1 = uVar8;
  param_1[2] = uVar7;
  param_1[4] = uStack_148;
  param_1[3] = local_150;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar3;
  *(undefined1 *)((long)param_1 + 0x31) = uVar2;
  *(undefined1 *)((long)param_1 + 0x32) = uVar1;
  return;
}

