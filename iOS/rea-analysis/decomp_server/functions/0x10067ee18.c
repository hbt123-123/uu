// rea decompile_all
// name: FUN_10067ee18
// address: 0x10067ee18
// body: available
// range: 0x10067ee18-0x10067efd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010067eea4) */

void FUN_10067ee18(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
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
  
  FUN_10003e8bc(param_2,auStack_e8);
  puVar4 = &local_f8;
  _swift_dynamicCast(puVar4,auStack_e8,PTR___sypN_100995e88 + 8,PTR___s10Foundation4DataVN_1009961e8
                     ,0);
  if ((int)puVar4 == 0) {
    FUN_10003e8bc(param_2,&local_c8);
    FUN_10068e2dc(&local_90,&local_c8);
    FUN_10003f094(param_2);
    uStack_128 = uStack_70;
    local_130 = local_78;
    uVar5 = local_68;
    uVar6 = local_80;
    uVar7 = local_90;
    uVar8 = uStack_88;
    uVar1 = local_5e;
    uVar2 = local_5f;
    uVar3 = local_60;
  }
  else {
    FUN_100008184(local_f8,uStack_f0);
    FUN_10068e3b8(&local_c8,local_f8,uStack_f0,0);
    FUN_100006cdc(local_f8,uStack_f0);
    FUN_10003f094(param_2);
    FUN_100006cdc(local_f8,uStack_f0);
    uStack_128 = uStack_a8;
    local_130 = local_b0;
    uVar5 = local_a0;
    uVar6 = local_b8;
    uVar7 = local_c8;
    uVar8 = uStack_c0;
    uVar1 = local_96;
    uVar2 = local_97;
    uVar3 = local_98;
  }
  FUN_10003f094(auStack_e8);
  param_1[1] = uVar8;
  *param_1 = uVar7;
  param_1[2] = uVar6;
  param_1[4] = uStack_128;
  param_1[3] = local_130;
  param_1[5] = uVar5;
  *(undefined1 *)(param_1 + 6) = uVar3;
  *(undefined1 *)((long)param_1 + 0x31) = uVar2;
  *(undefined1 *)((long)param_1 + 0x32) = uVar1;
  return;
}

