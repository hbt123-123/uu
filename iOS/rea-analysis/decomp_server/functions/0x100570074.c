// rea decompile_all
// name: FUN_100570074
// address: 0x100570074
// body: available
// range: 0x100570074-0x10057019b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100570074(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_218 [152];
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
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
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
        uStack_118 = puVar6[0xd];
        local_120 = puVar6[0xc];
        uStack_108 = puVar6[0xf];
        uStack_110 = puVar6[0xe];
        uStack_f8 = puVar6[0x11];
        local_100 = puVar6[0x10];
        local_f0 = *(undefined1 *)(puVar6 + 0x12);
        uStack_158 = puVar6[5];
        local_160 = puVar6[4];
        uStack_148 = puVar6[7];
        uStack_150 = puVar6[6];
        uStack_138 = puVar6[9];
        local_140 = puVar6[8];
        uStack_128 = puVar6[0xb];
        uStack_130 = puVar6[10];
        uStack_178 = puVar6[1];
        local_180 = *puVar6;
        uStack_168 = puVar6[3];
        uStack_170 = puVar6[2];
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10057019c);
          (*pcVar1)();
        }
        uStack_78 = puVar7[0xd];
        local_80 = puVar7[0xc];
        uStack_68 = puVar7[0xf];
        uStack_70 = puVar7[0xe];
        uStack_58 = puVar7[0x11];
        local_60 = puVar7[0x10];
        local_50 = *(undefined1 *)(puVar7 + 0x12);
        uStack_b8 = puVar7[5];
        local_c0 = puVar7[4];
        uStack_a8 = puVar7[7];
        uStack_b0 = puVar7[6];
        uStack_98 = puVar7[9];
        local_a0 = puVar7[8];
        uStack_88 = puVar7[0xb];
        uStack_90 = puVar7[10];
        uStack_d8 = puVar7[1];
        local_e0 = *puVar7;
        uStack_c8 = puVar7[3];
        uStack_d0 = puVar7[2];
        FUN_1005b2e34(&local_180,auStack_218);
        FUN_1005b2e34(&local_e0,auStack_218);
        puVar3 = &local_180;
        FUN_1005a601c(puVar3,&local_e0);
        uVar4 = (uint)puVar3;
        FUN_1005b2e68(&local_e0);
        FUN_1005b2e68(&local_180);
        if (((ulong)puVar3 & 1) == 0) break;
        puVar7 = puVar7 + 0x13;
        puVar6 = puVar6 + 0x13;
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

