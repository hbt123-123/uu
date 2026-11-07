// rea decompile_all
// name: FUN_100081208
// address: 0x100081208
// body: available
// range: 0x100081208-0x100081343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100081208(ulong param_1,ulong param_2,byte param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auVar9 [16];
  
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_4 = param_4 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 3 & 0xffffffffffffff8)) >> (param_4 & 0x3f) & 1) !=
      0) {
    lVar8 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar7 = (ulong *)(lVar8 + param_4 * 0x18);
      uVar4 = *puVar7;
      uVar1 = puVar7[1];
      uVar3 = puVar7[2];
      bVar2 = (byte)uVar3 >> 6;
      if (bVar2 == 0) {
        if (param_3 < 0x40) {
LAB_1000812f8:
          if ((uVar4 == param_1 && uVar1 == param_2) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar4,uVar1,param_1,param_2,0), (uVar4 & 1) != 0)) goto LAB_100081318;
        }
      }
      else if (bVar2 == 1) {
        if (((param_3 & 0xc0) == 0x40) &&
           (((uVar4 == param_1 && uVar1 == param_2 ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar4,uVar1,param_1,param_2,0), (uVar4 & 1) != 0)) &&
            (((param_3 ^ (byte)uVar3) & 1) == 0)))) {
LAB_100081318:
          uVar5 = 1;
          goto LAB_100081324;
        }
      }
      else if ((param_3 & 0xc0) == 0x80) goto LAB_1000812f8;
      param_4 = param_4 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 3 & 0xffffffffffffff8)) >> (param_4 & 0x3f)
             & 1) != 0);
  }
  uVar5 = 0;
LAB_100081324:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = param_4;
  return auVar9;
}

