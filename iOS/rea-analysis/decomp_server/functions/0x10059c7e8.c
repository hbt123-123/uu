// rea decompile_all
// name: FUN_10059c7e8
// address: 0x10059c7e8
// body: available
// range: 0x10059c7e8-0x10059c993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10059c7e8(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  bVar2 = *(byte *)(unaff_x20 + 4);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x21);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  cVar3 = *(char *)((long)unaff_x20 + 0x21);
  if (cVar3 != '\x03') {
    __ss6HasherV8_combineyySuF(0x22);
    __ss6HasherV8_combineyySuF(cVar3);
  }
  lVar7 = unaff_x20[7];
  if (lVar7 != 0) {
    lVar6 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    lVar8 = unaff_x20[8];
    __ss6HasherV8_combineyySuF(0x23);
    uStack_78 = param_1[5];
    local_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    local_60 = param_1[8];
    uStack_98 = param_1[1];
    local_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    FUN_100008184(lVar6,lVar1);
    _swift_bridgeObjectRetain(lVar7);
    FUN_10059e3f8(&local_a0,lVar6,lVar1,lVar7,lVar8);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
    }
    FUN_100541944(lVar6,lVar1,lVar7,lVar8);
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
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_1005bad30(*unaff_x20,999), unaff_x21 != 0)) {
    return;
  }
  FUN_100563e08(param_1,1000,0x20000000,unaff_x20[3]);
  if (unaff_x21 != 0) {
    return;
  }
  lVar7 = unaff_x20[1];
  uVar4 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_10059c988;
    }
    lVar6 = (long)(int)lVar7;
    lVar7 = lVar7 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(lVar7 + 0x10);
    lVar7 = *(long *)(lVar7 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_10059c988:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

