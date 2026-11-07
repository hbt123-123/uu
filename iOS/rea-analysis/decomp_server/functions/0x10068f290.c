// rea decompile_all
// name: FUN_10068f290
// address: 0x10068f290
// body: available
// range: 0x10068f290-0x10068f61f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010068f32c) */
/* WARNING: Removing unreachable block (ram,0x00010068f4d8) */

void FUN_10068f290(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  undefined1 local_1c0 [56];
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [32];
  undefined1 local_148 [49];
  char local_117;
  undefined1 local_110 [49];
  char local_df;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined8 local_a0 [2];
  undefined8 local_90;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  
  FUN_10003e8bc(param_2,auStack_168);
  FUN_10003e8bc(auStack_168,auStack_188);
  puVar5 = PTR___sypN_100995e88;
  puVar6 = &local_d8;
  _swift_dynamicCast(puVar6,auStack_188,PTR___sypN_100995e88 + 8,
                     PTR___s10Foundation4DataVN_1009961e8,0);
  if ((int)puVar6 == 0) {
    FUN_10003e8bc(auStack_168,local_a0);
    FUN_10068e2dc(local_110,local_a0);
    FUN_10003f094(auStack_168);
    cVar1 = local_df;
  }
  else {
    FUN_100008184(local_d8,uStack_d0);
    FUN_10068e3b8(local_148,local_d8,uStack_d0,0);
    FUN_100006cdc(local_d8,uStack_d0);
    FUN_10003f094(auStack_168);
    FUN_100006cdc(local_d8,uStack_d0);
    cVar1 = local_117;
  }
  FUN_10003f094(auStack_188);
  FUN_10068e548(local_1c0);
  if (cVar1 == '\x06') {
    FUN_10003f094(param_2);
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    FUN_10003e8bc(param_2,auStack_1e0);
    FUN_10003e8bc(auStack_1e0,auStack_200);
    puVar6 = &local_210;
    _swift_dynamicCast(puVar6,auStack_200,puVar5 + 8,PTR___s10Foundation4DataVN_1009961e8,0);
    if ((int)puVar6 == 0) {
      puVar6 = local_a0;
      FUN_10003e8bc(auStack_1e0,&local_d8);
      FUN_10068e2dc(local_a0,&local_d8);
      FUN_10003f094(param_2);
      FUN_10003f094(auStack_1e0);
      uVar8 = local_78;
      uVar9 = local_90;
      uVar2 = local_6e;
      uVar3 = local_6f;
      uVar4 = local_70;
    }
    else {
      FUN_100008184(local_210,uStack_208);
      FUN_10068e3b8(&local_d8,local_210,uStack_208,0);
      FUN_100006cdc(local_210,uStack_208);
      FUN_100006cdc(local_210,uStack_208);
      FUN_10003f094(param_2);
      FUN_10003f094(auStack_1e0);
      puVar6 = &local_d8;
      uVar8 = local_b0;
      uVar9 = local_c8;
      uVar2 = local_a6;
      uVar3 = local_a7;
      uVar4 = local_a8;
    }
    uVar13 = puVar6[4];
    uVar12 = puVar6[3];
    uVar11 = puVar6[1];
    uVar10 = *puVar6;
    FUN_10003f094(auStack_200);
    uVar7 = (uint)CONCAT12(uVar2,CONCAT11(uVar3,uVar4));
  }
  param_1[1] = uVar11;
  *param_1 = uVar10;
  param_1[2] = uVar9;
  param_1[4] = uVar13;
  param_1[3] = uVar12;
  param_1[5] = uVar8;
  *(short *)(param_1 + 6) = (short)uVar7;
  *(char *)((long)param_1 + 0x32) = (char)(uVar7 >> 0x10);
  return;
}

