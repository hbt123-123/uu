// rea decompile_all
// name: FUN_1000488d4
// address: 0x1000488d4
// body: available
// range: 0x1000488d4-0x100048ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000488d4(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint *puVar4;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar11 = lVar9 + 3;
  if (-1 < lVar9) {
    lVar11 = lVar9;
  }
  lVar11 = lVar11 >> 2;
  lVar10 = (long)param_3 - (long)param_2;
  lVar12 = lVar10 + 3;
  if (-1 < lVar10) {
    lVar12 = lVar10;
  }
  lVar12 = lVar12 >> 2;
  if (lVar11 < lVar12) {
    if ((param_4 != param_1) || (param_1 + lVar11 <= param_4)) {
      _memmove(param_4,param_1,lVar11 << 2);
    }
    puVar4 = param_4 + lVar11;
    puVar7 = param_1;
    if (3 < lVar9) {
      do {
        if (param_3 <= param_2) break;
        uVar2 = *param_2;
        if (uVar2 < *param_4) {
          puVar8 = param_4;
          puVar5 = param_2 + 1;
          puVar6 = param_2;
        }
        else {
          uVar2 = *param_4;
          puVar8 = param_4 + 1;
          puVar5 = param_2;
          puVar6 = param_4;
        }
        param_2 = puVar5;
        param_4 = puVar8;
        if (puVar7 != puVar6) {
          *puVar7 = uVar2;
        }
        puVar7 = puVar7 + 1;
      } while (param_4 < puVar4);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar12 <= param_4)) {
      _memmove(param_4,param_2,lVar12 << 2);
    }
    puVar6 = param_4 + lVar12;
    puVar4 = puVar6;
    puVar7 = param_2;
    if (3 < lVar10) {
      while (puVar4 = puVar6, puVar7 = param_2, param_1 < param_2) {
        puVar5 = param_2 + -1;
        puVar8 = param_3;
        while( true ) {
          param_3 = puVar8 + -1;
          puVar4 = puVar6 + -1;
          if (*puVar4 < *puVar5) break;
          if (puVar8 != puVar6) {
            *param_3 = *puVar4;
          }
          puVar6 = puVar4;
          puVar8 = param_3;
          if (puVar4 <= param_4) goto LAB_100048a64;
        }
        if (puVar8 != param_2) {
          *param_3 = *puVar5;
        }
        puVar4 = puVar6;
        puVar7 = puVar5;
        param_2 = puVar5;
        if (puVar6 <= param_4) break;
      }
    }
  }
LAB_100048a64:
  uVar3 = (long)puVar4 - (long)param_4;
  uVar1 = uVar3 + 3;
  if (-1 < (long)uVar3) {
    uVar1 = uVar3;
  }
  if ((puVar7 != param_4) || ((uint *)((long)param_4 + (uVar1 & 0xfffffffffffffffc)) <= puVar7)) {
    _memmove(puVar7,param_4,((long)uVar1 >> 2) << 2);
  }
  return 1;
}

