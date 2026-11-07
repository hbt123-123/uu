// rea decompile_all
// name: FUN_100081610
// address: 0x100081610
// body: available
// range: 0x100081610-0x1000818b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100081610(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x20;
  uint uVar10;
  long lVar11;
  long local_a8 [9];
  
  lVar11 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(local_a8,*(undefined8 *)(lVar11 + 0x28));
  uVar10 = (uint)param_4;
  uVar4 = uVar10 >> 6 & 3;
  if (uVar4 == 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(local_a8,param_2,param_3);
  }
  else {
    if (uVar4 != 1) {
      if ((param_3 == 0 && param_2 == 0) && ((uVar10 & 0xff) == 0x80)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 2;
      }
      __ss6HasherV8_combineyySuF();
      goto LAB_1000816dc;
    }
    __ss6HasherV8_combineyySuF(3);
    __sSJ4hash4intoys6HasherVz_tF(local_a8,param_2,param_3);
  }
  uVar6 = (ulong)(uVar10 & 1);
  __ss6HasherV8_combineyys5UInt8VF();
LAB_1000816dc:
  __ss6HasherV9_finalizeSiyF();
  uVar8 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar11 + 0x38 + (uVar6 >> 3 & 0xffffffffffffff8)) >> (uVar6 & 0x3f) & 1) != 0) {
    lVar9 = *(long *)(lVar11 + 0x30);
    do {
      puVar1 = (ulong *)(lVar9 + uVar6 * 0x18);
      uVar7 = *puVar1;
      uVar2 = puVar1[1];
      bVar3 = (byte)puVar1[2];
      if (bVar3 >> 6 == 0) {
        if ((uVar10 & 0xff) < 0x40) {
LAB_1000817b4:
          if (((uVar7 == param_2 && uVar2 == param_3) ||
              (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (uVar7,uVar2,param_2,param_3,0), (uVar7 & 1) != 0)) &&
             (((uVar10 ^ bVar3) & 1) == 0)) {
            FUN_100066dfc(param_2,param_3,param_4);
LAB_100081870:
            puVar1 = (ulong *)(*(long *)(lVar11 + 0x30) + uVar6 * 0x18);
            uVar6 = puVar1[1];
            *param_1 = *puVar1;
            param_1[1] = uVar6;
            *(char *)(param_1 + 2) = (char)puVar1[2];
            FUN_100066dec();
            return 0;
          }
        }
      }
      else if (bVar3 >> 6 == 1) {
        if (uVar4 == 1) goto LAB_1000817b4;
      }
      else {
        if ((uVar2 == 0 && uVar7 == 0) && (bVar3 == 0x80)) {
          bVar5 = param_3 == 0 && param_2 == 0;
        }
        else {
          bVar5 = param_2 == 1 && param_3 == 0;
        }
        if (uVar4 == 2 && ((uVar10 & 0xff) == 0x80 && bVar5)) goto LAB_100081870;
      }
      uVar6 = uVar6 + 1 & ~uVar8;
    } while ((*(ulong *)(lVar11 + 0x38 + (uVar6 >> 3 & 0xffffffffffffff8)) >> (uVar6 & 0x3f) & 1) !=
             0);
  }
  lVar11 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar11);
  local_a8[0] = *unaff_x20;
  FUN_100066dec(param_2,param_3,param_4);
  FUN_100081e84(param_2,param_3,param_4,uVar6,lVar11);
  *unaff_x20 = local_a8[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  *(char *)(param_1 + 2) = (char)param_4;
  return 1;
}

