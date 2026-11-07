// rea decompile_all
// name: FUN_100081e84
// address: 0x100081e84
// body: available
// range: 0x100081e84-0x10008212f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100081e84(ulong param_1,ulong param_2,uint param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 auStack_a8 [72];
  
  uVar7 = *(ulong *)(*unaff_x20 + 0x10);
  uVar6 = *(ulong *)(*unaff_x20 + 0x18);
  if ((uVar7 < uVar6) && ((param_5 & 1) != 0)) goto LAB_1000820c4;
  if ((param_5 & 1) == 0) {
    if (uVar7 < uVar6) {
      FUN_100082460();
      goto LAB_1000820c4;
    }
    FUN_10008286c(uVar7 + 1);
  }
  else {
    FUN_100082e64(uVar7 + 1);
  }
  lVar9 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar9 + 0x28));
  uVar3 = param_3 >> 6 & 3;
  if (uVar3 == 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_a8,param_1,param_2);
LAB_100081f60:
    param_4 = (ulong)(param_3 & 1);
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    if (uVar3 == 1) {
      __ss6HasherV8_combineyySuF(3);
      __sSJ4hash4intoys6HasherVz_tF(auStack_a8,param_1,param_2);
      goto LAB_100081f60;
    }
    if ((param_2 == 0 && param_1 == 0) && ((param_3 & 0xff) == 0x80)) {
      param_4 = 0;
    }
    else {
      param_4 = 2;
    }
    __ss6HasherV8_combineyySuF();
  }
  __ss6HasherV9_finalizeSiyF();
  uVar7 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  param_4 = param_4 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar9 + 0x38 + (param_4 >> 3 & 0xffffffffffffff8)) >> (param_4 & 0x3f) & 1) != 0)
  {
    lVar10 = *(long *)(lVar9 + 0x30);
    do {
      puVar8 = (ulong *)(lVar10 + param_4 * 0x18);
      uVar6 = *puVar8;
      uVar1 = puVar8[1];
      bVar2 = (byte)puVar8[2];
      if (bVar2 >> 6 == 0) {
        if ((param_3 & 0xff) < 0x40) {
LAB_10008206c:
          if (((uVar6 == param_1 && uVar1 == param_2) ||
              (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (uVar6,uVar1,param_1,param_2,0), (uVar6 & 1) != 0)) &&
             (((param_3 ^ bVar2) & 1) == 0)) {
LAB_1000820b4:
            __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&DAT_1000f8130);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000820c4);
            (*pcVar5)();
          }
        }
      }
      else if (bVar2 >> 6 == 1) {
        if (uVar3 == 1) goto LAB_10008206c;
      }
      else {
        if ((uVar1 == 0 && uVar6 == 0) && (bVar2 == 0x80)) {
          bVar4 = param_2 == 0 && param_1 == 0;
        }
        else {
          bVar4 = param_1 == 1 && param_2 == 0;
        }
        if (uVar3 == 2 && ((param_3 & 0xff) == 0x80 && bVar4)) goto LAB_1000820b4;
      }
      param_4 = param_4 + 1 & ~uVar7;
    } while ((*(ulong *)(lVar9 + 0x38 + (param_4 >> 3 & 0xffffffffffffff8)) >> (param_4 & 0x3f) & 1)
             != 0);
  }
LAB_1000820c4:
  lVar10 = *unaff_x20;
  lVar9 = lVar10 + (param_4 >> 6) * 8;
  *(ulong *)(lVar9 + 0x38) = *(ulong *)(lVar9 + 0x38) | 1L << (param_4 & 0x3f);
  puVar8 = (ulong *)(*(long *)(lVar10 + 0x30) + param_4 * 0x18);
  *puVar8 = param_1;
  puVar8[1] = param_2;
  *(char *)(puVar8 + 2) = (char)param_3;
  if (SCARRY8(*(long *)(lVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100082130);
    (*pcVar5)();
  }
  *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
  return;
}

