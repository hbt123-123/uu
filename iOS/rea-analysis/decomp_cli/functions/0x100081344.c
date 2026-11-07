// rea decompile_all
// name: FUN_100081344
// address: 0x100081344
// body: available
// range: 0x100081344-0x10008148b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100081344(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_4 = param_4 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 3 & 0xffffffffffffff8)) >> (param_4 & 0x3f) & 1) !=
      0) {
    lVar6 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar5 = (ulong *)(lVar6 + param_4 * 0x18);
      uVar2 = *puVar5;
      uVar7 = puVar5[2];
      if (((uVar2 == param_1 && puVar5[1] == param_2) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar2,puVar5[1],param_1,param_2,0), (uVar2 & 1) != 0)) &&
         (lVar10 = *(long *)(uVar7 + 0x10), lVar10 == *(long *)(param_3 + 0x10))) {
        if ((lVar10 == 0) || (uVar7 == param_3)) {
LAB_100081458:
          uVar3 = 1;
          goto LAB_100081464;
        }
        plVar8 = (long *)(uVar7 + 0x28);
        plVar9 = (long *)(param_3 + 0x28);
        while( true ) {
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10008148c);
            (*pcVar1)();
          }
          uVar2 = plVar8[-1];
          if ((uVar2 != plVar9[-1] || *plVar8 != *plVar9) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar2 & 1) == 0)) break;
          plVar8 = plVar8 + 2;
          plVar9 = plVar9 + 2;
          lVar10 = lVar10 + -1;
          if (lVar10 == 0) goto LAB_100081458;
        }
      }
      param_4 = param_4 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 3 & 0xffffffffffffff8)) >> (param_4 & 0x3f)
             & 1) != 0);
  }
  uVar3 = 0;
LAB_100081464:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = param_4;
  return auVar11;
}

