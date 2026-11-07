// rea decompile_all
// name: FUN_1005b6884
// address: 0x1005b6884
// body: available
// range: 0x1005b6884-0x1005b6aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b6884(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong *unaff_x20;
  long unaff_x21;
  uint uVar7;
  ulong uVar8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar8 = unaff_x20[2];
  bVar3 = (byte)unaff_x20[3];
  uVar7 = (uint)bVar3;
  if ((((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (uVar7 != 0xff)) {
    uVar4 = (uint)(uVar8 >> 0x3c) & 3 | (uVar7 & 1) << 2;
    if (uVar4 < 3) {
      if (uVar4 == 0) {
        FUN_10051ff3c(uVar1,uVar2,uVar8,bVar3);
        __ss6HasherV8_combineyySuF(1);
        uVar8 = 0;
        if ((uVar2 & 1) == 0) {
          uVar8 = uVar1;
        }
        __ss6HasherV8_combineyySuF(uVar8);
      }
      else if (uVar4 == 1) {
        FUN_10051ff3c(uVar1,uVar2,uVar8,bVar3);
        __ss6HasherV8_combineyySuF(2);
        uVar2 = 0;
        if ((uVar1 & 0x7fffffffffffffff) != 0) {
          uVar2 = uVar1;
        }
        __ss6HasherV8_combineyys6UInt64VF(uVar2);
      }
      else {
        __ss6HasherV8_combineyySuF(3);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      }
    }
    else if (uVar4 == 3) {
      FUN_10051ff3c(uVar1,uVar2,uVar8,bVar3);
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyys5UInt8VF((uint)uVar1 & 1);
    }
    else if (uVar4 == 4) {
      FUN_1005bfd50();
      if (unaff_x21 != 0) {
        return;
      }
    }
    else {
      __ss6HasherV8_combineyySuF(6);
      uStack_78 = param_1[5];
      local_80 = param_1[4];
      uStack_68 = param_1[7];
      uStack_70 = param_1[6];
      local_60 = param_1[8];
      uStack_98 = param_1[1];
      local_a0 = *param_1;
      uStack_88 = param_1[3];
      uStack_90 = param_1[2];
      FUN_10051feb8(uVar1,uVar2,uVar8,uVar7 & 1);
      FUN_1005b7378(&local_a0,uVar1,uVar2,uVar8 & 0xcfffffffffffffff);
      if (unaff_x21 != 0) {
        _swift_errorRelease();
      }
      FUN_10051ff3c(uVar1,uVar2,uVar8,bVar3);
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
  }
  uVar1 = unaff_x20[4];
  uVar7 = (uint)(unaff_x20[5] >> 0x20);
  uVar4 = uVar7 >> 0x1e;
  if (uVar7 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((unaff_x20[5] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1005b6980;
    }
    lVar5 = (long)(int)uVar1;
    lVar6 = (long)uVar1 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar5 = *(long *)(uVar1 + 0x10);
    lVar6 = *(long *)(uVar1 + 0x18);
  }
  if (lVar5 == lVar6) {
    return;
  }
LAB_1005b6980:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

