// rea decompile_all
// name: FUN_1005c1904
// address: 0x1005c1904
// body: available
// range: 0x1005c1904-0x1005c1ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c1904(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  
  lVar8 = *unaff_x20;
  if (lVar8 != 0) {
    lVar7 = unaff_x20[1];
    __ss6HasherV8_combineyySuF(1);
    FUN_1005ba3b8(param_1,lVar8,(char)lVar7);
  }
  lVar8 = unaff_x20[2];
  if (lVar8 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyySuF(lVar8);
  }
  iVar4 = *(int *)((long)unaff_x20 + 0x1c);
  if (iVar4 != 0) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys6UInt64VF((long)iVar4);
  }
  uVar2 = unaff_x20[4];
  uVar3 = unaff_x20[5];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(4);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  }
  uVar2 = unaff_x20[6];
  uVar3 = unaff_x20[7];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(6);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  }
  lVar8 = unaff_x20[8];
  if ((int)lVar8 != 0) {
    __ss6HasherV8_combineyySuF(7);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar8);
  }
  if ((*(byte *)((long)unaff_x20 + 0x44) & 1) != 0) {
    __ss6HasherV8_combineyySuF(8);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  if ((*(long *)(unaff_x20[9] + 0x10) != 0) && (FUN_1005ba5d0(unaff_x20[9],9), unaff_x21 != 0)) {
    return;
  }
  uVar2 = unaff_x20[10];
  uVar3 = unaff_x20[0xb];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(10);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  }
  uVar2 = unaff_x20[0xc];
  uVar3 = unaff_x20[0xd];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(0xb);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  }
  lVar8 = unaff_x20[0xe];
  uVar5 = (uint)((ulong)unaff_x20[0xf] >> 0x20);
  uVar6 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if ((unaff_x20[0xf] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1005c1ac8;
    }
    lVar7 = (long)(int)lVar8;
    lVar8 = lVar8 >> 0x20;
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    lVar7 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar8 + 0x18);
  }
  if (lVar7 == lVar8) {
    return;
  }
LAB_1005c1ac8:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

