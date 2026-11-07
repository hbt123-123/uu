// rea decompile_all
// name: FUN_1000d22e0
// address: 0x1000d22e0
// body: available
// range: 0x1000d22e0-0x1000d25e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1000d22e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x48;
  lVar2 = ((long)param_3 - (long)param_2) / 0x48;
  if (lVar1 < lVar2) {
    if ((param_4 != param_1) || (param_1 + lVar1 * 9 <= param_4)) {
      _memmove(param_4,param_1,lVar1 * 0x48);
    }
    puVar5 = param_5;
    _swift_retain(param_5);
    puVar3 = PTR___sSSN_1009957f8;
    puVar7 = param_4 + lVar1 * 9;
    puVar6 = param_1;
    if (0x47 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if (*(char *)(param_2 + 6) == *(char *)(param_4 + 6)) {
          local_80 = *param_4;
          uStack_78 = param_4[1];
          local_70 = *param_2;
          uStack_68 = param_2[1];
          FUN_10009ff0c();
          puVar4 = &local_80;
          __sSy10FoundationE24localizedStandardCompareySo18NSComparisonResultVqd__SyRd__lF
                    (puVar4,puVar3,puVar3,puVar5,puVar5);
          if (puVar4 == (undefined8 *)0xffffffffffffffff) goto LAB_1000d23b4;
LAB_1000d2404:
          puVar8 = param_4 + 9;
          puVar5 = puVar4;
          puVar4 = param_4;
        }
        else {
          puVar4 = puVar5;
          if (*(char *)(param_2 + 6) == '\0') goto LAB_1000d2404;
LAB_1000d23b4:
          puVar8 = param_4;
          puVar5 = puVar4;
          puVar4 = param_2;
          param_2 = param_2 + 9;
        }
        param_4 = puVar8;
        if (puVar6 != puVar4) {
          puVar5 = _memmove(puVar6,puVar4,0x48);
        }
        puVar6 = puVar6 + 9;
      } while (param_4 < puVar7);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar2 * 9 <= param_4)) {
      _memmove(param_4,param_2,lVar2 * 0x48);
    }
    puVar5 = param_5;
    _swift_retain(param_5);
    puVar3 = PTR___sSSN_1009957f8;
    puVar4 = param_4 + lVar2 * 9;
    puVar7 = puVar4;
    puVar6 = param_2;
    if ((0x47 < (long)param_3 - (long)param_2) && (param_1 < param_2)) {
LAB_1000d2498:
      puVar9 = param_2 + -9;
      puVar8 = param_3;
      do {
        if (*(char *)(puVar4 + -3) == *(char *)(param_2 + -3)) {
          local_80 = param_2[-9];
          uStack_78 = param_2[-8];
          local_70 = puVar4[-9];
          uStack_68 = puVar4[-8];
          FUN_10009ff0c();
          puVar6 = &local_80;
          __sSy10FoundationE24localizedStandardCompareySo18NSComparisonResultVqd__SyRd__lF
                    (puVar6,puVar3,puVar3,puVar5,puVar5);
          puVar5 = puVar6;
          if (puVar6 == (undefined8 *)0xffffffffffffffff) goto LAB_1000d252c;
        }
        else if (*(char *)(puVar4 + -3) != '\0') goto LAB_1000d252c;
        puVar7 = puVar4 + -9;
        if (puVar4 != puVar8) {
          puVar5 = _memmove(puVar8 + -9,puVar7,0x48);
        }
        puVar4 = puVar7;
        puVar6 = param_2;
        puVar8 = puVar8 + -9;
        if (puVar7 <= param_4) break;
      } while( true );
    }
  }
LAB_1000d2568:
  lVar1 = ((long)puVar7 - (long)param_4) / 0x48;
  if ((puVar6 != param_4) || (param_4 + lVar1 * 9 <= puVar6)) {
    _memmove(puVar6,param_4,lVar1 * 0x48);
  }
  _swift_release_n(param_5,2);
  return 1;
LAB_1000d252c:
  param_3 = puVar8 + -9;
  if (puVar8 != param_2) {
    puVar5 = _memmove(param_3,puVar9,0x48);
  }
  puVar7 = puVar4;
  puVar6 = puVar9;
  if ((puVar4 <= param_4) || (param_2 = puVar9, puVar9 <= param_1)) goto LAB_1000d2568;
  goto LAB_1000d2498;
}

