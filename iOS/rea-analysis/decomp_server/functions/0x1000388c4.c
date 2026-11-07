// rea decompile_all
// name: FUN_1000388c4
// address: 0x1000388c4
// body: available
// range: 0x1000388c4-0x100038ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1000388c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar3;
  
  lVar7 = (long)param_2 - (long)param_1;
  lVar9 = lVar7 + 7;
  if (-1 < lVar7) {
    lVar9 = lVar7;
  }
  lVar9 = lVar9 >> 3;
  lVar8 = (long)param_3 - (long)param_2;
  lVar10 = lVar8 + 7;
  if (-1 < lVar8) {
    lVar10 = lVar8;
  }
  lVar10 = lVar10 >> 3;
  if (lVar9 < lVar10) {
    if ((param_4 != param_1) || (param_1 + lVar9 <= param_4)) {
      _memmove(param_4,param_1,lVar9 << 3);
    }
    puVar3 = param_4 + lVar9;
    puVar5 = param_1;
    if (7 < lVar7) {
      do {
        if (param_3 <= param_2) break;
        if (*(uint *)((long)param_2 + 4) < *(uint *)((long)param_4 + 4)) {
          puVar4 = param_4;
          puVar6 = param_2;
          param_2 = param_2 + 1;
        }
        else {
          puVar4 = param_4 + 1;
          puVar6 = param_4;
        }
        param_4 = puVar4;
        if (puVar5 != puVar6) {
          *puVar5 = *puVar6;
        }
        puVar5 = puVar5 + 1;
      } while (param_4 < puVar3);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar10 <= param_4)) {
      _memmove(param_4,param_2,lVar10 << 3);
    }
    puVar3 = param_4 + lVar10;
    puVar5 = param_2;
    if ((7 < lVar8) && (param_1 < param_2)) {
      do {
        while (puVar6 = param_3 + -1, *(uint *)((long)puVar3 + -4) < *(uint *)((long)param_2 + -4))
        {
          puVar5 = param_2 + -1;
          if (param_3 != param_2) {
            *puVar6 = *puVar5;
          }
          if ((puVar3 <= param_4) || (param_3 = puVar6, param_2 = puVar5, puVar5 <= param_1))
          goto LAB_100038a64;
        }
        puVar4 = puVar3 + -1;
        if (param_3 != puVar3) {
          *puVar6 = *puVar4;
        }
        puVar3 = puVar4;
        puVar5 = param_2;
        param_3 = puVar6;
      } while (param_4 < puVar4);
    }
  }
LAB_100038a64:
  uVar2 = (long)puVar3 - (long)param_4;
  uVar1 = uVar2 + 7;
  if (-1 < (long)uVar2) {
    uVar1 = uVar2;
  }
  if ((puVar5 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= puVar5)) {
    _memmove(puVar5,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}

