// rea decompile_all
// name: FUN_10059d360
// address: 0x10059d360
// body: available
// range: 0x10059d360-0x10059d4f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10059d360(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_1005bb1f4(*unaff_x20,2), unaff_x21 != 0)) {
    return;
  }
  lVar4 = unaff_x20[4];
  if (lVar4 != 0) {
    lVar7 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar7,lVar4);
  }
  if ((*(byte *)(unaff_x20 + 6) & 1) == 0) {
    lVar4 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyys6UInt64VF(lVar4);
    if ((*(byte *)(unaff_x20 + 8) & 1) != 0) goto LAB_10059d3d4;
LAB_10059d498:
    lVar4 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyys6UInt64VF(lVar4);
    bVar1 = *(byte *)(unaff_x20 + 10);
  }
  else {
    if ((*(byte *)(unaff_x20 + 8) & 1) == 0) goto LAB_10059d498;
LAB_10059d3d4:
    bVar1 = *(byte *)(unaff_x20 + 10);
  }
  if ((bVar1 & 1) == 0) {
    uVar5 = unaff_x20[9];
    __ss6HasherV8_combineyySuF(6);
    uVar6 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar6 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar6);
  }
  uVar6 = unaff_x20[0xc];
  if (uVar6 >> 0x3c < 0xf) {
    lVar4 = unaff_x20[0xb];
    __ss6HasherV8_combineyySuF(7);
    FUN_100008184(lVar4,uVar6);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,lVar4,uVar6);
    FUN_100006cc8(lVar4,uVar6);
  }
  lVar4 = unaff_x20[0xe];
  if (lVar4 != 0) {
    lVar7 = unaff_x20[0xd];
    __ss6HasherV8_combineyySuF(8);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar7,lVar4);
  }
  lVar4 = unaff_x20[1];
  uVar2 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_10059d4d8;
    }
    lVar7 = (long)(int)lVar4;
    lVar4 = lVar4 >> 0x20;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    lVar7 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  if (lVar7 == lVar4) {
    return;
  }
LAB_10059d4d8:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

