// rea decompile_all
// name: FUN_1005706c0
// address: 0x1005706c0
// body: available
// range: 0x1005706c0-0x1005707f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005706c0(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_2a8 [200];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == *(long *)(param_2 + 0x10)) {
    if ((lVar5 == 0) || (param_1 == param_2)) {
      uVar4 = 1;
    }
    else {
      puVar6 = (undefined8 *)(param_1 + 0x20);
      puVar7 = (undefined8 *)(param_2 + 0x20);
      do {
        uStack_138 = puVar6[0x15];
        local_140 = puVar6[0x14];
        uStack_128 = puVar6[0x17];
        uStack_130 = puVar6[0x16];
        local_120 = *(undefined1 *)(puVar6 + 0x18);
        uStack_178 = puVar6[0xd];
        local_180 = puVar6[0xc];
        uStack_168 = puVar6[0xf];
        uStack_170 = puVar6[0xe];
        uStack_158 = puVar6[0x11];
        local_160 = puVar6[0x10];
        uStack_148 = puVar6[0x13];
        uStack_150 = puVar6[0x12];
        uStack_1b8 = puVar6[5];
        local_1c0 = puVar6[4];
        uStack_1a8 = puVar6[7];
        uStack_1b0 = puVar6[6];
        uStack_198 = puVar6[9];
        local_1a0 = puVar6[8];
        uStack_188 = puVar6[0xb];
        uStack_190 = puVar6[10];
        uStack_1d8 = puVar6[1];
        local_1e0 = *puVar6;
        uStack_1c8 = puVar6[3];
        uStack_1d0 = puVar6[2];
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005707f8);
          (*pcVar1)();
        }
        uStack_68 = puVar7[0x15];
        local_70 = puVar7[0x14];
        uStack_58 = puVar7[0x17];
        uStack_60 = puVar7[0x16];
        local_50 = *(undefined1 *)(puVar7 + 0x18);
        uStack_a8 = puVar7[0xd];
        local_b0 = puVar7[0xc];
        uStack_98 = puVar7[0xf];
        uStack_a0 = puVar7[0xe];
        uStack_88 = puVar7[0x11];
        local_90 = puVar7[0x10];
        uStack_78 = puVar7[0x13];
        uStack_80 = puVar7[0x12];
        uStack_e8 = puVar7[5];
        local_f0 = puVar7[4];
        uStack_d8 = puVar7[7];
        uStack_e0 = puVar7[6];
        uStack_c8 = puVar7[9];
        local_d0 = puVar7[8];
        uStack_b8 = puVar7[0xb];
        uStack_c0 = puVar7[10];
        uStack_108 = puVar7[1];
        local_110 = *puVar7;
        uStack_f8 = puVar7[3];
        uStack_100 = puVar7[2];
        FUN_1005b2528(&local_1e0,auStack_2a8);
        FUN_1005b2528(&local_110,auStack_2a8);
        puVar3 = &local_1e0;
        FUN_1005a54ac(puVar3,&local_110);
        uVar4 = (uint)puVar3;
        FUN_1005b255c(&local_110);
        FUN_1005b255c(&local_1e0);
        if (((ulong)puVar3 & 1) == 0) break;
        puVar7 = puVar7 + 0x19;
        puVar6 = puVar6 + 0x19;
        bVar2 = lVar5 != 1;
        lVar5 = lVar5 + -1;
      } while (bVar2);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 1;
}

