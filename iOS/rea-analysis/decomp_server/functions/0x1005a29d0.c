// rea decompile_all
// name: FUN_1005a29d0
// address: 0x1005a29d0
// body: available
// range: 0x1005a29d0-0x1005a2b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005a29d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  
  lVar6 = *unaff_x20;
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(lVar5);
    puVar7 = (undefined4 *)(lVar6 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar7);
      lVar5 = lVar5 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
  lVar6 = unaff_x20[1];
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyySuF(lVar5);
    puVar7 = (undefined4 *)(lVar6 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar7);
      lVar5 = lVar5 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
  lVar5 = unaff_x20[6];
  if (lVar5 != 0) {
    lVar6 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar6,lVar5);
  }
  lVar5 = unaff_x20[8];
  if (lVar5 != 0) {
    lVar6 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(4);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar6,lVar5);
  }
  lVar6 = unaff_x20[2];
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 != 0) {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyySuF(lVar5);
    puVar8 = (undefined8 *)(lVar6 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar2 = *puVar8;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar8 = puVar8 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = unaff_x20[3];
  uVar3 = (uint)((ulong)unaff_x20[4] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((unaff_x20[4] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1005a2b28;
    }
    lVar6 = (long)(int)lVar5;
    lVar5 = lVar5 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = *(long *)(lVar5 + 0x18);
  }
  if (lVar6 == lVar5) {
    return;
  }
LAB_1005a2b28:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

