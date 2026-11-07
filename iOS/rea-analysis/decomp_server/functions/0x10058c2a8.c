// rea decompile_all
// name: FUN_10058c2a8
// address: 0x10058c2a8
// body: available
// range: 0x10058c2a8-0x10058c577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10058c2a8(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar8 = unaff_x20[3];
  if (lVar8 != 0) {
    lVar9 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar9,lVar8);
  }
  lVar8 = unaff_x20[8];
  if (lVar8 != 0) {
    lVar9 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar9,lVar8);
  }
  if ((*(byte *)((long)unaff_x20 + 0x24) & 1) == 0) {
    lVar8 = unaff_x20[4];
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar8);
  }
  cVar3 = *(char *)((long)unaff_x20 + 0x25);
  if ((long)cVar3 != 3) {
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&DAT_10083cce0 + (long)cVar3 * 8));
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x26);
  if ((ulong)bVar2 != 0x12) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF((ulong)bVar2 + 1);
  }
  lVar8 = unaff_x20[6];
  if (lVar8 != 0) {
    lVar9 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(6);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar9,lVar8);
  }
  lVar8 = unaff_x20[10];
  if (lVar8 != 0) {
    lVar9 = unaff_x20[9];
    __ss6HasherV8_combineyySuF(7);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar9,lVar8);
  }
  lVar8 = unaff_x20[0x10];
  if (lVar8 != 0) {
    lVar9 = unaff_x20[0xe];
    uVar1 = unaff_x20[0xf];
    lVar10 = unaff_x20[0x11];
    __ss6HasherV8_combineyySuF(8);
    uStack_78 = param_1[5];
    local_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    local_60 = param_1[8];
    uStack_98 = param_1[1];
    local_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    FUN_100008184(lVar9,uVar1);
    _swift_bridgeObjectRetain(lVar8);
    _swift_retain(lVar10);
    FUN_100596ebc();
    if (unaff_x21 == 0) {
      uVar4 = (uint)(uVar1 >> 0x20);
      uVar5 = uVar4 >> 0x1e;
      if (uVar4 >> 0x1e < 2) {
        if (uVar5 == 0) {
          if ((uVar1 & 0xff000000000000) == 0) goto LAB_10058c438;
        }
        else {
          lVar6 = (long)(int)lVar9;
          lVar7 = lVar9 >> 0x20;
LAB_10058c55c:
          if (lVar6 == lVar7) goto LAB_10058c438;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_a0,lVar9,uVar1);
      }
      else if (uVar5 == 2) {
        lVar6 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        goto LAB_10058c55c;
      }
    }
    else {
      _swift_errorRelease();
    }
LAB_10058c438:
    FUN_1005419ec(lVar9,uVar1,lVar8,lVar10);
    param_1[5] = uStack_78;
    param_1[4] = local_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    param_1[8] = local_60;
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
  }
  if ((*(byte *)((long)unaff_x20 + 0x5c) & 1) == 0) {
    lVar8 = unaff_x20[0xb];
    __ss6HasherV8_combineyySuF(9);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar8);
  }
  lVar8 = unaff_x20[0xd];
  if (lVar8 != 0) {
    lVar9 = unaff_x20[0xc];
    __ss6HasherV8_combineyySuF(10);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar9,lVar8);
  }
  bVar2 = *(byte *)(unaff_x20 + 0x12);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x11);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  lVar8 = *unaff_x20;
  uVar4 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[1] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_10058c500;
    }
    lVar9 = (long)(int)lVar8;
    lVar8 = lVar8 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar8 + 0x18);
  }
  if (lVar9 == lVar8) {
    return;
  }
LAB_10058c500:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

