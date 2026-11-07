// rea decompile_all
// name: FUN_1005bf7f4
// address: 0x1005bf7f4
// body: available
// range: 0x1005bf7f4-0x1005bf913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005bf7f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  undefined1 auStack_1e0 [128];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uStack_e8 = unaff_x20[5];
    local_f0 = unaff_x20[4];
    uStack_d8 = unaff_x20[7];
    uStack_e0 = unaff_x20[6];
    local_d0 = unaff_x20[8];
    uStack_108 = unaff_x20[1];
    local_110 = *unaff_x20;
    uStack_f8 = unaff_x20[3];
    uStack_100 = unaff_x20[2];
    puVar2 = (undefined8 *)(param_1 + 0x20);
    while( true ) {
      lVar1 = lVar1 + -1;
      uStack_78 = puVar2[9];
      local_80 = puVar2[8];
      uStack_68 = puVar2[0xb];
      uStack_70 = puVar2[10];
      uStack_58 = puVar2[0xd];
      local_60 = puVar2[0xc];
      uStack_48 = puVar2[0xf];
      uStack_50 = puVar2[0xe];
      uStack_b8 = puVar2[1];
      local_c0 = *puVar2;
      uStack_a8 = puVar2[3];
      uStack_b0 = puVar2[2];
      uStack_98 = puVar2[5];
      local_a0 = puVar2[4];
      uStack_88 = puVar2[7];
      uStack_90 = puVar2[6];
      local_120 = local_d0;
      uStack_138 = uStack_e8;
      local_140 = local_f0;
      uStack_128 = uStack_d8;
      uStack_130 = uStack_e0;
      uStack_158 = uStack_108;
      local_160 = local_110;
      uStack_148 = uStack_f8;
      uStack_150 = uStack_100;
      FUN_1005b2588(&local_c0,auStack_1e0);
      FUN_1005c1904(&local_160);
      if (unaff_x21 != 0) {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
      FUN_1005b25c4(&local_c0);
      if (lVar1 == 0) break;
      uStack_e8 = uStack_138;
      local_f0 = local_140;
      uStack_d8 = uStack_128;
      uStack_e0 = uStack_130;
      local_d0 = local_120;
      uStack_108 = uStack_158;
      local_110 = local_160;
      uStack_f8 = uStack_148;
      uStack_100 = uStack_150;
      puVar2 = puVar2 + 0x10;
    }
    unaff_x20[5] = uStack_138;
    unaff_x20[4] = local_140;
    unaff_x20[7] = uStack_128;
    unaff_x20[6] = uStack_130;
    unaff_x20[8] = local_120;
    unaff_x20[1] = uStack_158;
    *unaff_x20 = local_160;
    unaff_x20[3] = uStack_148;
    unaff_x20[2] = uStack_150;
  }
  return;
}

