// rea decompile_all
// name: thunk_FUN_1005ca850
// address: 0x1005ca84c
// body: available
// range: 0x1005ca84c-0x1005ca84f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint thunk_FUN_1005ca850(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = *param_1;
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar2 = param_2[1];
  if ((long)uVar5 < 4) {
    if ((long)uVar5 < 2) {
      if (uVar5 == 0) {
        if (uVar2 == 0) {
          FUN_1005cad44(lVar1,0);
          uVar5 = 0;
          goto LAB_1005caa68;
        }
        goto LAB_1005ca9f4;
      }
      if (uVar5 == 1) {
        if (uVar2 == 1) {
          FUN_1005cad44(lVar1,1);
          FUN_1005cad44(lVar3,1);
          return 1;
        }
        goto LAB_1005ca9f4;
      }
    }
    else {
      if (uVar5 == 2) {
        if (uVar2 != 2) goto LAB_1005ca9f4;
        FUN_1005cad44(lVar1,2);
        uVar5 = 2;
        goto LAB_1005caa68;
      }
      if (uVar5 == 3) {
        if (uVar2 != 3) goto LAB_1005ca9f4;
        FUN_1005cad44(lVar1,3);
        uVar5 = 3;
        goto LAB_1005caa68;
      }
    }
  }
  else if ((long)uVar5 < 6) {
    if (uVar5 == 4) {
      if (uVar2 != 4) goto LAB_1005ca9f4;
      FUN_1005cad44(lVar1,4);
      uVar5 = 4;
      goto LAB_1005caa68;
    }
    if (uVar5 == 5) {
      if (uVar2 != 5) goto LAB_1005ca9f4;
      FUN_1005cad44(lVar1,5);
      uVar5 = 5;
      goto LAB_1005caa68;
    }
  }
  else {
    if (uVar5 == 6) {
      if (uVar2 != 6) goto LAB_1005ca9f4;
      FUN_1005cad44(lVar1,6);
      uVar5 = 6;
      goto LAB_1005caa68;
    }
    if (uVar5 == 7) {
      if (uVar2 != 7) goto LAB_1005ca9f4;
      FUN_1005cad44(lVar1,7);
      uVar5 = 7;
      goto LAB_1005caa68;
    }
    if (uVar5 == 8) {
      if (uVar2 != 8) goto LAB_1005ca9f4;
      FUN_1005cad44(lVar1,8);
      uVar5 = 8;
      goto LAB_1005caa68;
    }
  }
  if (uVar2 < 9) {
LAB_1005ca9f4:
    FUN_1005cad30(lVar3,uVar2);
    FUN_1005cad30(lVar1,uVar5);
    FUN_1005cad44(lVar1,uVar5);
    FUN_1005cad44(lVar3,uVar2);
    return 0;
  }
  if ((lVar1 != lVar3) || (uVar5 != uVar2)) {
    lVar4 = lVar1;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar1,uVar5,lVar3,uVar2,0);
    FUN_1005cad30(lVar3,uVar2);
    FUN_1005cad30(lVar1,uVar5);
    FUN_1005cad44(lVar1,uVar5);
    FUN_1005cad44(lVar3,uVar2);
    return (uint)lVar4 & 1;
  }
  FUN_1005cad30(lVar1,uVar5);
  FUN_1005cad30(lVar1,uVar5);
  FUN_1005cad44(lVar1,uVar5);
  lVar3 = lVar1;
LAB_1005caa68:
  FUN_1005cad44(lVar3,uVar5);
  return 1;
}

