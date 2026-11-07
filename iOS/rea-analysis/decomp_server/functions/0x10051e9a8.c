// rea decompile_all
// name: FUN_10051e9a8
// address: 0x10051e9a8
// body: available
// range: 0x10051e9a8-0x10051eb23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10051e9a8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  undefined1 auStack_98 [72];
  
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  uVar5 = *(ulong *)(*unaff_x20 + 0x18);
  if ((uVar5 <= uVar6) || ((param_4 & 1) == 0)) {
    if ((param_4 & 1) == 0) {
      if (uVar6 < uVar5) {
        FUN_10051eb24();
        goto LAB_10051eab8;
      }
      FUN_10051ec7c(uVar6 + 1);
    }
    else {
      FUN_10051eeb0(uVar6 + 1);
    }
    lVar8 = *unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_98,*(undefined8 *)(lVar8 + 0x28));
    puVar4 = auStack_98;
    __sSS4hash4intoys6HasherVz_tF(puVar4,param_1,param_2);
    __ss6HasherV9_finalizeSiyF();
    uVar6 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    param_3 = (ulong)puVar4 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 3 & 0xffffffffffffff8)) >> (param_3 & 0x3f) & 1) != 0
       ) {
      do {
        puVar1 = (ulong *)(*(long *)(lVar8 + 0x30) + param_3 * 0x10);
        uVar5 = *puVar1;
        uVar2 = puVar1[1];
        if ((uVar5 == param_1 && uVar2 == param_2) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar5,uVar2,param_1,param_2,0), (uVar5 & 1) != 0)) {
          __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10051eb24);
          (*pcVar3)();
        }
        param_3 = param_3 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 3 & 0xffffffffffffff8)) >> (param_3 & 0x3f) &
               1) != 0);
    }
  }
LAB_10051eab8:
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + (param_3 >> 6) * 8;
  *(ulong *)(lVar8 + 0x38) = *(ulong *)(lVar8 + 0x38) | 1L << (param_3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + param_3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10051eb14);
  (*pcVar3)();
}

