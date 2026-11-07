// rea decompile_all
// name: FUN_10008dfb4
// address: 0x10008dfb4
// body: available
// range: 0x10008dfb4-0x10008e0d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10008dfb4(long *param_1,void *param_2,ulong param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_200 [208];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  
  if (param_2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_3;
    if (param_3 != 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10008e0d4);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_4 + 0x10);
      if (uVar3 != 0) {
        uVar4 = 0;
        puVar2 = (undefined8 *)(param_4 + 0x20);
        do {
          if (*(ulong *)(param_4 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10008e0d0);
            (*pcVar1)();
          }
          uStack_88 = puVar2[0x15];
          local_90 = puVar2[0x14];
          uStack_78 = puVar2[0x17];
          uStack_80 = puVar2[0x16];
          uStack_68 = puVar2[0x19];
          local_70 = puVar2[0x18];
          uStack_c8 = puVar2[0xd];
          local_d0 = puVar2[0xc];
          uStack_b8 = puVar2[0xf];
          uStack_c0 = puVar2[0xe];
          uStack_a8 = puVar2[0x11];
          local_b0 = puVar2[0x10];
          uStack_98 = puVar2[0x13];
          uStack_a0 = puVar2[0x12];
          uStack_108 = puVar2[5];
          local_110 = puVar2[4];
          uStack_f8 = puVar2[7];
          uStack_100 = puVar2[6];
          uStack_e8 = puVar2[9];
          local_f0 = puVar2[8];
          uStack_d8 = puVar2[0xb];
          uStack_e0 = puVar2[10];
          uStack_128 = puVar2[1];
          local_130 = *puVar2;
          uStack_118 = puVar2[3];
          uStack_120 = puVar2[2];
          _memmove(param_2,puVar2,0xd0);
          if (param_3 - 1 == uVar4) {
            FUN_10006ff98(&local_130,auStack_200);
            uVar3 = param_3;
            break;
          }
          param_2 = (void *)((long)param_2 + 0xd0);
          FUN_10006ff98(&local_130,auStack_200);
          uVar4 = uVar4 + 1;
          puVar2 = puVar2 + 0x1a;
        } while (uVar3 != uVar4);
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = uVar3;
  return uVar3;
}

