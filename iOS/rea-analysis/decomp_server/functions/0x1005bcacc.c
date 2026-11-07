// rea decompile_all
// name: FUN_1005bcacc
// address: 0x1005bcacc
// body: available
// range: 0x1005bcacc-0x1005bcc3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005bcacc(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    return;
  }
  uStack_78 = unaff_x20[5];
  local_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  local_60 = unaff_x20[8];
  uStack_98 = unaff_x20[1];
  local_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  puVar9 = (undefined8 *)(param_1 + 0x30);
  do {
    lVar5 = lVar5 + -1;
    lVar1 = puVar9[-2];
    uVar2 = puVar9[-1];
    uVar8 = *puVar9;
    uStack_c8 = uStack_78;
    local_d0 = local_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    local_b0 = local_60;
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    FUN_100008184(lVar1,uVar2);
    _swift_retain(uVar8);
    (*param_3)();
    if (unaff_x21 == 0) {
      uVar3 = (uint)(uVar2 >> 0x20);
      uVar4 = uVar3 >> 0x1e;
      if (uVar3 >> 0x1e < 2) {
        if (uVar4 == 0) {
          if ((uVar2 & 0xff000000000000) == 0) goto LAB_1005bcb78;
        }
        else {
          lVar6 = (long)(int)lVar1;
          lVar7 = lVar1 >> 0x20;
LAB_1005bcbe8:
          if (lVar6 == lVar7) goto LAB_1005bcb78;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_f0,lVar1,uVar2);
      }
      else if (uVar4 == 2) {
        lVar6 = *(long *)(lVar1 + 0x10);
        lVar7 = *(long *)(lVar1 + 0x18);
        goto LAB_1005bcbe8;
      }
    }
    else {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
LAB_1005bcb78:
    FUN_100006cdc(lVar1,uVar2);
    _swift_release(uVar8);
    if (lVar5 == 0) {
      unaff_x20[5] = uStack_c8;
      unaff_x20[4] = local_d0;
      unaff_x20[7] = uStack_b8;
      unaff_x20[6] = uStack_c0;
      unaff_x20[8] = local_b0;
      unaff_x20[1] = uStack_e8;
      *unaff_x20 = local_f0;
      unaff_x20[3] = uStack_d8;
      unaff_x20[2] = uStack_e0;
      return;
    }
    uStack_78 = uStack_c8;
    local_80 = local_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    local_60 = local_b0;
    uStack_98 = uStack_e8;
    local_a0 = local_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    puVar9 = puVar9 + 3;
  } while( true );
}

