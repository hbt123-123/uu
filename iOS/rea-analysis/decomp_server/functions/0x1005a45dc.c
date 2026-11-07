// rea decompile_all
// name: FUN_1005a45dc
// address: 0x1005a45dc
// body: available
// range: 0x1005a45dc-0x1005a46f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005a45dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [56];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined6 uStack_78;
  undefined2 local_72;
  undefined6 uStack_70;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == *(long *)(param_4 + 0x10)) {
    if (lVar4 != 0 && param_1 != param_4) {
      puVar5 = (undefined8 *)(param_1 + 0x20);
      puVar6 = (undefined8 *)(param_4 + 0x20);
      do {
        uStack_d8 = puVar5[1];
        local_e0 = *puVar5;
        uStack_c8 = puVar5[3];
        uStack_d0 = puVar5[2];
        local_c0 = puVar5[4];
        uStack_b8 = (undefined6)puVar5[5];
        uStack_b2 = (undefined2)*(undefined8 *)((long)puVar5 + 0x2e);
        uStack_b0 = (undefined6)((ulong)*(undefined8 *)((long)puVar5 + 0x2e) >> 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005a46f8);
          (*pcVar1)();
        }
        uStack_98 = puVar6[1];
        local_a0 = *puVar6;
        uStack_88 = puVar6[3];
        local_90 = puVar6[2];
        uStack_80 = puVar6[4];
        uStack_78 = (undefined6)puVar6[5];
        local_72 = (undefined2)*(undefined8 *)((long)puVar6 + 0x2e);
        uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)puVar6 + 0x2e) >> 0x10);
        FUN_1005b2638(&local_e0,auStack_118);
        FUN_1005b2638(&local_a0,auStack_118);
        puVar3 = &local_e0;
        FUN_1005a4488(puVar3,&local_a0);
        FUN_1005b266c(&local_a0);
        FUN_1005b266c(&local_e0);
        if (((ulong)puVar3 & 1) == 0) goto LAB_1005a46cc;
        puVar6 = puVar6 + 7;
        puVar5 = puVar5 + 7;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    FUN_1000094a4(param_2,param_3,param_5,param_6);
    uVar2 = (uint)param_2;
  }
  else {
LAB_1005a46cc:
    uVar2 = 0;
  }
  return uVar2 & 1;
}

