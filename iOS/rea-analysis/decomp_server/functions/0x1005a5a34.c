// rea decompile_all
// name: FUN_1005a5a34
// address: 0x1005a5a34
// body: available
// range: 0x1005a5a34-0x1005a5ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005a5a34(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_2d8 [200];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined1 local_80;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == *(long *)(param_5 + 0x10)) {
    if (lVar5 != 0 && param_1 != param_5) {
      puVar6 = (undefined8 *)(param_1 + 0x20);
      puVar4 = (undefined8 *)(param_5 + 0x20);
      do {
        uStack_168 = puVar6[0x15];
        local_170 = puVar6[0x14];
        uStack_158 = puVar6[0x17];
        uStack_160 = puVar6[0x16];
        local_150 = *(undefined1 *)(puVar6 + 0x18);
        uStack_1a8 = puVar6[0xd];
        local_1b0 = puVar6[0xc];
        uStack_198 = puVar6[0xf];
        uStack_1a0 = puVar6[0xe];
        uStack_188 = puVar6[0x11];
        local_190 = puVar6[0x10];
        uStack_178 = puVar6[0x13];
        uStack_180 = puVar6[0x12];
        uStack_1e8 = puVar6[5];
        local_1f0 = puVar6[4];
        uStack_1d8 = puVar6[7];
        uStack_1e0 = puVar6[6];
        uStack_1c8 = puVar6[9];
        local_1d0 = puVar6[8];
        uStack_1b8 = puVar6[0xb];
        uStack_1c0 = puVar6[10];
        uStack_208 = puVar6[1];
        local_210 = *puVar6;
        uStack_1f8 = puVar6[3];
        uStack_200 = puVar6[2];
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005a5ba8);
          (*pcVar1)();
        }
        uStack_98 = puVar4[0x15];
        local_a0 = puVar4[0x14];
        uStack_88 = puVar4[0x17];
        uStack_90 = puVar4[0x16];
        local_80 = *(undefined1 *)(puVar4 + 0x18);
        uStack_d8 = puVar4[0xd];
        local_e0 = puVar4[0xc];
        uStack_c8 = puVar4[0xf];
        uStack_d0 = puVar4[0xe];
        uStack_b8 = puVar4[0x11];
        local_c0 = puVar4[0x10];
        uStack_a8 = puVar4[0x13];
        uStack_b0 = puVar4[0x12];
        uStack_118 = puVar4[5];
        local_120 = puVar4[4];
        uStack_108 = puVar4[7];
        uStack_110 = puVar4[6];
        uStack_f8 = puVar4[9];
        local_100 = puVar4[8];
        uStack_e8 = puVar4[0xb];
        uStack_f0 = puVar4[10];
        uStack_138 = puVar4[1];
        local_140 = *puVar4;
        uStack_128 = puVar4[3];
        uStack_130 = puVar4[2];
        FUN_1005b2528(&local_210,auStack_2d8);
        FUN_1005b2528(&local_140,auStack_2d8);
        puVar3 = &local_210;
        FUN_1005a54ac(puVar3,&local_140);
        FUN_1005b255c(&local_140);
        FUN_1005b255c(&local_210);
        if (((ulong)puVar3 & 1) == 0) goto LAB_1005a5b7c;
        puVar4 = puVar4 + 0x19;
        puVar6 = puVar6 + 0x19;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    FUN_1000094a4(param_2,param_3,param_6,param_7);
    if ((param_2 & 1) != 0) {
      thunk_FUN_100511c8c(param_4,param_8);
      uVar2 = (uint)param_4;
      goto LAB_1005a5b80;
    }
  }
LAB_1005a5b7c:
  uVar2 = 0;
LAB_1005a5b80:
  return uVar2 & 1;
}

