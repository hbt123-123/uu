// rea decompile_all
// name: FUN_10008e1e8
// address: 0x10008e1e8
// body: available
// range: 0x10008e1e8-0x10008e367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10008e1e8(long *param_1,void *param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_210 [208];
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
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar3 = param_4;
  if (param_2 == (void *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_3;
    if (param_3 != 0) {
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10008e368);
        (*pcVar2)();
      }
      lVar1 = param_5;
      if (param_5 <= param_4) {
        lVar1 = param_4;
      }
      lVar4 = param_5 - param_4;
      lVar3 = param_5;
      if (lVar4 != 0) {
        lVar6 = 0;
        puVar5 = (undefined8 *)(param_6 + param_4 * 0xd0 + 0x20);
        do {
          if (lVar1 - param_4 == lVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10008e35c);
            (*pcVar2)();
          }
          if (param_4 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10008e360);
            (*pcVar2)();
          }
          if (*(ulong *)(param_6 + 0x10) <= (ulong)(param_4 + lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10008e364);
            (*pcVar2)();
          }
          uStack_98 = puVar5[0x15];
          local_a0 = puVar5[0x14];
          uStack_88 = puVar5[0x17];
          uStack_90 = puVar5[0x16];
          uStack_78 = puVar5[0x19];
          local_80 = puVar5[0x18];
          uStack_d8 = puVar5[0xd];
          local_e0 = puVar5[0xc];
          uStack_c8 = puVar5[0xf];
          uStack_d0 = puVar5[0xe];
          uStack_b8 = puVar5[0x11];
          local_c0 = puVar5[0x10];
          uStack_a8 = puVar5[0x13];
          uStack_b0 = puVar5[0x12];
          uStack_118 = puVar5[5];
          local_120 = puVar5[4];
          uStack_108 = puVar5[7];
          uStack_110 = puVar5[6];
          uStack_f8 = puVar5[9];
          local_100 = puVar5[8];
          uStack_e8 = puVar5[0xb];
          uStack_f0 = puVar5[10];
          uStack_138 = puVar5[1];
          local_140 = *puVar5;
          uStack_128 = puVar5[3];
          uStack_130 = puVar5[2];
          _memmove(param_2,puVar5,0xd0);
          if (param_3 + -1 == lVar6) {
            FUN_10006ff98(&local_140,auStack_210);
            lVar3 = param_4 + lVar6 + 1;
            lVar4 = param_3;
            break;
          }
          param_2 = (void *)((long)param_2 + 0xd0);
          FUN_10006ff98(&local_140,auStack_210);
          lVar6 = lVar6 + 1;
          puVar5 = puVar5 + 0x1a;
        } while ((param_4 - param_5) + lVar6 != 0);
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = param_7;
  param_1[4] = lVar3;
  return lVar4;
}

