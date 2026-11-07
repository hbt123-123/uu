// rea decompile_all
// name: FUN_1000d2144
// address: 0x1000d2144
// body: available
// range: 0x1000d2144-0x1000d22df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d2144(long param_1,long param_2,long param_3,long *param_4,undefined8 *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if (param_3 != param_2) {
    lVar9 = *param_4;
    puVar4 = param_5;
    _swift_retain(param_5);
    puVar1 = PTR___sSSN_1009957f8;
    puVar7 = (undefined8 *)(lVar9 + param_3 * 0x48 + -0x48);
    param_1 = param_1 - param_3;
    puVar8 = puVar7;
    lVar6 = param_1;
LAB_1000d21cc:
    do {
      if (*(char *)(puVar7 + 0xf) == *(char *)(puVar7 + 6)) {
        local_c0 = *puVar7;
        uStack_b8 = puVar7[1];
        local_b0 = puVar7[9];
        uStack_a8 = puVar7[10];
        FUN_10009ff0c();
        puVar5 = &local_c0;
        __sSy10FoundationE24localizedStandardCompareySo18NSComparisonResultVqd__SyRd__lF
                  (puVar5,puVar1,puVar1,puVar4,puVar4);
        if (puVar5 == (undefined8 *)0xffffffffffffffff) goto LAB_1000d221c;
      }
      else {
        puVar5 = puVar4;
        if (*(char *)(puVar7 + 0xf) != '\0') {
LAB_1000d221c:
          if (lVar9 == 0) {
            _swift_release(param_5);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d22e0);
            (*pcVar2)();
          }
          uStack_98 = puVar7[0xc];
          local_a0 = puVar7[0xb];
          uStack_88 = puVar7[0xe];
          local_90 = puVar7[0xd];
          uStack_78 = puVar7[0x10];
          local_80 = puVar7[0xf];
          local_70 = puVar7[0x11];
          uStack_a8 = puVar7[10];
          local_b0 = puVar7[9];
          puVar7[0xc] = puVar7[3];
          puVar7[0xb] = puVar7[2];
          puVar7[0xe] = puVar7[5];
          puVar7[0xd] = puVar7[4];
          puVar7[0x10] = puVar7[7];
          puVar7[0xf] = puVar7[6];
          puVar7[0x11] = puVar7[8];
          puVar7[10] = puVar7[1];
          puVar7[9] = *puVar7;
          puVar7[1] = uStack_a8;
          *puVar7 = local_b0;
          puVar7[8] = local_70;
          puVar7[5] = uStack_88;
          puVar7[4] = local_90;
          puVar7[7] = uStack_78;
          puVar7[6] = local_80;
          puVar7[3] = uStack_98;
          puVar7[2] = local_a0;
          puVar7 = puVar7 + -9;
          bVar3 = param_1 != -1;
          param_1 = param_1 + 1;
          puVar4 = puVar5;
          if (bVar3) goto LAB_1000d21cc;
        }
      }
      param_3 = param_3 + 1;
      puVar7 = puVar8 + 9;
      param_1 = lVar6 + -1;
      puVar4 = puVar5;
      puVar8 = puVar7;
      lVar6 = param_1;
    } while (param_3 != param_2);
    _swift_release(param_5);
  }
  _swift_release(param_5);
  return;
}

