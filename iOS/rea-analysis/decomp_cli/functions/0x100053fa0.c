// rea decompile_all
// name: FUN_100053fa0
// address: 0x100053fa0
// body: available
// range: 0x100053fa0-0x10005406f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100053fa0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_1a8 [168];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  
  lVar4 = *(long *)(param_2 + 0x10);
  uVar3 = (ulong)(lVar4 == 0);
  if (lVar4 != 0) {
    lVar2 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x20);
    do {
      uStack_78 = puVar5[0x11];
      local_80 = puVar5[0x10];
      uStack_68 = puVar5[0x13];
      uStack_70 = puVar5[0x12];
      local_60 = puVar5[0x14];
      uStack_b8 = puVar5[9];
      local_c0 = puVar5[8];
      uStack_a8 = puVar5[0xb];
      uStack_b0 = puVar5[10];
      uStack_98 = puVar5[0xd];
      local_a0 = puVar5[0xc];
      uStack_88 = puVar5[0xf];
      uStack_90 = puVar5[0xe];
      uStack_f8 = puVar5[1];
      local_100 = *puVar5;
      uStack_e8 = puVar5[3];
      uStack_f0 = puVar5[2];
      uStack_d8 = puVar5[5];
      local_e0 = puVar5[4];
      uStack_c8 = puVar5[7];
      uStack_d0 = puVar5[6];
      FUN_100052a44(&local_100,auStack_1a8);
      puVar1 = &local_100;
      thunk_FUN_1000baeb4(puVar1,param_1);
      FUN_100052a80(&local_100);
      if (((ulong)puVar1 & 1) != 0) goto LAB_10005404c;
      lVar2 = lVar2 + 1;
      puVar5 = puVar5 + 0x15;
      uVar3 = (ulong)(lVar4 == lVar2);
    } while (lVar4 != lVar2);
  }
  lVar2 = 0;
LAB_10005404c:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = lVar2;
  return auVar6;
}

